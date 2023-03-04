/////////////////////////////////////////////////////////////////////////////////////////////
// File: Obsi.cpp
// Revision: 1g
// Description: Simple Obsidium protection API wrapper class, 32- and 64-bit
// Original author: Thomas Wolf
/////////////////////////////////////////////////////////////////////////////////////////////

#pragma hdrstop
#include "Obsi.h"

/////////////////////////////////////////////////////////////////////////////////////////////
// Obsi implementation
/////////////////////////////////////////////////////////////////////////////////////////////

bool Obsi::setLicenseShort( const std::string &info, const std::string &key, const std::string &sysid )
{
	return _OBSNS_::obsSetLicenseShort( info.c_str(), key.c_str(), sysid.c_str() );
}

bool Obsi::storeLicenseShort( const std::string &info, const std::string &key, const std::string &sysid )
{
	return _OBSNS_::obsStoreLicenseShort( info.c_str(), key.c_str(), sysid.c_str() );
}

bool Obsi::licenseExpiration( FILETIME &ft )
{
	return _OBSNS_::obsGetLicenseExpiration( &ft );
}

std::string	Obsi::systemId()
{
	char buffer[ 32 ] = { 0 };	// sufficient length for both 32- and 64-bit versions
	if (_OBSNS_::obsGetSystemId( buffer ))
    {
		return std::string( buffer );
    }
	return std::string();
}

bool Obsi::licenseHash( std::vector<unsigned char> &hash )
{
	hash.clear();
	unsigned char buffer[ 16 ] = { 0 };

	if (_OBSNS_::obsGetLicenseHash( buffer ))
	{
		for (size_t i = 0; i < sizeof(buffer); i++)
		{
			hash.push_back( buffer[ i ] );
		}
		return true;
	}
	return false;
}

bool Obsi::haveExpirationDate()
{
	// Get fixed expiration date (time trial)
	FILETIME ftExpire;
	_OBSNS_::obsGetExpirationDate( &ftExpire );
	// Expiration date set if low or high dword is non-zero
	return (ftExpire.dwHighDateTime != 0) || (ftExpire.dwLowDateTime != 0);
}

bool Obsi::haveTrial()
{
	// Trial set if trial days or runs are not -1
	return (_OBSNS_::obsGetTrialDays() != -1) || (_OBSNS_::obsGetTrialRuns() != -1) || haveExpirationDate();
}

bool Obsi::trialDateExpired()
{
	// No expiration date set
	if (!haveExpirationDate()) return false;

	// Get fixed expiration date (time trial)
	FILETIME ftExpire;
	_OBSNS_::obsGetExpirationDate( &ftExpire );

	// Get current system date in file time format
	FILETIME ftSystem = { 0 };
	::GetSystemTimeAsFileTime( &ftSystem );

	// Compare with expiration date
	bool expired = false;

	if (ftSystem.dwHighDateTime > ftExpire.dwHighDateTime)
	{
		expired = true;
	}
	else if (ftSystem.dwHighDateTime == ftExpire.dwHighDateTime)
	{
		if (ftSystem.dwLowDateTime > ftExpire.dwLowDateTime)
			expired = true;
	}
	return expired;
}

bool Obsi::trialExpired()
{
	return !_OBSNS_::obsGetTrialDays() || !_OBSNS_::obsGetTrialRuns() || trialDateExpired();
}

std::string Obsi::licenseInfo( unsigned long idx )
{
	char buf[ 128 ] = { 0 };	// max. length for short keys and long keys (extended info)

	if (_OBSNS_::obsGetLicenseInfo( idx, buf ))
	{
		return std::string( buf );
	}
	return std::string();
}

std::wstring Obsi::licenseInfoW( unsigned long idx )
{
	wchar_t buf[ 128 ] = { 0 };	// max. length for short keys and long keys (extended info)

	if (_OBSNS_::obsGetLicenseInfoW( idx, buf ))
	{
		return std::wstring( buf );
	}
	return std::wstring();
}

/////////////////////////////////////////////////////////////////////////////////////////////
// EOF
/////////////////////////////////////////////////////////////////////////////////////////////

#ifdef __BORLANDC__
#pragma package(smart_init)
#endif

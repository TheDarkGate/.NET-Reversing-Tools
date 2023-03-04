/////////////////////////////////////////////////////////////////////////////////////////////
// File: Obsi.h
// Original author: Thomas Wolf
/////////////////////////////////////////////////////////////////////////////////////////////

#ifndef __OBSIDIUM_WRAP_H
#define __OBSIDIUM_WRAP_H

#include <windows.h>
#include <vector>
#include <string>

#define OBSIDIUM_USE_NAMESPACE
#define _OBSNS_ obsidium

#if defined(_M_X64) || defined(__amd64__)
  #include "obsidium64.h"
#else
  #include "obsidium.h"
#endif
#pragma hdrstop

//============================================================================
// Obsi implementation
//============================================================================
class Obsi
{
public:
	static bool			licensed()			{ return _OBSNS_::obsIsLicensed(); }
	static int			licenseStatus()		{ return _OBSNS_::obsGetLicenseStatus(); }
	static bool			licenseValid()		{ return licenseStatus() == LIC_STATUS_VALID; } 
	static bool			licenseMissing()	{ return licenseStatus() == LIC_STATUS_NOTFOUND; } 
	static bool			licenseExpired()	{ return licenseStatus() == LIC_STATUS_EXPIRED; } 
	static bool			licenseInvalid()	{ return licenseStatus() == LIC_STATUS_INVALID; } 
	static bool			licenseBanned()		{ return licenseStatus() == LIC_STATUS_BLACKLISTED; } 
	static bool			licenseBadSystem()	{ return licenseStatus() == LIC_STATUS_BAD_SYSTEMID; } 
	static bool			licenseExpiration( FILETIME &ft );
	static bool			licenseHash( std::vector<unsigned char> &hash );
	static unsigned short customValue()	{ return _OBSNS_::obsGetCustomValue(); }
	static void			resetTrial()		{ _OBSNS_::obsDeleteTrialData(); }
	static int			trialDays()			{ return _OBSNS_::obsGetTrialDays(); }
	static int			initialTrialDays()	{ return _OBSNS_::obsGetInitialTrialDays(); }
	static int			trialRuns()			{ return _OBSNS_::obsGetTrialRuns(); }
	static int			initialTrialRuns()	{ return _OBSNS_::obsGetInitialTrialRuns(); }
	static void			disableLicense()	{ _OBSNS_::obsDisableLicense(); }
	static bool			removeLicense()		{ return _OBSNS_::obsDeleteLicenseData(); }
	static bool			setLicense( const std::string &lic ) { return _OBSNS_::obsSetLicense( lic.c_str() ); }
	static bool			storeLicense( const std::string &lic )	{ return _OBSNS_::obsStoreLicense( lic.c_str() ); }
	static bool			setLicenseShort( const std::string &info, const std::string &key, const std::string &sysid = std::string() );
	static bool			storeLicenseShort( const std::string &info, const std::string &key, const std::string &sysid = std::string() );
	static bool			setLicenseShort( const std::string &info, const std::string &key );
	static bool			storeLicenseShort( const std::string &info, const std::string &key );
	static bool			haveExpirationDate();
	static bool			haveTrial();
	static bool			trialDateExpired();
	static bool			trialExpired();
	static std::string	systemId();
	static std::string 	licenseInfo( unsigned long idx );
	static std::wstring	licenseInfoW( unsigned long idx );
	static bool			setExternalKey( const unsigned char *buffer, unsigned long size ) { return _OBSNS_::obsSetExternalKey( (const unsigned char *)buffer, size ); }
};
/////////////////////////////////////////////////////////////////////////////////////////////
// EOF
/////////////////////////////////////////////////////////////////////////////////////////////

#endif /* __OBSIDIUM_WRAP_H */

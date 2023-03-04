/*
	Obsidium protection API header file for backwards compatibility
*/
#ifndef OBSIDIUM_COMPAT_H
#define OBSIDIUM_COMPAT_H

#define PATTERN_REG_START 		OBSIDIUM_LIC_START
#define PATTERN_REG_END   		OBSIDIUM_LIC_END
#define PATTERN_ENC_START 		OBSIDIUM_ENC_START
#define PATTERN_ENC_END   		OBSIDIUM_ENC_END
#define PATTERN_VM_START  		OBSIDIUM_VM_START
#define PATTERN_VM_END    		OBSIDIUM_VM_END

#define CallMark 				obsCallMark
#define getCustomValue 			obsGetCustomValue
#define getLicenseExpiration	obsGetLicenseExpiration
#define getLicenseHash 			obsGetLicenseHash
#define getLicenseStatus 		obsGetLicenseStatus
#define getRegInfo 				obsGetLicenseInfo
#define getSystemID 			obsGetSystemId
#define getTrialDays 			obsGetTrialDays
#define getTrialRuns 			obsGetTrialRuns
#define getInitialTrialDays 	obsGetInitialTrialDays
#define getInitialTrialRuns 	obsGetInitialTrialRuns
#define isRegistered 			obsIsLicensed
#define setExternalKey 			obsSetExternalKey
#define setLicense 				obsSetLicense
#define setLicenseShort 		obsSetLicenseShort
#define storeLicense 			obsStoreLicense
#define storeLicenseShort 		obsStoreLicenseShort
#define deleteTrialData 		obsDeleteTrialData
#define getExpirationDate 		obsGetExpirationDate
#define deleteLicenseData 		obsDeleteLicenseData
#define disableLicense 			obsDisableLicense
#define isProtected 			obsIsProtected

#endif

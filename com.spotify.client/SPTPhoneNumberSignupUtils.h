//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTPhoneNumberSignupUtils : NSObject
{
}

- (id)potentialCountryCodeFromLocale:(id)arg1;
- (id)potentialCountryCodesFromTelephonyNetworkInfo:(id)arg1;
- (id)countryCodeFromTelephonyNetworkInfo:(id)arg1;
- (id)countriesFromAllowedCallingCodes:(id)arg1;
- (id)countriesFromLocalJSON;
- (id)countryCodeFromTelephonyNetworkInfo:(id)arg1 locale:(id)arg2;
- (id)countryNameForCountryCode:(id)arg1 withLocale:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SPTPhoneNumberSignupPhoneNumberEntryModel : NSObject
{
    NSDictionary *_allowedCallingCodes;
    NSString *_selectedCountryCode;
    NSString *_nationalPhoneNumber;
}

@property(copy, nonatomic) NSString *nationalPhoneNumber; // @synthesize nationalPhoneNumber=_nationalPhoneNumber;
@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;
@property(readonly, copy, nonatomic) NSDictionary *allowedCallingCodes; // @synthesize allowedCallingCodes=_allowedCallingCodes;
- (void).cxx_destruct;
- (void)verifyCountryCodeInCountries;
- (id)initWithAllowedCallingCodes:(id)arg1 selectedCountryCode:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTSignupMarketRestrictionsModel : NSObject
{
    _Bool _termsDialogDisabled;
    _Bool _licenseInOneStepEnabled;
    _Bool _specificLicenseEnabled;
    _Bool _marketingOptInTextEnabled;
    _Bool _marketingOptInDialogEnabled;
}

@property(nonatomic, getter=isMarketingOptInDialogEnabled) _Bool marketingOptInDialogEnabled; // @synthesize marketingOptInDialogEnabled=_marketingOptInDialogEnabled;
@property(nonatomic, getter=isMarketingOptInTextEnabled) _Bool marketingOptInTextEnabled; // @synthesize marketingOptInTextEnabled=_marketingOptInTextEnabled;
@property(nonatomic, getter=isSpecificLicenseEnabled) _Bool specificLicenseEnabled; // @synthesize specificLicenseEnabled=_specificLicenseEnabled;
@property(nonatomic, getter=isLicenseInOneStepEnabled) _Bool licenseInOneStepEnabled; // @synthesize licenseInOneStepEnabled=_licenseInOneStepEnabled;
@property(nonatomic, getter=isTermsDialogDisabled) _Bool termsDialogDisabled; // @synthesize termsDialogDisabled=_termsDialogDisabled;
- (void)setRegistrationFlash;
- (_Bool)shouldShowSpecificLicense;
- (_Bool)canAcceptLicenseInOneDialog;
- (_Bool)shouldShowTermsAndPolicyDialog;
- (_Bool)shouldShowMarketingOptInDialog;
- (_Bool)shouldShowMarketingOptInText;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, RHDevSettingsController, _TtC7Napster17AccountController;

@interface RhapsodyUrls : NSObject
{
    NSDictionary *staticUrls;
    NSArray *rdsEnvironment;
    NSArray *eRemedyEnvironment;
    RHDevSettingsController *_devSettingsController;
}

+ (id)termsUrlForProgram:(id)arg1;
+ (id)instance;
@property(retain, nonatomic) RHDevSettingsController *devSettingsController; // @synthesize devSettingsController=_devSettingsController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC7Napster17AccountController *accountController;
- (id)appDelegate;
- (id)domainNameForSharing;
- (id)shareUrlForPath:(id)arg1;
@property(readonly, nonatomic) NSString *cancelSprintAccountUrl;
- (id)manageFamilyPlanUrl;
- (id)manageAccountUrlForCobrandId:(id)arg1;
- (id)resetPassword;
- (id)privacyPolicyUrlForCobrandId:(id)arg1;
- (id)termsOfUseUrlForCobrandId:(id)arg1;
- (id)rhapsodyHelpUrlForCobrandId:(id)arg1;
- (id)urlForName:(id)arg1;
- (id)helpURL;
@property(readonly, nonatomic) NSString *localeLanguage;
- (id)urlForDirectory:(id)arg1;
- (id)termsUrl;
- (id)privacyPolicyUrl;
- (void)dealloc;
- (id)init;

@end


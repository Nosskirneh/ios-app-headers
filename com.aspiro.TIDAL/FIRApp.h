//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRComponentContainer, FIROptions, NSString;

@interface FIRApp : NSObject
{
    _Bool _alreadySentConfigureNotification;
    _Bool _alreadySentDeleteNotification;
    _Bool _isDefaultApp;
    FIROptions *_options;
    NSString *_name;
    CDUnknownBlockType _getTokenImplementation;
    CDUnknownBlockType _getUIDImplementation;
    FIRComponentContainer *_container;
}

+ (id)readDataCollectionSwitchFromPlist;
+ (id)readDataCollectionSwitchFromUserDefaultsForApp:(id)arg1;
+ (_Bool)validateAppIDFingerprint:(id)arg1 withVersion:(id)arg2;
+ (_Bool)validateAppIDFormat:(id)arg1 withVersion:(id)arg2;
+ (id)actualBundleID;
+ (_Bool)validateAppID:(id)arg1;
+ (id)firebaseUserAgent;
+ (void)registerLibrary:(id)arg1 withVersion:(id)arg2;
+ (_Bool)isDefaultAppConfigured;
+ (void)registerAsConfigurable:(Class)arg1;
+ (id)errorForInvalidAppID;
+ (id)errorForSubspecConfigurationFailureWithDomain:(id)arg1 errorCode:(long long)arg2 service:(id)arg3 reason:(id)arg4;
+ (id)errorForMissingOptions;
+ (void)sendNotificationsToSDKs:(id)arg1;
+ (void)addAppToAppDictionary:(id)arg1;
+ (void)resetApps;
+ (id)allApps;
+ (id)appNamed:(id)arg1;
+ (id)defaultApp;
+ (void)configureWithName:(id)arg1 options:(id)arg2;
+ (void)configureDefaultAppWithOptions:(id)arg1 sendingNotifications:(_Bool)arg2;
+ (void)configureWithOptions:(id)arg1;
+ (void)configure;
@property(retain, nonatomic) FIRComponentContainer *container; // @synthesize container=_container;
@property(copy, nonatomic) CDUnknownBlockType getUIDImplementation; // @synthesize getUIDImplementation=_getUIDImplementation;
@property(copy, nonatomic) CDUnknownBlockType getTokenImplementation; // @synthesize getTokenImplementation=_getTokenImplementation;
@property(readonly, nonatomic) _Bool isDefaultApp; // @synthesize isDefaultApp=_isDefaultApp;
@property(nonatomic) _Bool alreadySentDeleteNotification; // @synthesize alreadySentDeleteNotification=_alreadySentDeleteNotification;
@property(nonatomic) _Bool alreadySentConfigureNotification; // @synthesize alreadySentConfigureNotification=_alreadySentConfigureNotification;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)sendLogsWithServiceName:(id)arg1 version:(id)arg2 error:(id)arg3;
- (void)clearDataCollectionSwitchFromUserDefaults;
- (id)expectedBundleID;
- (_Bool)isAppIDValid;
- (id)getUID;
- (void)checkExpectedBundleID;
@property(nonatomic, getter=isDataCollectionDefaultEnabled) _Bool dataCollectionDefaultEnabled;
@property(readonly, copy, nonatomic) FIROptions *options; // @synthesize options=_options;
- (_Bool)configureCore;
- (void)getTokenForcingRefresh:(_Bool)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)initInstanceWithName:(id)arg1 options:(id)arg2;
- (void)deleteApp:(CDUnknownBlockType)arg1;

@end


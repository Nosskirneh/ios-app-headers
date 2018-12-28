//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNEventContextSource-Protocol.h"

@class GADNEventContext, GADNObserverCollection, NSString;

@interface GADNApplication : NSObject <GADNEventContextSource>
{
    _Bool _appDidFinishLaunching;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasRunEarlyActivities
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasRunMainThreadEarlyActivities
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasRunAdditionalEarlyActivities
    GADNObserverCollection *_observers;
    _Bool _debugModeEnabled;
    _Bool _backgroundAdLoadingEnabled;
    NSString *_version;
    NSString *_buildNumber;
    NSString *_mainBundleIdentifier;
    NSString *_inAppPreviewCreativeToken;
    double _backgroundTimeIntervalSinceBoot;
    NSString *_sessionIdentifier;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) double backgroundTimeIntervalSinceBoot; // @synthesize backgroundTimeIntervalSinceBoot=_backgroundTimeIntervalSinceBoot;
@property(copy, nonatomic) NSString *inAppPreviewCreativeToken; // @synthesize inAppPreviewCreativeToken=_inAppPreviewCreativeToken;
@property(nonatomic) _Bool backgroundAdLoadingEnabled; // @synthesize backgroundAdLoadingEnabled=_backgroundAdLoadingEnabled;
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(readonly, copy, nonatomic) NSString *mainBundleIdentifier; // @synthesize mainBundleIdentifier=_mainBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)link;
- (void)runAdditionalEarlyActivities;
- (void)runMainThreadEarlyActivities;
- (void)runEarlyActivities;
- (void)runBackgroundEarlyActivitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateApplicationContext;
@property(readonly, nonatomic) _Bool backgroundAdReloadingEnabled;
@property(readonly, nonatomic) _Bool active;
- (void)appDidFinishLaunching;
@property(readonly, nonatomic) GADNEventContext *context;
- (void)updateBackgroundTimeIntervalSinceBoot;
- (void)initializeAnalytics;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


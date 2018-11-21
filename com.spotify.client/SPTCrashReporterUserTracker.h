//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "SPTThirdPartyUserTracker-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTCrashReporter, SPTDataLoaderCancellationToken, SPTFeatureFlagSignal, SPTLocalSettings, SPTProductState;

@interface SPTCrashReporterUserTracker : NSObject <SPTDataLoaderDelegate, SPTProductStateObserver, SPTFeatureFlagSignalObserver, SPTThirdPartyUserTracker>
{
    _Bool _enableUserTracker;
    _Bool _freeTierEnabled;
    NSString *_trackerUserID;
    id <SPTProductState> _productState;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    id <SPTCrashReporter> _crashReporter;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTLocalSettings> _localSettings;
    NSString *_UIModeString;
}

@property(retain, nonatomic) NSString *UIModeString; // @synthesize UIModeString=_UIModeString;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic, getter=shouldEnableUserTracker) _Bool enableUserTracker; // @synthesize enableUserTracker=_enableUserTracker;
@property(readonly, nonatomic) NSString *trackerUserID; // @synthesize trackerUserID=_trackerUserID;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)crashlyticsPartnerUserIDEndpoint;
@property(readonly, nonatomic, getter=shouldSendPartnerUserId) _Bool sendPartnerUserId;
- (void)trackLoggedInUserInterfaceMode;
- (void)userDidLogout;
- (void)userDidLoginWithProductState:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoaderFactory:(id)arg1 crashReporter:(id)arg2 freeTierEnabledSignal:(id)arg3 localSettings:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


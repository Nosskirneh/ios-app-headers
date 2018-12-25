//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSDate, NSString, NSURL, YTUserDefaults;
@protocol YTEventLogger, YTIdentityProvider, YTRetentionTrackingConfig;

@interface YTRetentionTrackingController : NSObject <YTUserChangedObserver, YTSystemNotificationsObserver>
{
    id <YTIdentityProvider> _identityProvider;
    NSString *_sourceApplication;
    NSURL *_interceptedURL;
    NSDate *_forcedDate;
    YTUserDefaults *_userDefaults;
    id <YTRetentionTrackingConfig> _retentionTrackingConfig;
    id <YTEventLogger> _eventLogger;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)sendRetentionLog;
- (id)epochSecondsFlooredToHour;
- (_Bool)logEventWithParams:(id)arg1;
- (void)userDidChange;
- (void)appDidBecomeActive:(id)arg1;
- (void)applicationWillOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


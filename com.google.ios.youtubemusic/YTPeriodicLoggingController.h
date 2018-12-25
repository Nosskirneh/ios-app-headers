//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHotConfigObserver-Protocol.h"
#import "YTLastActionObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSString, YTMonotonicDate, YTTimedAction, YTUserDefaults;
@protocol YTEventLogger, YTIdentityProvider, YTLastActionProvider, YTPeriodicLoggingConfig;

@interface YTPeriodicLoggingController : NSObject <YTHotConfigObserver, YTLastActionObserver, YTSystemNotificationsObserver, YTUserChangedObserver>
{
    YTTimedAction *_scheduledHeartbeat;
    id <YTEventLogger> _eventLogger;
    YTMonotonicDate *_firstActionDate;
    id <YTPeriodicLoggingConfig> _config;
    id <YTLastActionProvider> _lactProvider;
    id <YTIdentityProvider> _identityProvider;
    YTUserDefaults *_userDefaults;
    _Bool _isEnabled;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)resetIndex;
- (void)heartbeatWithTrigger:(int)arg1;
- (void)stopHeartbeat;
- (void)maybeStartHeartbeat;
- (void)applyConfigs;
- (_Bool)isEnabled;
- (id)firstActionDate;
- (id)scheduledHeartbeat;
- (void)userDidChange;
- (void)hotConfigDidChange:(id)arg1;
- (void)actionDidOccur;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

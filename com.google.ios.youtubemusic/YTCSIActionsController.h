//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"

@class CSIConfiguration, GTMSessionFetcherService, NSMutableSet, NSString, NSTimer, YTSystemNotifications;
@protocol CSITimeSource;

@interface YTCSIActionsController : NSObject <YTSystemNotificationsObserver>
{
    NSMutableSet *_actions;
    YTSystemNotifications *_systemNotifications;
    GTMSessionFetcherService *_fetcherService;
    NSTimer *_reportingTimer;
    id <CSITimeSource> _timeSource;
    CSIConfiguration *_config;
}

@property(readonly, nonatomic) CSIConfiguration *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)arg1;
- (void)timerDidTick;
- (void)flush;
@property(retain, nonatomic) id <CSITimeSource> timeSource; // @dynamic timeSource;
@property(readonly, nonatomic) NSMutableSet *actions; // @dynamic actions;
- (id)fetcherService;
- (void)stopTimer;
- (void)dealloc;
- (id)initWithSystemNotifications:(id)arg1 fetcherService:(id)arg2 samplingRate:(float)arg3 globalConfig:(id)arg4 serviceName:(id)arg5;
- (void)unregisterAction:(id)arg1;
- (void)registerAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


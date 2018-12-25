//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTimingResponderEventProcessorDelegate-Protocol.h"

@class GIMMe, GTMSessionFetcherService, NSMutableDictionary, NSString, YTCSIConfiguration, YTReachabilityController, YTSystemNotifications, YTTimedAction;
@protocol CSITimeSource;

@interface YTCSIController : NSObject <YTSystemNotificationsObserver, YTTimingResponderEventProcessorDelegate>
{
    NSMutableDictionary *_beacons;
    YTCSIConfiguration *_csiConfiguration;
    id <CSITimeSource> _csiTimeSource;
    YTReachabilityController *_reachabilityController;
    GTMSessionFetcherService *_fetcherService;
    YTTimedAction *_reportingTimedAction;
    YTSystemNotifications *_systemNotifications;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)setTimeSource:(id)arg1;
- (void)reportingTimerDidTick;
- (void)applicationWillResignActive:(id)arg1;
- (void)clearBeacon:(id)arg1;
- (id)getBeaconWithName:(id)arg1;
- (void)mapCSIAction:(id)arg1 toBeacon:(id)arg2;
- (void)handleCSIAction:(id)arg1;
- (void)stopTimer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

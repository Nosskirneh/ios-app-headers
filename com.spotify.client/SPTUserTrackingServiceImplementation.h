//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUserTrackingService-Protocol.h"

@class NSString, SPTAdjustURLSanitizer, SPTAdjustUserTracker, SPTAllocationContext, SPTTrackerBroadcaster;
@protocol SPTContainerService, SPTCoreService, SPTDebugService, SPTPushNotificationController, SPTPushNotificationsService, SPTPushTokenUserTracker, SPTPushTokenUserTrackerService;

@interface SPTUserTrackingServiceImplementation : NSObject <SPTUserTrackingService>
{
    SPTTrackerBroadcaster *_trackerBroadcaster;
    id <SPTPushNotificationController> _pushNotificationsController;
    SPTAdjustUserTracker *_adjustUserTracker;
    id <SPTPushTokenUserTracker> _pushTokenUserTracker;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTPushNotificationsService> _pushNotificationsService;
    id <SPTPushTokenUserTrackerService> _pushTokenUserTrackerService;
    id <SPTDebugService> _debugService;
    SPTAdjustURLSanitizer *_adjustURLSanitizer;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTAdjustURLSanitizer *adjustURLSanitizer; // @synthesize adjustURLSanitizer=_adjustURLSanitizer;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTPushTokenUserTrackerService> pushTokenUserTrackerService; // @synthesize pushTokenUserTrackerService=_pushTokenUserTrackerService;
@property(nonatomic) __weak id <SPTPushNotificationsService> pushNotificationsService; // @synthesize pushNotificationsService=_pushNotificationsService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) id <SPTPushTokenUserTracker> pushTokenUserTracker; // @synthesize pushTokenUserTracker=_pushTokenUserTracker;
@property(retain, nonatomic) SPTAdjustUserTracker *adjustUserTracker; // @synthesize adjustUserTracker=_adjustUserTracker;
@property(retain, nonatomic) id <SPTPushNotificationController> pushNotificationsController; // @synthesize pushNotificationsController=_pushNotificationsController;
@property(retain, nonatomic) SPTTrackerBroadcaster *trackerBroadcaster; // @synthesize trackerBroadcaster=_trackerBroadcaster;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


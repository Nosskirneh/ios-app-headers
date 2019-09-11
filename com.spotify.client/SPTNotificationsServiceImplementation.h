//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNotificationsService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTNotificationLogger;
@protocol SPTContainerService, SPTContainerUIService, SPTCoreService, SPTNetworkService, SPTNotificationPreferencesBackendIntegrator;

@interface SPTNotificationsServiceImplementation : NSObject <SPTNotificationsService, SPTService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkService> _networkFeature;
    id <SPTCoreService> _coreService;
    id <SPTNotificationPreferencesBackendIntegrator> _notificationsBackendIntegrator;
    SPTNotificationLogger *_notificationLogger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTNotificationLogger *notificationLogger; // @synthesize notificationLogger=_notificationLogger;
@property(retain, nonatomic) id <SPTNotificationPreferencesBackendIntegrator> notificationsBackendIntegrator; // @synthesize notificationsBackendIntegrator=_notificationsBackendIntegrator;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideNotificationsBackendIntegrator;
- (id)provideNotificationPreferenceViewController;
- (void)registerPages;
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


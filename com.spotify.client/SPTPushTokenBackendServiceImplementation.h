//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPushTokenBackendService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPushTokenBackendIntegrator;
@protocol SPTNetworkService, SPTPushTokenUserTrackerService;

@interface SPTPushTokenBackendServiceImplementation : NSObject <SPTService, SPTPushTokenBackendService>
{
    id <SPTNetworkService> _networkFeature;
    id <SPTPushTokenUserTrackerService> _pushTokenUserTrackerService;
    SPTPushTokenBackendIntegrator *_pushTokenBackendIntegrator;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPushTokenBackendIntegrator *pushTokenBackendIntegrator; // @synthesize pushTokenBackendIntegrator=_pushTokenBackendIntegrator;
@property(nonatomic) __weak id <SPTPushTokenUserTrackerService> pushTokenUserTrackerService; // @synthesize pushTokenUserTrackerService=_pushTokenUserTrackerService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
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


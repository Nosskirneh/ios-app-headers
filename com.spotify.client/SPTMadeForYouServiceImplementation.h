//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMadeForYouService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTFeatureFlaggingService, SPTGLUEService, SPTHubFrameworkService, SPTMadeForYouTestManager, SPTNetworkService, SPTSessionService;

@interface SPTMadeForYouServiceImplementation : NSObject <SPTMadeForYouService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTNetworkService> _networkService;
    id <SPTMadeForYouTestManager> _testManager;
}

+ (id)madeForYouHubURI;
+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTMadeForYouTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideTestManager;
- (id)provideAsyncHubViewControllerWithURI:(id)arg1 context:(id)arg2;
- (void)registerHubPageIdentifier;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


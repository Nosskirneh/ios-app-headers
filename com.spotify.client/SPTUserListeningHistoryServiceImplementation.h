//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTUserListeningHistoryService.h"

@class NSString, SPTAllocationContext, SPTDataLoader, SPTUserListeningHistoryAPIClient, SPTUserListeningHistoryFeatureViewController, SPTUserListeningHistoryViewModel;

@interface SPTUserListeningHistoryServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTUserListeningHistoryService>
{
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTNetworkService> _networkService;
    id <SPTFeatureFlagSignal> _enabledSignal;
    id <SPTPageRegistrationToken> _pageRegistrationToken;
    SPTDataLoader *_dataLoader;
    SPTUserListeningHistoryAPIClient *_APIClient;
    SPTUserListeningHistoryViewModel *_viewModel;
    SPTUserListeningHistoryFeatureViewController *_viewController;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTUserListeningHistoryFeatureViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SPTUserListeningHistoryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTUserListeningHistoryAPIClient *APIClient; // @synthesize APIClient=_APIClient;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTPageRegistrationToken> pageRegistrationToken; // @synthesize pageRegistrationToken=_pageRegistrationToken;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> enabledSignal; // @synthesize enabledSignal=_enabledSignal;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)disableService;
- (void)enableService;
- (void)enabledSignalHasAssumedState:(long long)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)provideUserListeningHistoryFeatureViewControllerWithURI:(id)arg1 context:(id)arg2;
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


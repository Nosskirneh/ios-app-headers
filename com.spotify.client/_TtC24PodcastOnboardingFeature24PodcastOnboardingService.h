//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@interface _TtC24PodcastOnboardingFeature24PodcastOnboardingService : NSObject <SPTService>
{
    // Error parsing type: , name: featureFlaggingService
    // Error parsing type: , name: uriDispatchService
    // Error parsing type: , name: containerService
    // Error parsing type: , name: uiPresentationService
    // Error parsing type: , name: networkService
    // Error parsing type: , name: glueService
    // Error parsing type: , name: clientSessionService
    // Error parsing type: , name: settingsService
    // Error parsing type: , name: performanceMetricsService
    // Error parsing type: , name: masterFeatureFlagSignal
    // Error parsing type: , name: enabledInFirstTimeFlowAbbaSignal
    // Error parsing type: , name: enabledInFirstTimeFlowUserPolicySignal
    // Error parsing type: , name: flowCoordinator.storage
    // Error parsing type: , name: curationManager.storage
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)applicationDidBecomeActive;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

@end


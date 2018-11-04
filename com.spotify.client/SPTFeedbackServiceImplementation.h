//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeedbackService.h"

@class NSString, SPTAllocationContext;

@interface SPTFeedbackServiceImplementation : NSObject <SPTFeedbackService>
{
    id <CosmosFeature> _cosmosService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFeatureFlaggingService> _featureFlagService;
    id <SPTFeedbackManager> _feedbackManager;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    id <SPTFeedbackTestManager> _feedbackTestManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTFeedbackTestManager> feedbackTestManager; // @synthesize feedbackTestManager=_feedbackTestManager;
@property(retain, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(retain, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlagService; // @synthesize featureFlagService=_featureFlagService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
- (void).cxx_destruct;
- (id)provideFeedbackTestManager;
- (id)provideFeedbackViewModel;
- (id)provideFeedbackManager;
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


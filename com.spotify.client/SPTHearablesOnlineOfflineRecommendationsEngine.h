//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHearablesRecommendationEngine-Protocol.h"

@class NSString, SPTNetworkConnectivityController;
@protocol SPTHearablesRecommendationEngine;

@interface SPTHearablesOnlineOfflineRecommendationsEngine : NSObject <SPTHearablesRecommendationEngine>
{
    id <SPTHearablesRecommendationEngine> _onlineRecommendations;
    id <SPTHearablesRecommendationEngine> _offlineRecommendations;
    SPTNetworkConnectivityController *_connectivityController;
}

@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) id <SPTHearablesRecommendationEngine> offlineRecommendations; // @synthesize offlineRecommendations=_offlineRecommendations;
@property(readonly, nonatomic) id <SPTHearablesRecommendationEngine> onlineRecommendations; // @synthesize onlineRecommendations=_onlineRecommendations;
- (void).cxx_destruct;
- (_Bool)isOffline;
- (void)fetchRecommendationWithSessionIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithOfflineRecommendation:(id)arg1 onlineRecommendations:(id)arg2 connectivityController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


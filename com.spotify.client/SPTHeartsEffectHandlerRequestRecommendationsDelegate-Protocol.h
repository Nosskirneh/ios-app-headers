//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTHeartsContextURI, SPTHeartsEffectHandlerRequestRecommendations, SPTHeartsEventBackendErrorReceived, SPTHeartsRecommendationList, SPTHeartsTrackURI;

@protocol SPTHeartsEffectHandlerRequestRecommendationsDelegate <NSObject>
- (void)recommendationsEffectHandler:(SPTHeartsEffectHandlerRequestRecommendations *)arg1 didReceiveRecommendations:(SPTHeartsRecommendationList *)arg2 forTrackURI:(SPTHeartsTrackURI *)arg3 contextURI:(SPTHeartsContextURI *)arg4;
- (void)recommendationsEffectHandler:(SPTHeartsEffectHandlerRequestRecommendations *)arg1 didReceiveBackendError:(SPTHeartsEventBackendErrorReceived *)arg2;
@end

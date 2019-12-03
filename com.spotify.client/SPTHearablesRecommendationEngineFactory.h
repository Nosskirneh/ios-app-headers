//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTNetworkConnectivityController;
@protocol SPTExternalIntegrationPlatform;

@interface SPTHearablesRecommendationEngineFactory : NSObject
{
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    SPTNetworkConnectivityController *_connectivityController;
}

@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
- (void).cxx_destruct;
- (id)provideOfflineRecommendationEngine;
- (id)provideOnlineRecommendationEngine;
- (id)provideRecommendationEngine;
- (id)initWithConnectivityController:(id)arg1 externalIntegrationPlatform:(id)arg2;

@end


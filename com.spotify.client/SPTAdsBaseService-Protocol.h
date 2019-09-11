//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTAdsBaseCosmosBridge, SPTAdsBaseGlobalSettingsController, SPTAdsBaseMovementLogger, SPTAdsBaseRegistry, SPTResolver;

@protocol SPTAdsBaseService <SPTService>
- (id <SPTAdsBaseGlobalSettingsController>)provideAdsSettingsController;
- (id <SPTAdsBaseRegistry>)provideAdRegistry;
- (id <SPTAdsBaseMovementLogger>)provideAdsMovementLogger;
- (id <SPTAdsBaseCosmosBridge>)provideAdsCosmosBridge;
- (id <SPTResolver>)provideAdsResolver;
@end


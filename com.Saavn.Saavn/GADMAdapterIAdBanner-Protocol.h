//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol GADMAdNetworkAdapter, GADMAdNetworkConnector;

@protocol GADMAdapterIAdBanner <NSObject>
+ (_Bool)currentPlatformIsSupported;
- (void)changeAdSizeTo:(struct GADAdSize)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)stopBeingDelegate;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (id)initWithGADMAdNetworkConnector:(id <GADMAdNetworkConnector>)arg1 adapter:(id <GADMAdNetworkAdapter>)arg2;
@end

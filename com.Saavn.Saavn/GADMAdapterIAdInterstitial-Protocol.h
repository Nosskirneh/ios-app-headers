//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol GADMAdNetworkAdapter, GADMAdNetworkConnector;

@protocol GADMAdapterIAdInterstitial <NSObject>
+ (_Bool)currentPlatformIsSupported;
- (void)presentInterstitialFromRootViewController:(UIViewController *)arg1;
- (void)stopBeingDelegate;
- (void)getInterstitial;
- (id)initWithGADMAdNetworkConnector:(id <GADMAdNetworkConnector>)arg1 adapter:(id <GADMAdNetworkAdapter>)arg2;
@end


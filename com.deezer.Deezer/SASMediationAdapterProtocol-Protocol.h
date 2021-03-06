//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SASAdView, UIView, UIViewController;
@protocol SASMediationAdapterDelegate;

@protocol SASMediationAdapterProtocol <NSObject>
@property(nonatomic) _Bool canceled;
@property(nonatomic) id <SASMediationAdapterDelegate> delegate;
- (_Bool)isRewardedVideoAdReady;
- (void)showRewardedVideoAdFromViewController:(UIViewController *)arg1;
- (UIView *)mediationAdView;
- (void)cancelAd;
- (void)requestAd;
- (id)initMediationAdViewWithAdView:(SASAdView *)arg1 adParameters:(NSDictionary *)arg2 interfaceParameters:(NSDictionary *)arg3;
@end


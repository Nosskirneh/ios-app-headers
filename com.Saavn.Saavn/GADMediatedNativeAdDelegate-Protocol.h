//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView, UIViewController;
@protocol GADMediatedNativeAd;

@protocol GADMediatedNativeAdDelegate <NSObject>

@optional
- (void)mediatedNativeAd:(id <GADMediatedNativeAd>)arg1 didRenderInView:(UIView *)arg2 viewController:(UIViewController *)arg3;
- (void)mediatedNativeAd:(id <GADMediatedNativeAd>)arg1 didUntrackView:(UIView *)arg2;
- (void)mediatedNativeAd:(id <GADMediatedNativeAd>)arg1 didRecordClickOnAssetWithName:(NSString *)arg2 view:(UIView *)arg3 viewController:(UIViewController *)arg4;
- (void)mediatedNativeAdDidRecordImpression:(id <GADMediatedNativeAd>)arg1;
- (void)mediatedNativeAd:(id <GADMediatedNativeAd>)arg1 didRenderInView:(UIView *)arg2 clickableAssetViews:(NSDictionary *)arg3 nonclickableAssetViews:(NSDictionary *)arg4 viewController:(UIViewController *)arg5;
@end


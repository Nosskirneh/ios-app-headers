//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBMediaViewDelegate-Protocol.h"
#import "FBNativeAdDelegate-Protocol.h"
#import "GADMediatedNativeAdDelegate-Protocol.h"
#import "GADMediatedNativeAppInstallAd-Protocol.h"

@class FBAdChoicesView, FBMediaView, FBNativeAd, GADNativeAdImageAdLoaderOptions, GADNativeAdViewAdOptions, NSDictionary, NSString;
@protocol GADMAdNetworkAdapter, GADMAdNetworkConnector, OS_dispatch_queue;

@interface GADFBNativeAd : NSObject <GADMediatedNativeAppInstallAd, GADMediatedNativeAdDelegate, FBNativeAdDelegate, FBMediaViewDelegate>
{
    id <GADMAdNetworkConnector> _connector;
    id <GADMAdNetworkAdapter> _adapter;
    FBNativeAd *_nativeAd;
    GADNativeAdImageAdLoaderOptions *_nativeAdImageAdLoaderOptions;
    GADNativeAdViewAdOptions *_nativeAdViewAdOptions;
    NSDictionary *_extraAssets;
    NSObject<OS_dispatch_queue> *_lockQueue;
    FBAdChoicesView *_adChoicesView;
    _Bool _impressionLogged;
    FBMediaView *_mediaView;
}

+ (void)mediatedNativeAdDidRecordImpression:(id)arg1;
- (void).cxx_destruct;
- (void)mediaViewDidLoad:(id)arg1;
- (void)mediaViewVideoDidPause:(id)arg1;
- (void)mediaViewVideoDidPlay:(id)arg1;
- (void)mediaViewVideoDidComplete:(id)arg1;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)nativeAdDidLoad:(id)arg1;
- (void)mediatedNativeAd:(id)arg1 didUntrackView:(id)arg2;
- (void)mediatedNativeAd:(id)arg1 didRenderInView:(id)arg2 clickableAssetViews:(id)arg3 nonclickableAssetViews:(id)arg4 viewController:(id)arg5;
- (_Bool)hasVideoContent;
- (id)adChoicesView;
- (id)mediaView;
- (id)price;
- (id)store;
- (id)starRating;
- (id)callToAction;
- (id)icon;
- (id)body;
- (id)images;
- (id)headline;
- (id)extraAssets;
- (id)mediatedNativeAdDelegate;
- (void)loadAdChoicesView;
- (void)stopBeingDelegate;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (id)initWithGADMAdNetworkConnector:(id)arg1 adapter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADONativeAd.h"

#import "GADMediatedNativeAppInstallAd-Protocol.h"
#import "GADOLoadable-Protocol.h"
#import "GADONativeAdMediaDisplaying-Protocol.h"
#import "GADONativeAdSourceAttributing-Protocol.h"
#import "GADOOverlayViewSource-Protocol.h"

@class GADONativeAdAttribution, GADONativeAdImage, GADOOverlayView, GADOVideoController, NSArray, NSDecimalNumber, NSMutableArray, NSString, UIView;
@protocol GADOMediaContentDisplaying;

@interface GADONativeAppInstallAd : GADONativeAd <GADMediatedNativeAppInstallAd, GADOLoadable, GADONativeAdMediaDisplaying, GADONativeAdSourceAttributing, GADOOverlayViewSource>
{
    _Bool _disableImageLoading;
    NSArray *_nativeAdImages;
    NSMutableArray *_availableNativeAdImages;
    GADOOverlayView *_overlayView;
    GADOVideoController *_videoController;
    GADONativeAdAttribution *_attribution;
    NSString *_headline;
    NSString *_callToAction;
    GADONativeAdImage *_icon;
    NSString *_body;
    NSString *_store;
    NSString *_price;
    NSDecimalNumber *_starRating;
    GADONativeAdImage *_adChoicesIcon;
    id <GADOMediaContentDisplaying> _mediaContent;
    UIView *_adChoicesContentView;
}

+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
+ (_Bool)canConvertToInstreamAd;
+ (id)loadableAdWithAdDictionary:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) UIView *adChoicesContentView; // @synthesize adChoicesContentView=_adChoicesContentView;
@property(retain, nonatomic) id <GADOMediaContentDisplaying> mediaContent; // @synthesize mediaContent=_mediaContent;
@property(readonly, nonatomic) GADONativeAdImage *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
@property(readonly, nonatomic) GADOVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (id)overlayView;
- (void)adLoaderDidReceiveAd:(id)arg1;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, nonatomic) GADONativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;
- (id)requiredAssets;
- (void)unregisterAdView;
- (void)registerAdViewForUnifiedNativeAd:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (_Bool)canRegisterAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)registerAdView:(id)arg1 assetViews:(id)arg2;
- (_Bool)recordImpressionWithData:(id)arg1;
- (void)reportTouchEventWithData:(id)arg1;
- (void)performClickWithData:(id)arg1;
- (id)adFormatTemplateID;
- (void)setSlot:(id)arg1;
- (id)initWithMediatedUnifiedNativeAd:(id)arg1 mediatedNativeAd:(id)arg2 options:(id)arg3;
- (id)initWithMediatedNativeAppInstallAd:(id)arg1 mediatedNativeAd:(id)arg2 options:(id)arg3;
- (id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2;
- (id)initWithDictionary:(id)arg1 options:(id)arg2;
- (void)GADONativeAppInstallAd_category;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

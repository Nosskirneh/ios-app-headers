//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GADOAdChoicesView, GADOMediaView, GADONativeAdViewPolicy, GADONativeAppInstallAd;

@interface GADONativeAppInstallAdView : UIView
{
    GADONativeAdViewPolicy *_nativeAdViewPolicy;
    UIView *_headlineView;
    UIView *_callToActionView;
    UIView *_iconView;
    UIView *_bodyView;
    UIView *_storeView;
    UIView *_priceView;
    UIView *_imageView;
    UIView *_starRatingView;
    GADOMediaView *_mediaView;
    GADOAdChoicesView *_adChoicesView;
}

@property(nonatomic) __weak GADOAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(nonatomic) __weak GADOMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) __weak UIView *starRatingView; // @synthesize starRatingView=_starRatingView;
@property(nonatomic) __weak UIView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UIView *priceView; // @synthesize priceView=_priceView;
@property(nonatomic) __weak UIView *storeView; // @synthesize storeView=_storeView;
@property(nonatomic) __weak UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak UIView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(nonatomic) __weak UIView *headlineView; // @synthesize headlineView=_headlineView;
- (void).cxx_destruct;
- (void)updateMediaView;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
@property(retain, nonatomic) GADONativeAppInstallAd *nativeAppInstallAd;
- (void)commonInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

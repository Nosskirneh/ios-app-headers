//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediatedAd.h"

@class UIView;

@interface GADMediatedNativeAd : GADMediatedAd
{
    UIView *_renderedView;
    _Bool _adapterHandlesUserClicks;
    _Bool _adapterHandlesUserImpressions;
    _Bool _allowPublisherRenderedAttribution;
    id _ad;
}

@property(nonatomic) _Bool allowPublisherRenderedAttribution; // @synthesize allowPublisherRenderedAttribution=_allowPublisherRenderedAttribution;
@property(nonatomic) _Bool adapterHandlesUserImpressions; // @synthesize adapterHandlesUserImpressions=_adapterHandlesUserImpressions;
@property(nonatomic) _Bool adapterHandlesUserClicks; // @synthesize adapterHandlesUserClicks=_adapterHandlesUserClicks;
@property(retain, nonatomic) id ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (void)reportMediatedAdShouldUntrackView:(id)arg1;
- (void)reportMediatedAdRenderedInView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3 viewController:(id)arg4;
- (void)reportClickOnAssetWithWithName:(id)arg1 view:(id)arg2 viewController:(id)arg3;
- (void)reportAdNetworkImpression;
- (void)reportAdNetworkClick;
- (void)reportImpression;
- (id)loadableAdForAdLoader:(id)arg1;
- (Class)nativeAdClass;
- (void)dealloc;

@end

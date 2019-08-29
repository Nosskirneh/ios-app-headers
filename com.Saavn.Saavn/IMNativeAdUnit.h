//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IMAdUnit.h"

#import "IMAssetActionDelegate-Protocol.h"
#import "IMAssetCacheDelegate-Protocol.h"
#import "IMAssetTelemetryEventDelegate-Protocol.h"
#import "IMNativeRenderControllerDelegate-Protocol.h"

@class IMNativeInlineRenderController, NSDictionary, NSMutableArray, NSString, NSURL, UIImage;

@interface IMNativeAdUnit : IMAdUnit <IMNativeRenderControllerDelegate, IMAssetActionDelegate, IMAssetTelemetryEventDelegate, IMAssetCacheDelegate>
{
    _Bool _isApp;
    _Bool _shouldFireFinishedPlayingMedia;
    _Bool _shouldFireImpression;
    _Bool _shouldAttachIasViewability;
    _Bool _imageLoaded;
    _Bool _assetJsonLoaded;
    NSString *_adTitle;
    NSString *_adDescription;
    UIImage *_adIcon;
    NSString *_adCtaText;
    NSString *_adRating;
    NSURL *_adLandingPageUrl;
    long long _position;
    unsigned long long _loadTimeStamp;
    NSString *_passThroughJson;
    NSString *_moatImpressionID;
    NSMutableArray *_clickableViews;
    NSString *_iconUrl;
    NSDictionary *_moatViewabilityParameters;
    IMNativeInlineRenderController *_renderController;
}

@property(retain, nonatomic) IMNativeInlineRenderController *renderController; // @synthesize renderController=_renderController;
@property(retain, nonatomic) NSDictionary *moatViewabilityParameters; // @synthesize moatViewabilityParameters=_moatViewabilityParameters;
@property(nonatomic) _Bool assetJsonLoaded; // @synthesize assetJsonLoaded=_assetJsonLoaded;
@property(nonatomic) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property _Bool shouldAttachIasViewability; // @synthesize shouldAttachIasViewability=_shouldAttachIasViewability;
@property _Bool shouldFireImpression; // @synthesize shouldFireImpression=_shouldFireImpression;
@property _Bool shouldFireFinishedPlayingMedia; // @synthesize shouldFireFinishedPlayingMedia=_shouldFireFinishedPlayingMedia;
@property(retain, nonatomic) NSMutableArray *clickableViews; // @synthesize clickableViews=_clickableViews;
@property(retain, nonatomic) NSString *moatImpressionID; // @synthesize moatImpressionID=_moatImpressionID;
@property(retain, nonatomic) NSString *passThroughJson; // @synthesize passThroughJson=_passThroughJson;
@property(nonatomic) unsigned long long loadTimeStamp; // @synthesize loadTimeStamp=_loadTimeStamp;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) _Bool isApp; // @synthesize isApp=_isApp;
@property(readonly, nonatomic) NSURL *adLandingPageUrl; // @synthesize adLandingPageUrl=_adLandingPageUrl;
@property(readonly, nonatomic) NSString *adRating; // @synthesize adRating=_adRating;
@property(readonly, nonatomic) NSString *adCtaText; // @synthesize adCtaText=_adCtaText;
@property(readonly, nonatomic) UIImage *adIcon; // @synthesize adIcon=_adIcon;
@property(readonly, nonatomic) NSString *adDescription; // @synthesize adDescription=_adDescription;
@property(readonly, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
- (void).cxx_destruct;
- (void)deinit;
- (_Bool)isNativeMarkupAd;
- (void)adFailed;
- (_Bool)adStoreShouldHandlePrefetch;
- (void)sendSuccess;
- (void)sendFailure;
- (void)imageFetchSucceededWithPath:(id)arg1 forUrl:(id)arg2;
- (void)assetAddToCacheFailedForURL:(id)arg1 withError:(id)arg2;
- (void)assetReturningFromNetworkAt:(id)arg1 forURL:(id)arg2;
- (void)assetReturnedFromCacheAt:(id)arg1 forURL:(id)arg2;
- (void)imNativeRenderController:(id)arg1 audioStateChanged:(_Bool)arg2;
- (id)imNativeRenderControllerGetRequestId;
- (long long)imNativeRenderControllerGetPlacement;
- (void)imNativeRenderControllerRewardActionComplete:(id)arg1;
- (void)imNativeRenderControllerViewabilityTracked:(id)arg1;
- (void)imNativeRenderControllerWillDismissScreen:(id)arg1;
- (void)imNativeRenderControllerDidDismissScreen:(id)arg1;
- (void)imNativeRenderControllerDidCloseAd:(id)arg1;
- (void)imNativeRenderControllerWillCloseAd:(id)arg1;
- (void)imNativeRenderControllerUserLeaveApplication;
- (void)imNativeRenderControllerDidPresentScreen:(id)arg1;
- (void)imNativeRenderControllerWillPresentScreen:(id)arg1;
- (id)fetchAdUnitType;
- (void)imNativeRenderController:(id)arg1 VastTagFound:(id)arg2;
- (void)userSkippedMediaFromNativeRenderController:(id)arg1;
- (void)imNativeRenderControllerFinishedPlayingMedia:(id)arg1;
- (void)imNativeRenderControllerAdClicked:(id)arg1 withParams:(id)arg2;
- (void)imNativeRenderControllerDidFailToLoad:(id)arg1;
- (void)imNativeRenderControllerDidFinishLoad:(id)arg1;
- (void)loadRenderViewWithFrame:(struct CGRect)arg1 content:(id)arg2 placementType:(int)arg3 safeAreaGeometry:(struct CGRect)arg4 unsafeAreaColor:(id)arg5;
- (_Bool)isValidNativeAdContent;
- (struct CGSize)getAdSize;
- (void)sendTelemetryEvent:(id)arg1 withPayload:(id)arg2 shouldAddAdRequestParams:(_Bool)arg3;
- (id)getAdReqParams;
- (void)createIASViewability;
- (void)createMoatViewabilityWithParameters:(id)arg1 forCreativeType:(long long)arg2;
- (void)fireClientFillBeaconForInline;
- (void)reportClickAndOpenLandingPageWithParams:(id)arg1;
- (void)reportAdClickAndOpenLandingPage;
- (id)displayName;
- (_Bool)extractAdContent:(id)arg1;
- (void)addViewForViewability:(id)arg1;
- (void)recycleAdUnitView;
@property(readonly, nonatomic) NSString *customAdContent;
- (id)nativeViewOfWidth:(double)arg1;
- (void)initialize;
- (id)initWithPlacementId:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


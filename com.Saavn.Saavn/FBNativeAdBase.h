//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBDisplayAdControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBAdExtraHint, FBAdImage, FBAdPlacementDefinition, FBAdProvider, FBDisplayAdController, FBNativeAdDataModel, NSDate, NSHashTable, NSString, NSURL, UIView, UIViewController;
@protocol FBNativeAdBaseDelegate;

@interface FBNativeAdBase : NSObject <FBDisplayAdControllerDelegate, UIGestureRecognizerDelegate>
{
    _Bool _hasCalledLoadAd;
    _Bool _viewabilityValidatorDisabled;
    _Bool _didCallDownloadMedia;
    _Bool _bypassValidation;
    _Bool _isHScroll;
    NSString *_placementID;
    long long _mediaCachePolicy;
    FBAdExtraHint *_extraHint;
    id <FBNativeAdBaseDelegate> _nativeAdBaseDelegate;
    FBDisplayAdController *_adController;
    FBAdProvider *_adProvider;
    NSHashTable *_gestureRecognizers;
    UIViewController *_rootViewController;
    NSDate *_loadAdStartTime;
    UIView *_nativeAdView;
    NSHashTable *_clickableViews;
    NSString *_lastTouchData;
    long long _templateId;
    long long _placementType;
    double _firstImpressionTime;
    FBNativeAdDataModel *_dataModel;
    FBAdPlacementDefinition *_placementDefinition;
    CDUnknownBlockType _onImpression;
    CDUnknownBlockType _onImpressionMiss;
    CDUnknownBlockType _onClick;
}

+ (id)fakeNativeAdBase;
+ (void)unregisterOutstandingRequest:(id)arg1;
+ (void)registerOutstandingRequest:(id)arg1;
+ (id)viewToNativeAdMap;
+ (id)requests;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(copy, nonatomic) CDUnknownBlockType onImpressionMiss; // @synthesize onImpressionMiss=_onImpressionMiss;
@property(copy, nonatomic) CDUnknownBlockType onImpression; // @synthesize onImpression=_onImpression;
@property(nonatomic) _Bool isHScroll; // @synthesize isHScroll=_isHScroll;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) double firstImpressionTime; // @synthesize firstImpressionTime=_firstImpressionTime;
@property(nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *lastTouchData; // @synthesize lastTouchData=_lastTouchData;
@property(nonatomic, getter=shouldBypassValidation) _Bool bypassValidation; // @synthesize bypassValidation=_bypassValidation;
@property(nonatomic) _Bool didCallDownloadMedia; // @synthesize didCallDownloadMedia=_didCallDownloadMedia;
@property(nonatomic) _Bool viewabilityValidatorDisabled; // @synthesize viewabilityValidatorDisabled=_viewabilityValidatorDisabled;
@property(retain, nonatomic) NSHashTable *clickableViews; // @synthesize clickableViews=_clickableViews;
@property(nonatomic) __weak UIView *nativeAdView; // @synthesize nativeAdView=_nativeAdView;
@property(retain, nonatomic) NSDate *loadAdStartTime; // @synthesize loadAdStartTime=_loadAdStartTime;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSHashTable *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(nonatomic) _Bool hasCalledLoadAd; // @synthesize hasCalledLoadAd=_hasCalledLoadAd;
@property(retain, nonatomic) FBAdProvider *adProvider; // @synthesize adProvider=_adProvider;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak id <FBNativeAdBaseDelegate> nativeAdBaseDelegate; // @synthesize nativeAdBaseDelegate=_nativeAdBaseDelegate;
@property(retain, nonatomic) FBAdExtraHint *extraHint; // @synthesize extraHint=_extraHint;
@property(nonatomic) long long mediaCachePolicy; // @synthesize mediaCachePolicy=_mediaCachePolicy;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)adViewAttributes;
@property(readonly, copy, nonatomic) NSString *adChoicesText;
@property(readonly, copy, nonatomic) NSURL *adChoicesLinkURL;
@property(readonly, nonatomic) FBAdImage *adChoicesIcon;
@property(readonly, copy, nonatomic) NSString *promotedTranslation;
@property(readonly, copy, nonatomic) NSString *adTranslation;
@property(readonly, nonatomic) long long adFormatType;
@property(readonly, copy, nonatomic) NSString *sponsoredTranslation;
@property(readonly, copy, nonatomic) NSString *bodyText;
@property(readonly, copy, nonatomic) NSString *rawBodyText;
- (id)icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *socialContext;
@property(readonly, copy, nonatomic) NSString *advertiserName;
@property(readonly, copy, nonatomic) NSString *linkDescription;
@property(readonly, copy, nonatomic) NSString *headline;
- (_Bool)criteriasForLoggingImpressionAreMet;
- (void)logImpressionWithExtraData:(id)arg1;
- (void)tellDelegateThatWeDidFailWithError:(id)arg1;
- (id)generateTapLoggingWithLocation:(struct CGPoint)arg1 viewTag:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (void)handleTap:(id)arg1 withEvent:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)detachTapGestureRecognizers;
- (id)generateViewSnapshotData;
- (id)generateViewSnapshot;
- (id)loggingDataForView:(id)arg1 withSubviews:(_Bool)arg2;
- (id)generateLoggingWithView:(id)arg1 withClickableViews:(id)arg2;
- (id)generateViewLogging;
- (id)generateViewPostData;
- (id)generateLoggingDataWithExtraData:(id)arg1;
- (id)generateLoggingData;
@property(readonly, nonatomic) double aspectRatio;
- (void)logImpressionMissWithReason:(long long)arg1;
- (void)unregisterViewInternal;
- (void)unregisterView;
@property(readonly, nonatomic, getter=isRegistered) _Bool registered;
- (void)registerViewForInteraction:(id)arg1 viewController:(id)arg2 clickableViews:(id)arg3 viewToCheckForViewability:(id)arg4;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (void)disableViewabilityValidator;
- (void)displayAdController:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAdControllerUserClosed:(id)arg1;
- (void)displayAdControllerClickThrough:(id)arg1;
- (void)displayAdControllerImpression:(id)arg1;
- (void)displayAdControllerStopped:(id)arg1;
- (void)displayAdController:(id)arg1 presentedData:(id)arg2 onImpression:(CDUnknownBlockType)arg3 onImpressionMiss:(CDUnknownBlockType)arg4 onClick:(CDUnknownBlockType)arg5;
- (void)downloadMediaFromData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadMedia;
- (void)displayAdControllerLoaded:(id)arg1;
- (void)populateFromDataModel:(id)arg1 placementDefinition:(id)arg2 onImpression:(CDUnknownBlockType)arg3 onImpressionMiss:(CDUnknownBlockType)arg4 onClick:(CDUnknownBlockType)arg5;
- (void)loadAdWithBidPayload:(id)arg1 mediaCachePolicy:(long long)arg2;
- (void)loadAdWithBidPayload:(id)arg1;
- (void)loadAdWithMediaCachePolicy:(long long)arg1;
- (void)loadAd;
- (void)doLoadAd:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 templateId:(long long)arg2 placementType:(long long)arg3 adProvider:(id)arg4;
- (id)initWithPlacementID:(id)arg1 templateId:(long long)arg2 placementType:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


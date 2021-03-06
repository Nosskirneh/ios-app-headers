//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOActiveViewMonitorDelegate-Protocol.h"
#import "GADOAdViewActiveViewMonitoring-Protocol.h"
#import "GADOImpressionMonitorDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADGestureRecognizer, GADOActiveViewMonitor, GADOAdExposureMonitor, GADOImpressionMonitor, GADOMediaView, GADONativeAd, GADONativeAdTapGestureRecognizer, GADOOverlayView, GADOSDKCoreWebView, GADOTouchGestureRecognizer, NSMapTable, NSMutableArray, NSMutableSet, NSString, UIView;
@protocol GADONativeAdSourceAttributing><GADOOverlayViewSource;

@interface GADONativeAdViewPolicy : NSObject <GADOImpressionMonitorDelegate, UIGestureRecognizerDelegate, GADOActiveViewMonitorDelegate, GADOAdViewActiveViewMonitoring>
{
    UIView *_adChoicesContentView;
    UIView *_weakAdChoicesViewFromPublisher;
    UIView *_adView;
    GADOOverlayView *_overlayView;
    NSMapTable *_assetViewAssetNames;
    NSMutableSet *_clickableAssetNames;
    NSMapTable *_clickableAssetViews;
    NSMapTable *_nonclickableAssetViews;
    NSString *_adChoicesViewAssetName;
    NSString *_attributionIconAssetName;
    NSString *_attributionTextAssetName;
    NSString *_backgroundAssetName;
    long long _adChoicesViewCorner;
    GADOImpressionMonitor *_impressionMonitor;
    NSMutableArray *_adChoicesViewConstraints;
    _Bool _shouldAllowPublisherRenderAdChoices;
    GADOAdExposureMonitor *_adExposureMonitor;
    GADONativeAdTapGestureRecognizer *_singleTap;
    GADGestureRecognizer *_touchGestureRecognizer;
    GADOTouchGestureRecognizer *_touchEventGestureRecognizer;
    _Bool _isAdViewOwnedByPublisher;
    GADOActiveViewMonitor *_activeViewMonitor;
    unsigned long long _activeViewID;
    GADOSDKCoreWebView *_SDKCoreWebView;
    id _appWillResignActiveObserver;
    id _appBecameActiveObserver;
    _Bool _adChoicesViewClickable;
    id _customClickGestureObserver;
    GADOMediaView *_mediaView;
    GADONativeAd<GADONativeAdSourceAttributing><GADOOverlayViewSource> *_nativeAd;
}

@property(retain, nonatomic) GADONativeAd<GADONativeAdSourceAttributing><GADOOverlayViewSource> *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void).cxx_destruct;
- (void)activeViewMonitoringDidStop:(unsigned long long)arg1;
- (_Bool)activeViewMonitoringStarted:(unsigned long long)arg1;
- (void)activeViewVisibilityChanged:(_Bool)arg1;
- (void)activeViewMonitorDidRefresh:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)impressionMonitorDidMonitorImpression:(id)arg1;
- (void)handleCustomClickGesture:(id)arg1;
- (_Bool)isViewTracked:(id)arg1;
- (id)activeViewJSCommandWithParams:(id)arg1;
- (void)enqueueJSCommandWithUnloaded:(_Bool)arg1;
- (void)finishActiveViewReporting;
- (void)startActiveViewReportingIfEnabled;
- (void)createActiveViewMonitor;
- (_Bool)monitoredViewIsSubviewOfDeviceScreen;
- (_Bool)nativeAdHasVideo;
- (void)beginObservingVideoClickNotifications;
- (void)recordImpression;
- (void)stopImpressionMonitoring;
- (void)startImpressionMonitoring;
- (void)checkForImpression;
- (void)adViewDidMoveToSuperview;
- (void)adViewDidLayoutSubviews;
- (void)handleImpressionTracking;
- (void)orderViews;
- (void)replaceAssetWithName:(id)arg1 withAssetView:(id)arg2 weakReferencePointer:(id *)arg3;
- (void)updateAdChoicesView;
- (void)updateAdChoicesContentView;
- (void)updateOverlay;
- (void)updateMediaView;
- (void)finishAdExposureMonitoring;
- (id)signalDictionaryWithAssetView:(id)arg1 assetName:(id)arg2 adView:(id)arg3;
- (id)nativeAdSignalDictionary;
- (id)tapHandlingEnvironmentWithTapLocation:(struct CGPoint)arg1 tappedViewName:(id)arg2;
- (void)handleVideoClickNotification:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)addUserInteractionToAdView;
- (void)constrainAdChoicesViewToCorner;
- (void)dealloc;
- (void)setClickableAssetViews:(id)arg1 nonclickableAssetViews:(id)arg2;
- (void)unregisterAdView;
- (id)initWithAdView:(id)arg1 adChoicesViewAssetName:(id)arg2 attributionIconAssetName:(id)arg3 attributionTextAssetName:(id)arg4 backgroundAssetName:(id)arg5 isAdViewOwnedByPublisher:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IMRenderViewDelegate-Protocol.h"
#import "IMRichMediaDelegate-Protocol.h"
#import "IMWebViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMAdCloseButton, IMAdsConfig, IMDeviceVolumeManager, IMExpandProperties, IMOrientationProperties, IMRenderViewController, IMRenderViewGestureRecognizer, IMResizeProperties, IMRichMediaResolver, IMWebViewController, NSNumber, NSString;
@protocol IMRenderViewDelegate, IMRenderViewDismissDelegate;

@interface IMRenderView : UIView <UIGestureRecognizerDelegate, IMWebViewDelegate, IMRenderViewDelegate, IMRichMediaDelegate>
{
    _Bool _launched;
    _Bool _disableCloseHotspot;
    _Bool _useCustomClose;
    _Bool _hideStatusBar;
    _Bool _isPresentingSkStore;
    _Bool _shouldFireJSEvents;
    _Bool _isMraidInjected;
    _Bool _isClosed;
    _Bool _isExpandedWithUrl;
    _Bool _userClickedOnRenderView;
    int _state;
    int _placementType;
    long long prevMaxWidth;
    long long prevMaxHeight;
    id <IMRenderViewDelegate> _delegate;
    id <IMRenderViewDismissDelegate> _dismissDelegate;
    IMExpandProperties *_expandProperties;
    IMResizeProperties *_resizeProperties;
    IMOrientationProperties *_orientationProperties;
    IMAdsConfig *_config;
    IMRichMediaResolver *_resolver;
    IMRenderViewController *_expandController;
    IMDeviceVolumeManager *_deviceVolumeManager;
    IMWebViewController *_webViewController;
    UIView *_initialSuperView;
    IMAdCloseButton *_closeButton;
    IMAdCloseButton *_closeRegion;
    long long _lastOrientationAngle;
    NSString *_mraidJS;
    IMRenderViewGestureRecognizer *_renderViewGestureRecognizer;
    UIView *_viewAttachedToWindow;
    long long _webviewPreference;
    NSString *_webViewBgColor;
    NSString *_endCardCloseTrackerUrl;
    NSNumber *_isScrollable;
    struct CGRect _currentFrame;
}

@property(retain, nonatomic) NSNumber *isScrollable; // @synthesize isScrollable=_isScrollable;
@property(retain, nonatomic) NSString *endCardCloseTrackerUrl; // @synthesize endCardCloseTrackerUrl=_endCardCloseTrackerUrl;
@property(retain, nonatomic) NSString *webViewBgColor; // @synthesize webViewBgColor=_webViewBgColor;
@property long long webviewPreference; // @synthesize webviewPreference=_webviewPreference;
@property(retain, nonatomic) UIView *viewAttachedToWindow; // @synthesize viewAttachedToWindow=_viewAttachedToWindow;
@property(retain, nonatomic) IMRenderViewGestureRecognizer *renderViewGestureRecognizer; // @synthesize renderViewGestureRecognizer=_renderViewGestureRecognizer;
@property(nonatomic) _Bool userClickedOnRenderView; // @synthesize userClickedOnRenderView=_userClickedOnRenderView;
@property(nonatomic) _Bool isExpandedWithUrl; // @synthesize isExpandedWithUrl=_isExpandedWithUrl;
@property _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) _Bool isMraidInjected; // @synthesize isMraidInjected=_isMraidInjected;
@property(retain, nonatomic) NSString *mraidJS; // @synthesize mraidJS=_mraidJS;
@property(nonatomic) long long lastOrientationAngle; // @synthesize lastOrientationAngle=_lastOrientationAngle;
@property(nonatomic) _Bool shouldFireJSEvents; // @synthesize shouldFireJSEvents=_shouldFireJSEvents;
@property(retain, nonatomic) IMAdCloseButton *closeRegion; // @synthesize closeRegion=_closeRegion;
@property(retain, nonatomic) IMAdCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIView *initialSuperView; // @synthesize initialSuperView=_initialSuperView;
@property(nonatomic) struct CGRect currentFrame; // @synthesize currentFrame=_currentFrame;
@property(retain, nonatomic) IMWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) _Bool isPresentingSkStore; // @synthesize isPresentingSkStore=_isPresentingSkStore;
@property(retain, nonatomic) IMDeviceVolumeManager *deviceVolumeManager; // @synthesize deviceVolumeManager=_deviceVolumeManager;
@property(nonatomic) __weak IMRenderViewController *expandController; // @synthesize expandController=_expandController;
@property(retain, nonatomic) IMRichMediaResolver *resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) IMAdsConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool hideStatusBar; // @synthesize hideStatusBar=_hideStatusBar;
@property(nonatomic) _Bool useCustomClose; // @synthesize useCustomClose=_useCustomClose;
@property(nonatomic) _Bool disableCloseHotspot; // @synthesize disableCloseHotspot=_disableCloseHotspot;
@property(retain, nonatomic) IMOrientationProperties *orientationProperties; // @synthesize orientationProperties=_orientationProperties;
@property(retain, nonatomic) IMResizeProperties *resizeProperties; // @synthesize resizeProperties=_resizeProperties;
@property(retain, nonatomic) IMExpandProperties *expandProperties; // @synthesize expandProperties=_expandProperties;
@property(nonatomic) __weak id <IMRenderViewDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) int placementType; // @synthesize placementType=_placementType;
@property(nonatomic) _Bool launched; // @synthesize launched=_launched;
@property(nonatomic) __weak id <IMRenderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) long long prevMaxHeight; // @synthesize prevMaxHeight;
@property(nonatomic) long long prevMaxWidth; // @synthesize prevMaxWidth;
- (void).cxx_destruct;
- (void)fireBeaconAndTelemetryEventForAutoRedirectionForCommand:(id)arg1;
- (_Bool)shouldAllowAutoRedirection;
- (void)dealloc;
- (void)fireClearAllMaps;
- (struct CGRect)getCurrentPositionOfUIView:(id)arg1;
- (void)setProperties:(struct CGRect)arg1;
- (void)fireOnUserInteractionEvent;
- (void)fireOrientationChangeEvent:(long long)arg1;
- (void)fireScreenSizeChangeEventOnScheme:(id)arg1;
- (void)fireMaxSizeChangeEventOnScheme:(id)arg1;
- (void)fireCurrentPositionChangeEventWithFrame:(struct CGRect)arg1 OnScheme:(id)arg2;
- (void)fireDefaultPositionChangeEventOnScheme:(id)arg1;
- (void)fireStateChangeEvent:(id)arg1;
- (void)fireSizeChangeEvent:(struct CGRect)arg1;
- (_Bool)shouldFireViewableChangeEvents;
- (void)sendCallbackForUserDidInteractWithParams:(id)arg1;
- (void)sendCallbackForIncentActionComplete:(id)arg1;
- (void)sendCallbackForRenderViewFireAdFailed;
- (void)sendCallbackForRenderViewFireAdReady;
- (void)sendCallbackForRenderViewWillLeaveApplication;
- (void)sendCallbackForRenderViewDidDismissScreen;
- (void)sendCallbackForRenderViewWillDismissScreen;
- (void)sendCallbackForRenderViewDidPresentScreen;
- (void)sendCallbackForRenderViewWillPresentScreen;
- (void)sendCallbackForRenderViewAppearOnScreen;
- (void)sendCallbackForRenderViewDisappearedFromScreen;
- (void)sendCallbackForRenderViewFailedToLoadWith:(id)arg1;
- (void)sendCallbackForRenderViewFinishedLoading;
- (void)sendCallbackForRenderViewStartedLoading;
- (void)setCloseEndCardTracker:(id)arg1;
- (id)imRichMediaAdGetConfigs;
- (void)imRichMediaAdShouldSendEvent:(id)arg1 withPayload:(id)arg2;
- (void)imRichMediaAdDidPerformUserInteraction:(id)arg1;
- (void)imRichMediaAdIncentActionComplete:(id)arg1;
- (_Bool)imRichMediaAdShouldExpand;
- (void)imRichMediaAdFireAdFailed;
- (void)imRichMediaAdFireAdReady;
- (void)imRichMediaAdWillLeaveApplication;
- (void)imRichMediaAdDidDismissScreen;
- (void)imRichMediaAdWillDismissScreen;
- (void)imRichMediaAdDidPresentScreen;
- (void)imRichMediaAdWillPresentScreen;
- (void)imRenderViewDidInteractWithParams:(id)arg1 onRenderView:(id)arg2;
- (void)imRenderViewIncentActionComplete:(id)arg1;
- (void)imRenderViewDidDismissScreen:(id)arg1;
- (void)imRenderViewWillDismissScreeen:(id)arg1;
- (void)imRenderViewDidPresentScreen:(id)arg1;
- (void)imRenderViewWillPresentScreen:(id)arg1;
- (void)appGoingToBackground;
- (void)appGainsFocus;
- (void)releaseWebViewAfterHalfSecond;
- (void)interfaceOrientationChanged:(id)arg1;
- (void)fireReadyEvent;
- (void)fireStarting;
- (void)fireViewableChangeEvent:(_Bool)arg1;
- (void)fireNativeCallComplete:(id)arg1 forScheme:(id)arg2;
- (void)executeJavascript:(id)arg1;
- (_Bool)executeNativeCall:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldOpenExternallyWithRequest:(id)arg2;
- (void)webViewController:(id)arg1 didRecieveNativeCall:(id)arg2;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)handleLinkClicked:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)canRotate;
- (unsigned long long)creativeMask;
- (void)resize;
- (struct CGRect)getFrameForCloseRegion:(id)arg1 bounds:(struct CGSize)arg2;
- (struct CGPoint)adjustFrame:(struct CGRect)arg1 toFitInto:(struct CGRect)arg2;
- (void)expand:(id)arg1 withScheme:(id)arg2;
- (void)close;
- (void)addCloseRegionToRenderViewWithFrame:(struct CGRect)arg1;
- (id)friendlyViewsForViewability;
- (void)removeCloseButtonFromRenderView;
- (void)addCloseButtonToRenderViewWithFrame:(struct CGRect)arg1;
- (void)addCloseButtonToRenderView;
- (void)setHidden:(_Bool)arg1;
- (_Bool)canProcessURL:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleGesture:(id)arg1;
- (void)attachWebViewToViewHierarchy;
- (void)setupRenderViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2 webviewPreference:(long long)arg3 webviewColor:(id)arg4 adsConfig:(id)arg5;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (id)rootViewController;
- (_Bool)loadRequest:(id)arg1;
- (_Bool)loadHtmlString:(id)arg1;
- (void)renderViewDidDisAppear;
- (void)renderViewDidAppear;
- (id)mraidStateFromEnum:(int)arg1;
- (void)injectJSToBlockPopup;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 placementType:(int)arg3 config:(id)arg4 webviewPreference:(long long)arg5 webviewBgColor:(id)arg6 withScrolling:(id)arg7;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, nonatomic) UIView *webContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


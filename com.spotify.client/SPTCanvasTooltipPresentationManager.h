//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasNowPlayingViewStateObserver-Protocol.h"
#import "SPTCanvasTestManagerObserver-Protocol.h"

@class NSString, SPTCanvasLoggingService, SPTCanvasNowPlayingViewState, SPTCanvasTestManager, UIViewController;
@protocol SPTFreeTierTooltipConditionalPresenter, SPTLocalSettings;

@interface SPTCanvasTooltipPresentationManager : NSObject <SPTCanvasNowPlayingViewStateObserver, SPTCanvasTestManagerObserver>
{
    _Bool _tooltipWasPresented;
    id <SPTFreeTierTooltipConditionalPresenter> _tooltipPresenter;
    id <SPTLocalSettings> _localSettings;
    SPTCanvasTestManager *_testManager;
    SPTCanvasNowPlayingViewState *_nowPlayingState;
    SPTCanvasLoggingService *_logService;
    UIViewController *_lastViewControllerWithTooltip;
}

@property(nonatomic) _Bool tooltipWasPresented; // @synthesize tooltipWasPresented=_tooltipWasPresented;
@property(nonatomic) __weak UIViewController *lastViewControllerWithTooltip; // @synthesize lastViewControllerWithTooltip=_lastViewControllerWithTooltip;
@property(readonly, nonatomic) SPTCanvasLoggingService *logService; // @synthesize logService=_logService;
@property(readonly, nonatomic) SPTCanvasNowPlayingViewState *nowPlayingState; // @synthesize nowPlayingState=_nowPlayingState;
@property(readonly, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
- (void).cxx_destruct;
- (id)canvasSettingsDisplayShutdownKey;
- (id)canvasSettingsDisplayCountKey;
- (id)canvasSwitchDisplayShutdownKey;
- (id)canvasSwitchDisplayCountKey;
- (id)canvasTapDisplayShutdownKey;
- (id)canvasTapDisplayCountKey;
- (id)displayShutdownKey;
- (id)displayCountKey;
- (void)didChangeEnableCanvasTap:(id)arg1;
- (void)didChangeDisplayCanvasToggle:(id)arg1;
- (void)didChangeDisplayCanvasSettings:(id)arg1;
- (void)nowPlayingViewWillAppear;
- (void)nowPlayingViewWillDisappear;
@property(readonly, nonatomic) long long tooltipDisplayCount;
- (void)incrementTooltipDisplayCount;
@property(readonly, nonatomic) _Bool reachedMaxTooltipDisplayed;
- (_Bool)didShutdownOnce;
- (void)shutdown;
@property(readonly, nonatomic) _Bool shouldShowTooltip;
- (void)forceDismissToolTip;
- (void)dismissToolTipFromViewController:(id)arg1;
- (void)presentToolTipFromViewController:(id)arg1;
- (id)tooltipText;
- (struct CGPoint)tooltipPositionForViewController:(id)arg1;
- (void)dealloc;
- (id)initWithTooltipPresenter:(id)arg1 localSettings:(id)arg2 testManager:(id)arg3 nowPlayingState:(id)arg4 logService:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

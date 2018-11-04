//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SASNativeVideoToIntegrationInterfaceBridge-Protocol.h"

@class NSString, SASAdView;
@protocol SASAdViewDelegate, SASAdViewDelegateManagerDelegate;

@interface SASAdViewDelegateManager : NSObject <SASNativeVideoToIntegrationInterfaceBridge>
{
    SASAdView *_adView;
    id <SASAdViewDelegate> _calledDelegate;
    id <SASAdViewDelegateManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <SASAdViewDelegateManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SASAdViewDelegate> calledDelegate; // @synthesize calledDelegate=_calledDelegate;
@property(nonatomic) __weak SASAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)callDelegateBlock:(CDUnknownBlockType)arg1;
- (_Bool)askBannerViewCanStickToTop;
- (void)dispatchStickyView:(id)arg1 didStick:(_Bool)arg2 withFrame:(struct CGRect)arg3;
- (_Bool)askCanHandleAudioSessionToDelegate;
- (void)dispatchVideoDidCloseToDelegate;
- (void)dispatchVideoWillCloseToDelegate;
- (void)dispatchVideoDidExpandToDelegate;
- (void)dispatchVideoWillExpandToDelegate;
- (void)dispatchAudioWillStartToDelegate;
- (void)dispatchAudioDidFinishToDelegate;
- (void)dispatchVideoLoaded;
- (void)callAdViewDidCollectReward:(id)arg1;
- (void)callAdViewWithAVPlayer:(id)arg1 didSwitchToPlayerLayer:(id)arg2 inContainingView:(id)arg3;
- (void)callAdViewWillPlayVideoWithAVPlayer:(id)arg1 withPlayerLayer:(id)arg2 withContainingView:(id)arg3;
- (void)callAdViewDidSendVideoEvent:(long long)arg1;
- (_Bool)callAdViewCanStickToTopDelegate;
- (void)callAdViewWithStickyView:(id)arg1 didStick:(_Bool)arg2 withFrame:(struct CGRect)arg3;
- (void)callAdViewAudioDidFinishDelegate;
- (void)callAdViewAudioWillStartDelegate;
- (_Bool)callAdViewCanHandleAudioSessionDelegate;
- (double)visibilityPercentageForAdView;
- (double)animationDuration;
- (unsigned long long)animationOptions;
- (void)callAdViewDidReceiveMessageDelegate:(id)arg1;
- (void)callAdViewDidCloseExpandDelegate;
- (void)callAdViewWillCloseExpandDelegate;
- (void)callAdViewDidCloseResizeDelegate;
- (void)callAdViewDidExpandDelegateWithFrame:(struct CGRect)arg1;
- (void)callAdViewDidExpandDelegate;
- (void)callAdViewWillExpandDelegate;
- (void)callAdViewDidResizeDelegate;
- (void)callAdViewWillResizeDelegateWithError:(id)arg1;
- (void)callAdViewWillResizeDelegateWithFrame:(struct CGRect)arg1;
- (void)callAdViewDidFailDelegate;
- (void)callAdViewDidFailPrefetchingWithError:(id)arg1;
- (void)callAdViewDidFailToLoadDelegateWithError:(id)arg1;
- (void)callAdViewDidLoadEndCardDelegate;
- (void)callAdViewDidLoadDelegate;
- (void)callAdViewDidPrefetchDelegate;
- (void)callAdViewDidDownloadAdDelegate:(id)arg1;
- (void)callAdViewDidCollapseDelegate;
- (void)callAdViewDidDisappearDelegate;
- (void)callAdViewWillPerformActionWithExitDelegate:(_Bool)arg1;
- (_Bool)callAdViewShouldHandleURLDelegate:(id)arg1;
- (void)callAdViewWillDismissModalViewDelegate;
- (void)callAdViewWillPresentModalViewDelegate;
- (id)initWithAdView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


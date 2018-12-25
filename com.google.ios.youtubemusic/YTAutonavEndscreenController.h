//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAutonavCountdownObserver-Protocol.h"
#import "YTAutonavEndscreenViewDelegate-Protocol.h"
#import "YTAutonavPauseControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, UIView, YTAutonavBackgroundView, YTIPlayerOverlayAutoplayRenderer, YTImageService, YTLastActionController, YTReachabilityController;
@protocol YTAutonavControllerProtocol, YTAutonavEndscreenControllerDelegate, YTAutonavEndscreenViewProtocol, YTPlayerViewControllerConfig, YTResponder;

@interface YTAutonavEndscreenController : NSObject <YTAutonavPauseControllerDelegate, YTAutonavCountdownObserver, YTAutonavEndscreenViewDelegate, YTResponder>
{
    _Bool _imageLoaded;
    unsigned long long _imageRequestID;
    YTImageService *_imageService;
    id <YTPlayerViewControllerConfig> _config;
    YTLastActionController *_lastActionController;
    YTReachabilityController *_reachabilityController;
    _Bool _endscreenActivated;
    YTIPlayerOverlayAutoplayRenderer *_autonavRenderer;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTAutonavBackgroundView *_autonavBackgroundView;
    UIView<YTAutonavEndscreenViewProtocol> *_autonavEndscreenView;
    double _mediaTime;
    id <YTAutonavEndscreenControllerDelegate> _endscreenDelegate;
    id <YTAutonavControllerProtocol> _autonavController;
}

@property(nonatomic) __weak id <YTAutonavControllerProtocol> autonavController; // @synthesize autonavController=_autonavController;
@property(nonatomic) __weak id <YTAutonavEndscreenControllerDelegate> endscreenDelegate; // @synthesize endscreenDelegate=_endscreenDelegate;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(retain, nonatomic) UIView<YTAutonavEndscreenViewProtocol> *autonavEndscreenView; // @synthesize autonavEndscreenView=_autonavEndscreenView;
@property(retain, nonatomic) YTAutonavBackgroundView *autonavBackgroundView; // @synthesize autonavBackgroundView=_autonavBackgroundView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)autonavCountdownDidStopWithEndscreenCancelled:(_Bool)arg1;
- (void)autonavCountdownDidStartWithSeconds:(double)arg1;
- (void)playAutonavEndscreenCountdown;
- (void)playAutonav;
- (void)autonavCountdownDidReachTriggerWindow;
- (_Bool)isBackground;
- (_Bool)isMuted;
- (_Bool)shouldAutonavInBackground;
- (_Bool)shouldStartCountdown;
- (_Bool)shouldShowEndscreen;
- (void)showEndscreenControlsInPlayerBar:(_Bool)arg1;
- (void)loadImageIfNeeded;
- (void)hideEndscreen;
- (void)showEndscreen;
- (_Bool)isAutonavEnabled;
- (void)setupAutonavEndscreenViewIfReady;
- (_Bool)isUserInactive;
- (void)restartAutonavCountdown;
- (void)cancelAutonavCountdown;
- (void)didPressPlay;
- (void)didPressCancel;
- (void)startCountdownAndShowIfEndscreenActive;
- (void)stopCountdownAndHideIfEndscreenActive;
- (void)startCountdownIfEndscreenActive;
- (void)stopCountdownIfEndscreenActive;
- (_Bool)isEndscreenReady;
- (_Bool)isEndscreenActivated;
- (long long)playerControlsVisibility;
- (long long)playerControlsBehavior;
- (void)reset;
- (void)videoDidFinish;
- (void)didReceivePlayerResponse;
- (id)initWithParentResponder:(id)arg1 config:(id)arg2 imageService:(id)arg3 lastActionController:(id)arg4 reachabilityController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


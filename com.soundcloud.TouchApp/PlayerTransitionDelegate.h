//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PlayerHideTransitionDelegate-Protocol.h"
#import "PlayerShowTransitionDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class AnalyticsPlayerActivationEventTagger, NSString, PlaybackService, PlayerTransition, TabBarPresenter, UIPanGestureRecognizer, UIViewController, _TtC8Playback17PlayerEventTagger;

@interface PlayerTransitionDelegate : NSObject <PlayerHideTransitionDelegate, PlayerShowTransitionDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _didSwipeToClose;
    TabBarPresenter *_tabBarPresenter;
    AnalyticsPlayerActivationEventTagger *_analyticsPlayerActivationEventObserver;
    _TtC8Playback17PlayerEventTagger *_playerEventTagger;
    PlaybackService *_playbackService;
    UIPanGestureRecognizer *_dismissRecognizer;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    PlayerTransition *_currentTransition;
}

@property(nonatomic) _Bool didSwipeToClose; // @synthesize didSwipeToClose=_didSwipeToClose;
@property(retain, nonatomic) PlayerTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) UIPanGestureRecognizer *dismissRecognizer; // @synthesize dismissRecognizer=_dismissRecognizer;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) _TtC8Playback17PlayerEventTagger *playerEventTagger; // @synthesize playerEventTagger=_playerEventTagger;
@property(readonly, nonatomic) AnalyticsPlayerActivationEventTagger *analyticsPlayerActivationEventObserver; // @synthesize analyticsPlayerActivationEventObserver=_analyticsPlayerActivationEventObserver;
@property(readonly, nonatomic) TabBarPresenter *tabBarPresenter; // @synthesize tabBarPresenter=_tabBarPresenter;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizerShouldComplete:(id)arg1;
- (double)gestureRecognizerVelocity:(id)arg1;
- (double)gestureRecognizerProgress:(id)arg1;
- (_Bool)shouldStartDismissGesture;
- (_Bool)isTransitionInProgress;
- (void)handlePanEnd:(id)arg1;
- (void)handlePanChange:(id)arg1;
- (void)handlePan:(id)arg1;
- (unsigned long long)tabPlayerState;
- (void)tagShowEvent;
- (void)tagCloseEvent;
- (void)playerHideTransitionDidEnd:(_Bool)arg1;
- (void)playerShowTransitionDidEnd:(_Bool)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)hideCollaborator;
- (void)removeDismissRecognizer;
- (void)addDismissRecognizerToView:(id)arg1;
- (void)viewController:(id)arg1 didPresentViewControllerWithNoAnimation:(id)arg2;
- (id)initWithTabBarPresenter:(id)arg1 analyticsPlayerActivationEventObserver:(id)arg2 playbackService:(id)arg3 playerEventTagger:(id)arg4;
- (id)initWithTabBarPresenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


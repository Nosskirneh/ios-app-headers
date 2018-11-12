//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SPTBarOverlayPresentationTransition, UIPanGestureRecognizer;
@protocol SPTBarInteractivePresentationControllerDelegate;

@interface SPTBarInteractivePresentationController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    id <SPTBarInteractivePresentationControllerDelegate> _delegate;
    UIPanGestureRecognizer *_presentPanGestureRecognizer;
    UIPanGestureRecognizer *_dismissPanGestureRecognizer;
    SPTBarOverlayPresentationTransition *_interactiveTransition;
}

@property(retain, nonatomic) SPTBarOverlayPresentationTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(readonly, nonatomic) UIPanGestureRecognizer *dismissPanGestureRecognizer; // @synthesize dismissPanGestureRecognizer=_dismissPanGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *presentPanGestureRecognizer; // @synthesize presentPanGestureRecognizer=_presentPanGestureRecognizer;
@property(nonatomic) __weak id <SPTBarInteractivePresentationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)applicationStatusBarFrameDidChangeNotification;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)dismissPanWithGestureRecognizer:(id)arg1;
- (void)presentPanWithGestureRecognizer:(id)arg1;
- (id)createTransitionForPresenting:(_Bool)arg1;
- (_Bool)gesturesEnabled;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


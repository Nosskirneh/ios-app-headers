//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSDate, NSString, NSTimer, UAInAppMessage, UAInAppMessageControllerDefaultDelegate, UIPanGestureRecognizer, UIView;
@protocol UAInAppMessageControllerDelegate;

@interface UAInAppMessageController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _swipeDetected;
    _Bool _tapDetected;
    _Bool _longPressDetected;
    _Bool _isShown;
    _Bool _isDismissed;
    UAInAppMessage *_message;
    UAInAppMessageControllerDefaultDelegate *_defaultDelegate;
    id <UAInAppMessageControllerDelegate> _userDelegate;
    UIView *_messageView;
    CDUnknownBlockType _dismissalBlock;
    NSDate *_startDisplayDate;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSTimer *_dismissalTimer;
    NSArray *_buttonActionBindings;
    UAInAppMessageController *_referenceToSelf;
}

+ (id)controllerWithMessage:(id)arg1 delegate:(id)arg2 dismissalBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UAInAppMessageController *referenceToSelf; // @synthesize referenceToSelf=_referenceToSelf;
@property(retain, nonatomic) NSArray *buttonActionBindings; // @synthesize buttonActionBindings=_buttonActionBindings;
@property(retain, nonatomic) NSTimer *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(nonatomic) _Bool isDismissed; // @synthesize isDismissed=_isDismissed;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(nonatomic) _Bool longPressDetected; // @synthesize longPressDetected=_longPressDetected;
@property(nonatomic) _Bool tapDetected; // @synthesize tapDetected=_tapDetected;
@property(nonatomic) _Bool swipeDetected; // @synthesize swipeDetected=_swipeDetected;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSDate *startDisplayDate; // @synthesize startDisplayDate=_startDisplayDate;
@property(copy, nonatomic) CDUnknownBlockType dismissalBlock; // @synthesize dismissalBlock=_dismissalBlock;
@property(retain, nonatomic) UIView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) id <UAInAppMessageControllerDelegate> userDelegate; // @synthesize userDelegate=_userDelegate;
@property(retain, nonatomic) UAInAppMessageControllerDefaultDelegate *defaultDelegate; // @synthesize defaultDelegate=_defaultDelegate;
@property(retain, nonatomic) UAInAppMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)dealloc;
- (double)displayDuration;
- (void)buttonTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)longPressWithGestureRecognizer:(id)arg1;
- (void)tapWithGestureRecognizer:(id)arg1;
- (void)timedOut;
- (void)messageClicked;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)dismiss;
- (void)teardown;
- (void)beginTeardown;
- (void)finishTeardown;
- (void)dismissWithRunloopDelay;
- (_Bool)show;
@property(readonly, nonatomic) _Bool isShowing;
- (void)resignAppStateTransitions;
- (void)listenForAppStateTransitions;
- (void)invalidateDismissalTimer;
- (void)scheduleDismissalTimer;
- (void)signUpForControlEventsWithMessageView:(id)arg1 parentView:(id)arg2;
- (void)animateOutWithParentView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)animateInWithParentView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleTouchState:(_Bool)arg1;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (id)messageViewWithParentView:(id)arg1;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2 dismissalBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


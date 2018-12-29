//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class ABKInAppMessage, ABKInAppMessageViewController, ABKInAppMessageWindow, NSString, NSTimer, UIWindow;
@protocol ABKInAppMessageUIDelegate;

@interface ABKInAppMessageWindowController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _isInRotation;
    _Bool _inAppMessageIsTapped;
    ABKInAppMessageWindow *_inAppMessageWindow;
    NSTimer *_slideAwayTimer;
    ABKInAppMessage *_inAppMessage;
    id <ABKInAppMessageUIDelegate> _inAppMessageUIDelegate;
    ABKInAppMessageViewController *_inAppMessageViewController;
    double _slideupConstraintMaxValue;
    unsigned long long _supportedOrientationMask;
    long long _preferredOrientation;
    UIWindow *_appWindow;
    long long _clickedButtonId;
    NSString *_clickedHTMLButtonId;
    struct CGPoint _inAppMessagePreviousPanPosition;
}

@property(retain) NSString *clickedHTMLButtonId; // @synthesize clickedHTMLButtonId=_clickedHTMLButtonId;
@property long long clickedButtonId; // @synthesize clickedButtonId=_clickedButtonId;
@property _Bool inAppMessageIsTapped; // @synthesize inAppMessageIsTapped=_inAppMessageIsTapped;
@property _Bool isInRotation; // @synthesize isInRotation=_isInRotation;
@property(nonatomic) __weak UIWindow *appWindow; // @synthesize appWindow=_appWindow;
@property long long preferredOrientation; // @synthesize preferredOrientation=_preferredOrientation;
@property unsigned long long supportedOrientationMask; // @synthesize supportedOrientationMask=_supportedOrientationMask;
@property struct CGPoint inAppMessagePreviousPanPosition; // @synthesize inAppMessagePreviousPanPosition=_inAppMessagePreviousPanPosition;
@property double slideupConstraintMaxValue; // @synthesize slideupConstraintMaxValue=_slideupConstraintMaxValue;
@property(retain) ABKInAppMessageViewController *inAppMessageViewController; // @synthesize inAppMessageViewController=_inAppMessageViewController;
@property __weak id <ABKInAppMessageUIDelegate> inAppMessageUIDelegate; // @synthesize inAppMessageUIDelegate=_inAppMessageUIDelegate;
@property(retain) ABKInAppMessage *inAppMessage; // @synthesize inAppMessage=_inAppMessage;
@property(retain) NSTimer *slideAwayTimer; // @synthesize slideAwayTimer=_slideAwayTimer;
@property(retain, nonatomic) ABKInAppMessageWindow *inAppMessageWindow; // @synthesize inAppMessageWindow=_inAppMessageWindow;
- (void).cxx_destruct;
- (void)openInAppMessageURL:(id)arg1 inWebView:(_Bool)arg2;
- (_Bool)delegateHandlesInAppMessageURL:(id)arg1;
- (void)handleInAppMessageURL:(id)arg1 inWebView:(_Bool)arg2;
- (void)displayModalFeedView;
- (void)inAppMessageClickedWithActionType:(long long)arg1 URL:(id)arg2 openURLInWebView:(_Bool)arg3;
- (_Bool)delegateHandlesInAppMessageClick;
- (void)hideInAppMessageWindow;
- (void)hideInAppMessageViewWithAnimation:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)hideInAppMessageViewWithAnimation:(_Bool)arg1;
- (void)displayInAppMessageViewWithAnimation:(_Bool)arg1;
- (void)keyboardWasShown;
- (void)inAppMessageTimerFired:(id)arg1;
- (void)invalidateSlideAwayTimer;
- (void)inAppMessageTapped:(id)arg1;
- (void)inAppSlideupWasPanned:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithInAppMessage:(id)arg1 inAppMessageViewController:(id)arg2 inAppMessageDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

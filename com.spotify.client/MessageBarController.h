//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTMessageBarItemDelegate-Protocol.h"

@class MessageBarView, NSHashTable, NSMutableArray, NSString, NSTimer;
@protocol MessageBarControllerDelegate;

@interface MessageBarController : UIViewController <SPTMessageBarItemDelegate>
{
    _Bool _messageBarHidden;
    _Bool _messageBarShowingAlert;
    _Bool _messageBarForceHidden;
    NSMutableArray *_messageBarItems;
    UIViewController *_contentViewController;
    id <MessageBarControllerDelegate> _delegate;
    NSHashTable *_observers;
    MessageBarView *_messageBarView;
    NSTimer *_updateMessageBarTimer;
}

@property(retain, nonatomic) NSTimer *updateMessageBarTimer; // @synthesize updateMessageBarTimer=_updateMessageBarTimer;
@property(retain, nonatomic) MessageBarView *messageBarView; // @synthesize messageBarView=_messageBarView;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) __weak id <MessageBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isMessageBarForceHidden) _Bool messageBarForceHidden; // @synthesize messageBarForceHidden=_messageBarForceHidden;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) NSMutableArray *messageBarItems; // @synthesize messageBarItems=_messageBarItems;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (id)topViewController;
- (void)setContentViewController:(id)arg1 animation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messageBarItemDidChange:(id)arg1;
- (void)dismissMessageBarItem:(id)arg1;
- (void)hiddenChanged;
- (void)messageChanged:(id)arg1 onObject:(id)arg2;
- (void)dismissMessageBarItem:(id)arg1 animated:(_Bool)arg2;
- (void)presentMessageBarItem:(id)arg1 animated:(_Bool)arg2;
- (void)setMessageBarForceHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (double)preferredMessageItemHeight;
@property(readonly, nonatomic, getter=isMessageBarShowingAlert) _Bool messageBarShowingAlert;
@property(readonly, nonatomic, getter=isMessageBarHidden) _Bool messageBarHidden;
@property(readonly, nonatomic) struct CGRect messageBarFrame;
- (void)_updateMessageBar:(_Bool)arg1 deferred:(_Bool)arg2;
- (void)_updateMessageBarDeferred:(id)arg1;
- (void)_updateMessageBar:(_Bool)arg1;
- (void)_updateMessageBarText:(_Bool)arg1;
- (void)messageBarTapped;
- (void)layoutSubviewsWithMessageBarHidden:(_Bool)arg1;
- (struct CGRect)_contentViewFrameWithMessageBarFrame:(struct CGRect)arg1;
- (struct CGRect)messageBarFrameWithMessageBarHidden:(_Bool)arg1;
- (void)notifyObserversThatContentInsetDidChangeTo:(struct UIEdgeInsets)arg1;
- (void)notifyObserversThatContentViewControllerDidChangeTo:(id)arg1;
- (void)notifyObserversThatContentViewControllerWillChangeTo:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)wantsFullScreenLayout;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


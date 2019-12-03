//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VOXPopoverScrollAnimatorDelegate-Protocol.h"

@class NSString, UIButton, UIView, UIViewController, VOXPopoverScrollAnimator;
@protocol VOXPopoverPresentableController, VOXPopoverPresenterDelegate;

@interface VOXPopoverPresenter : NSObject <VOXPopoverScrollAnimatorDelegate>
{
    _Bool _presented;
    _Bool _animating;
    _Bool _isPresentedWithAnimation;
    UIViewController<VOXPopoverPresentableController> *_contentViewController;
    UIView *_arrowView;
    id <VOXPopoverPresenterDelegate> _delegate;
    UIView *_dismissableContainerView;
    UIView *_contentContainerView;
    UIButton *_toggledFromButton;
    VOXPopoverScrollAnimator *_scrollAnimator;
}

+ (id)popoverPresenterWithContentViewController:(id)arg1;
@property(retain, nonatomic) VOXPopoverScrollAnimator *scrollAnimator; // @synthesize scrollAnimator=_scrollAnimator;
@property(retain, nonatomic) UIButton *toggledFromButton; // @synthesize toggledFromButton=_toggledFromButton;
@property(nonatomic) _Bool isPresentedWithAnimation; // @synthesize isPresentedWithAnimation=_isPresentedWithAnimation;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIView *dismissableContainerView; // @synthesize dismissableContainerView=_dismissableContainerView;
@property(nonatomic) __weak id <VOXPopoverPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIViewController<VOXPopoverPresentableController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (id)buildArrowView;
- (id)buildContentContainerViewForRect:(struct CGRect)arg1 andView:(id)arg2 offset:(double)arg3;
- (id)buildDismissableContainerViewForView:(id)arg1;
- (void)backgroundViewTap;
- (void)dismissIfPresented;
- (void)scrollAnimatorDidEnd:(id)arg1;
- (void)setupScrollAnimatorWithTable:(id)arg1;
- (_Bool)isContentControllerPresented;
- (void)dismissPopoverByScrolling;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 withYOffset:(double)arg3 animated:(_Bool)arg4;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)showPopoverFromView:(id)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

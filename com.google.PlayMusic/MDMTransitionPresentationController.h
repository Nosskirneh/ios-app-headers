//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "MDMTransition-Protocol.h"

@class NSString, UIView;
@protocol MDMTransitionPresentationAnimationControlling;

@interface MDMTransitionPresentationController : UIPresentationController <MDMTransition>
{
    CDUnknownBlockType _calculateFrameOfPresentedView;
    UIView *_scrimView;
    id <MDMTransitionPresentationAnimationControlling> _animationController;
}

@property(retain, nonatomic) id <MDMTransitionPresentationAnimationControlling> animationController; // @synthesize animationController=_animationController;
@property(readonly, nonatomic) UIView *scrimView; // @synthesize scrimView=_scrimView;
- (void).cxx_destruct;
- (void)startWithContext:(id)arg1;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (_Bool)shouldRemovePresentersView;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 calculateFrameOfPresentedView:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


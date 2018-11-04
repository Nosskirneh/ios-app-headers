//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class SPTSortingFilteringGLUETheme, UIView;

@interface SPTSortingFilteringPresentationController : UIPresentationController
{
    UIView *_dimmingView;
    SPTSortingFilteringGLUETheme *_theme;
}

@property(readonly, nonatomic) SPTSortingFilteringGLUETheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)onTapGesture:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)initWithTheme:(id)arg1 presentedViewController:(id)arg2 presentingViewController:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, VOXMenuTransitionAnimator;
@protocol VOXAnimatorDelegate, VOXMediaItemPageViewControllerDelegate, VOXMediaLibraryCollectionsProtocol, VOXPageDataProvider;

@interface VOXMediaItemPageViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_scrollViewPanGestureRecognzier;
    id <VOXAnimatorDelegate> _prevDelegate;
    VOXMenuTransitionAnimator *_animator;
    id <VOXPageDataProvider> _dataProvider;
    id <VOXMediaItemPageViewControllerDelegate> _mediaItemPageControllerDelegate;
    id <VOXMediaLibraryCollectionsProtocol> _presentedCollection;
    Class _presentationControllerClass;
}

+ (void)showCellToolTipIfNeeded;
@property(nonatomic) Class presentationControllerClass; // @synthesize presentationControllerClass=_presentationControllerClass;
@property(retain, nonatomic) id <VOXMediaLibraryCollectionsProtocol> presentedCollection; // @synthesize presentedCollection=_presentedCollection;
@property(nonatomic) __weak id <VOXMediaItemPageViewControllerDelegate> mediaItemPageControllerDelegate; // @synthesize mediaItemPageControllerDelegate=_mediaItemPageControllerDelegate;
@property(nonatomic) __weak id <VOXPageDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) VOXMenuTransitionAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)controllerWithCollection:(id)arg1;
- (void)dealloc;
- (void)removeDelegate;
- (void)addDelegate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPresentationControllerClass:(Class)arg1 andPresentedCollection:(id)arg2;
- (void)setTransitionAnimatorDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTFreeTierFindViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageContainer-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPTViewControllerContainer-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSArray, NSString, NSURL, SPNavigationController, SPTFreeTierFindFadeTransitionAnimator, SPTFreeTierFindLogger, UIView;
@protocol SPTFreeTierFindInterfaceFactory, SPTFreeTierFindViewController><SPTPageController, SPTPageContainer, SPTPageController, SPTSearch2RootViewControllerProtocol, SPTVoiceService;

@interface SPTFreeTierFindContainerViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTFreeTierFindViewControllerDelegate, SPTScrollToTopViewController, SPViewController, SPTPageContainer, SPTPageController, SPTViewControllerContainer>
{
    NSArray *_viewControllers;
    UIViewController *_topViewController;
    UIViewController<SPTFreeTierFindViewController><SPTPageController> *_findViewController;
    id <SPTFreeTierFindInterfaceFactory> _interfaceFactory;
    NSArray *_barButtonItems;
    SPTFreeTierFindFadeTransitionAnimator *_transitionAnimator;
    SPTFreeTierFindLogger *_logger;
    id <SPTVoiceService> _voiceService;
    SPNavigationController *_searchNavigationController;
    UIViewController<SPTSearch2RootViewControllerProtocol> *_searchViewController;
    UIView *_searchTitleView;
    id <SPTPageController> _currentPageController;
}

@property(retain, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController; // @synthesize currentPageController=_currentPageController;
@property(retain, nonatomic) UIView *searchTitleView; // @synthesize searchTitleView=_searchTitleView;
@property(retain, nonatomic) UIViewController<SPTSearch2RootViewControllerProtocol> *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) SPNavigationController *searchNavigationController; // @synthesize searchNavigationController=_searchNavigationController;
@property(nonatomic) __weak id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(readonly, nonatomic) SPTFreeTierFindLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTFreeTierFindFadeTransitionAnimator *transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(readonly, copy, nonatomic) NSArray *barButtonItems; // @synthesize barButtonItems=_barButtonItems;
@property(readonly, nonatomic) id <SPTFreeTierFindInterfaceFactory> interfaceFactory; // @synthesize interfaceFactory=_interfaceFactory;
@property(readonly, nonatomic) UIViewController<SPTFreeTierFindViewController><SPTPageController> *findViewController; // @synthesize findViewController=_findViewController;
@property(readonly, nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(readonly, copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)setFocusedViewController:(id)arg1;
- (void)spt_scrollToTop;
- (void)cancelButtonPressed;
- (id)makeCancelBarButtonItem;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)performTransitionFromViewController:(id)arg1 toViewController:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)navigateToFindPage;
- (void)openVoiceSearchFromSender:(id)arg1;
- (void)openSearchPage;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
- (void)sp_updateContentInsets;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)adjustChildViewInsets;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFindViewController:(id)arg1 interfaceFactory:(id)arg2 barbuttonItems:(id)arg3 transitionAnimator:(id)arg4 voiceService:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


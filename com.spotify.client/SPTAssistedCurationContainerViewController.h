//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAssistedCurationNavigationController-Protocol.h"
#import "SPTAssistedCurationViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageContainer-Protocol.h"
#import "SPTPageController-Protocol.h"

@class GLUEAccessoryIconButton, NSString, NSURL, SPTAssistedCurationLogger, SPTAssistedCurationViewController;
@protocol GLUETheme, SPTAssistedCurationNavigationControllerDelegate, SPTPageContainer, SPTPageController, SPTSearch2RootViewControllerProtocol><SPTPageController;

@interface SPTAssistedCurationContainerViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTPageController, SPTPageContainer, SPTAssistedCurationViewControllerDelegate, SPTAssistedCurationNavigationController>
{
    id <SPTAssistedCurationNavigationControllerDelegate> navigationDelegate;
    SPTAssistedCurationViewController *_assistedCurationViewController;
    UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *_searchViewController;
    id <GLUETheme> _theme;
    SPTAssistedCurationLogger *_logger;
    GLUEAccessoryIconButton *_closeButton;
    id <SPTPageController> _currentPageController;
}

@property(retain, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController; // @synthesize currentPageController=_currentPageController;
@property(retain, nonatomic) GLUEAccessoryIconButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SPTAssistedCurationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) SPTAssistedCurationViewController *assistedCurationViewController; // @synthesize assistedCurationViewController=_assistedCurationViewController;
@property(nonatomic) __weak id <SPTAssistedCurationNavigationControllerDelegate> navigationDelegate; // @synthesize navigationDelegate;
- (void).cxx_destruct;
- (void)barBackButtonTapped:(id)arg1;
- (void)dismissSearchViewControllerFor:(id)arg1;
- (void)openSearchFor:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)updateNavigationBarStyle;
- (void)animateSearchTransitionFromView:(id)arg1 toView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToAssistedCuration;
- (void)openSearchPage;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithPageURI:(id)arg1 assistedCurationViewController:(id)arg2 searchViewController:(id)arg3 theme:(id)arg4 logger:(id)arg5;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


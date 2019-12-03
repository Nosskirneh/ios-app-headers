//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageContainer-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTYourLibraryHeaderViewControllerDelegate-Protocol.h"
#import "SPTYourLibraryPageDelegate-Protocol.h"
#import "SPTYourLibraryPagesViewControllerDatasource-Protocol.h"
#import "SPTYourLibraryPagesViewControllerDelegate-Protocol.h"
#import "SPTYourLibrarySectionsHeadersViewControllerDelegate-Protocol.h"
#import "SPTYourLibraryViewModelObserver-Protocol.h"

@class NSString, NSURL, SPTYourLibraryGLUETheme, SPTYourLibraryHeaderViewController, SPTYourLibraryLogger, SPTYourLibraryPagesViewController, SPTYourLibrarySectionsHeadersViewController, UIView;
@protocol SPTPageContainer, SPTPageController, SPTViewLogger, SPTYourLibraryOfflineBanner, SPTYourLibraryViewModel;

@interface SPTYourLibraryViewController : UIViewController <SPTYourLibraryPageDelegate, SPTYourLibraryHeaderViewControllerDelegate, SPTYourLibrarySectionsHeadersViewControllerDelegate, SPTYourLibraryPagesViewControllerDatasource, SPTYourLibraryPagesViewControllerDelegate, SPTNavigationControllerNavigationBarState, SPTYourLibraryViewModelObserver, SPTPageController, SPTPageContainer>
{
    UIViewController<SPTPageController> *_currentPageController;
    id <SPTYourLibraryViewModel> _viewModel;
    SPTYourLibraryGLUETheme *_theme;
    UIViewController<SPTYourLibraryOfflineBanner> *_offlineBannerViewController;
    SPTYourLibraryHeaderViewController *_headerViewController;
    SPTYourLibrarySectionsHeadersViewController *_sectionsHeadersViewController;
    SPTYourLibraryPagesViewController *_pagesViewController;
    UIView *_topCoverView;
    SPTYourLibraryLogger *_logger;
    id <SPTViewLogger> _viewLogger;
}

@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTYourLibraryLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) UIView *topCoverView; // @synthesize topCoverView=_topCoverView;
@property(retain, nonatomic) SPTYourLibraryPagesViewController *pagesViewController; // @synthesize pagesViewController=_pagesViewController;
@property(retain, nonatomic) SPTYourLibrarySectionsHeadersViewController *sectionsHeadersViewController; // @synthesize sectionsHeadersViewController=_sectionsHeadersViewController;
@property(retain, nonatomic) SPTYourLibraryHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(readonly, nonatomic) UIViewController<SPTYourLibraryOfflineBanner> *offlineBannerViewController; // @synthesize offlineBannerViewController=_offlineBannerViewController;
@property(readonly, nonatomic) SPTYourLibraryGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTYourLibraryViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic, getter=spt_currentPageController) UIViewController<SPTPageController> *currentPageController; // @synthesize currentPageController=_currentPageController;
- (void).cxx_destruct;
- (unsigned long long)preferredNavigationBarState;
- (void)headerViewController:(id)arg1 selectedGroupIndexChanged:(unsigned long long)arg2;
- (void)page:(id)arg1 disablePagesScroll:(_Bool)arg2;
- (void)pageDidStopScrolling:(id)arg1;
- (void)page:(id)arg1 didScroll:(id)arg2;
- (void)page:(id)arg1 collapseTabControl:(_Bool)arg2;
- (_Bool)pageShouldScrollToTop:(id)arg1;
- (void)didFinishLoadingPage:(id)arg1;
- (void)yourLibraryPagesViewController:(id)arg1 didChangeActiveViewController:(id)arg2;
- (void)yourLibraryPagesViewController:(id)arg1 fromSection:(double)arg2 toSection:(double)arg3 fromPage:(double)arg4 toPage:(double)arg5;
- (id)yourLibraryPagesViewController:(id)arg1 viewControllerForPageAtIndexPath:(id)arg2;
- (unsigned long long)yourLibraryPagesViewController:(id)arg1 numberPagesForSection:(unsigned long long)arg2;
- (unsigned long long)numberSectionsForYourLibraryPagesViewController:(id)arg1;
- (void)sectionsHeadersViewController:(id)arg1 didSelectSegment:(unsigned long long)arg2 fromSection:(unsigned long long)arg3;
- (void)yourLibraryViewModel:(id)arg1 navigateToGroup:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (void)yourLibraryViewModelUpdated:(id)arg1 withActiveGroupIndex:(unsigned long long)arg2 pageIndex:(unsigned long long)arg3;
- (void)yourLibraryViewModelUpdated:(id)arg1;
- (id)URI;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)setupConstraints;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 logger:(id)arg3 viewLogger:(id)arg4 offlineBannerViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnghamiNewTableViewController.h"

#import "ANGContentSectionDelegate-Protocol.h"
#import "ANGHeaderBarViewDataSource-Protocol.h"
#import "ANGHeaderButtonsDelegate-Protocol.h"
#import "ANGHomeButtonCellDelegate-Protocol.h"
#import "ANGQuestionTableViewCellDelegate-Protocol.h"
#import "DownloadButtonProtocol-Protocol.h"
#import "EX2InfinitePagingScrollViewDelegate-Protocol.h"
#import "HeaderMainButtonDelegate-Protocol.h"
#import "LoaderDelegate-Protocol.h"
#import "SongUITableViewCellDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class ANGHeaderBarView, ANGRACColorSignal, ANGSectionedContentDataSource, Loader, NSArray, NSDate, NSIndexPath, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, UIButton, UILabel, UIPageControl, UIRefreshControl, UIView, UIWebView;
@protocol OS_dispatch_queue;

@interface ANGSectionedContentViewController : AnghamiNewTableViewController <UIWebViewDelegate, SongUITableViewCellDelegate, EX2InfinitePagingScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UIActionSheetDelegate, LoaderDelegate, ANGQuestionTableViewCellDelegate, ANGHomeButtonCellDelegate, UIScrollViewDelegate, ANGContentSectionDelegate, ANGHeaderBarViewDataSource, HeaderMainButtonDelegate, DownloadButtonProtocol, ANGHeaderButtonsDelegate>
{
    _Bool _didFirstLayout;
    _Bool _isVisible;
    _Bool _shouldPlayOnce;
    _Bool _dataSuccessfullyLoadedOnce;
    NSMutableArray *_cachedCarousels;
    NSMutableDictionary *_tableViewSectionsScrollStateForSection;
    UIRefreshControl *refresh;
    UIButton *_followersLabel;
    UILabel *_songsLabel;
    UILabel *_releaseLabel;
    UILabel *_likesAndPlaysLabel;
    UIView *_groupByArtistView;
    ANGRACColorSignal *_headerGradientBackgroundColorSignal;
    NSObject<OS_dispatch_queue> *tweetQueue;
    unsigned long long indexForTwitterRow;
    _Bool _showRefreshControl;
    _Bool _headerVisible;
    _Bool _showTweets;
    _Bool _disableLoaderAutoPlay;
    _Bool _supportsEmptyView;
    ANGSectionedContentDataSource *_dataSource;
    UIView *_headerBackgroundGradientView;
    ANGHeaderBarView *_headerView;
    NSArray *_artistTweets;
    NSDate *_lastServerRefreshDate;
    NSArray *_headerBarImageViewLabels;
    NSIndexPath *_lastDisplayedPath;
    NSTimer *_webViewTimer;
    UIWebView *_webView;
    unsigned long long _webViewRetryCount;
    UIPageControl *_pageControl;
    struct CGRect _selectedView;
}

@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) unsigned long long webViewRetryCount; // @synthesize webViewRetryCount=_webViewRetryCount;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSTimer *webViewTimer; // @synthesize webViewTimer=_webViewTimer;
@property struct CGRect selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) NSIndexPath *lastDisplayedPath; // @synthesize lastDisplayedPath=_lastDisplayedPath;
@property(readonly, nonatomic) NSArray *headerBarImageViewLabels; // @synthesize headerBarImageViewLabels=_headerBarImageViewLabels;
@property(retain, nonatomic) NSDate *lastServerRefreshDate; // @synthesize lastServerRefreshDate=_lastServerRefreshDate;
@property(readonly) _Bool supportsEmptyView; // @synthesize supportsEmptyView=_supportsEmptyView;
@property(readonly) _Bool disableLoaderAutoPlay; // @synthesize disableLoaderAutoPlay=_disableLoaderAutoPlay;
@property(readonly) _Bool showTweets; // @synthesize showTweets=_showTweets;
@property(readonly) _Bool headerVisible; // @synthesize headerVisible=_headerVisible;
@property(readonly) _Bool showRefreshControl; // @synthesize showRefreshControl=_showRefreshControl;
@property(retain, nonatomic) NSArray *artistTweets; // @synthesize artistTweets=_artistTweets;
@property(retain) ANGHeaderBarView *headerView; // @synthesize headerView=_headerView;
@property(retain) UIView *headerBackgroundGradientView; // @synthesize headerBackgroundGradientView=_headerBackgroundGradientView;
@property(retain, nonatomic) ANGSectionedContentDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool followButtonAllowed;
@property(readonly, nonatomic) _Bool shareButtonAllowed;
- (id)defaultHeaderButtons;
- (void)playPressed;
- (_Bool)hideHeaderButtonsTillLoaderFinishes;
- (void)reloadHeaderViewButtons;
- (_Bool)disableTouchPreview;
- (CDUnknownBlockType)songCellActionButtonCompletion:(id)arg1;
- (struct CGRect)transitionView;
- (struct CGRect)nonForceTouchRectFrom:(id)arg1;
- (id)previewActionsForPopupPreviewRecognizer:(id)arg1;
- (id)previewViewControllerForPopupPreviewRecognizer:(id)arg1;
- (_Bool)isDataLoaded;
- (void)playAction:(id)arg1;
- (void)constructPlayQueueForSection:(id)arg1 atIndex:(unsigned long long)arg2 isVideoPlayQueue:(_Bool)arg3 showPlayerForVideo:(_Bool)arg4;
- (void)handleEmptyResponse:(id)arg1;
- (void)_handleEmptyResponse:(id)arg1;
- (_Bool)allowEmptySections;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (void)dealloc;
- (id)previewObjectForIndexPath:(id)arg1 collectionView:(id)arg2 section:(id)arg3 confirmActionRef:(CDUnknownBlockType *)arg4;
- (id)previewingObjectFromLocation:(struct CGPoint)arg1 confirmActionRef:(CDUnknownBlockType *)arg2;
- (struct CGRect)absolutePositionForLocation:(struct CGPoint)arg1;
- (struct CGRect)relativeRectFromView:(id)arg1;
- (struct CGPoint)adjustedLocation:(struct CGPoint)arg1;
- (struct CGRect)previewingContextFrameFromLocation:(struct CGPoint)arg1;
@property(readonly) _Bool hasMoreSections;
@property(readonly) Loader *loader;
- (_Bool)possiblyResetSectionsPaginationRequestToDefault;
@property(readonly) long long refreshIntervalInSeconds;
- (void)_loadServerDataAndIsUserRefresh:(_Bool)arg1;
- (void)loadServerDataAndIsUserRefresh:(_Bool)arg1;
- (void)loadServerData;
- (void)toggleHideShowAnghamiNavBarOnConnectionStateDidChange;
- (void)toggleLanguageSelectorEnabled:(_Bool)arg1;
- (void)updateHeaderButtonsState;
- (void)connectionStateDidChange:(id)arg1;
- (long long)defaultPlayMode;
- (id)sectionFromCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)lowerButtonAction:(id)arg1;
- (void)homeButtonCell:(id)arg1 didTapButtonWithURL:(id)arg2;
- (void)showAllForSection:(id)arg1;
- (void)showAllPhotos:(id)arg1 andPhotoIndex:(long long)arg2 andStartOnGrid:(_Bool)arg3;
- (void)playRadio:(id)arg1;
- (id)adUnitId;
- (void)contentSectionsUpdated;
- (void)deleteSection:(id)arg1;
- (void)userAnsweredQuestion:(id)arg1 withAnswerId:(id)arg2 andDidClose:(_Bool)arg3;
- (void)didCloseSectionWithId:(id)arg1;
- (struct CGSize)bannerSize;
- (id)buildBanner:(id)arg1;
- (double)bigBannerImageWidth;
- (void)infinitePagingScrollViewDidChangePages:(id)arg1;
- (id)infinitePagingScrollView:(id)arg1 pageForIndex:(long long)arg2;
- (id)buildBannerCarouselFromSection:(id)arg1 indexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)songsFromSection:(id)arg1;
- (long long)enginePlaySource;
- (void)handleClickedObject:(id)arg1 inSection:(id)arg2 atIndexPath:(id)arg3 correctedIndex:(long long)arg4;
- (_Bool)isAllowedToOpenAndExecuteDeeplinkForObject:(id)arg1;
- (void)showUserVideoPlayerWithLoader:(id)arg1 section:(id)arg2 index:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)loadingCellInTableView:(id)arg1;
- (void)hidePaginationLoadingIndicatorIfShowing;
- (long long)_tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)sortingDoneButtonView;
- (_Bool)canChangeOrder;
- (id)getNavigationController;
- (void)didTapSeeAllButtonForSectionId:(id)arg1;
- (void)refreshHeaderBackgroundGradientViewConstraints;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dismissKeyboardAccountingForTextInput;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)loadPaginatedDataIfNeeded;
- (_Bool)didReceiveArtistTweets;
- (void)reloadTweetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)tweetAtIndex:(unsigned long long)arg1;
- (long long)indexForSocialSection;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)loadWebViewFromFirstWebSection;
- (void)toggleSortArtistTab;
@property(readonly, nonatomic) UIView *groupByArtistView;
- (void)setSubtitleForHeaderWithCaret:(id)arg1 isVerified:(_Bool)arg2 imageArtId:(id)arg3;
- (void)setSubtitleForHeader:(id)arg1 isVerified:(_Bool)arg2 imageArtId:(id)arg3 withCaret:(_Bool)arg4;
- (void)updateLikesAndPlaysLabelwithNumLikes:(long long)arg1 numPlays:(long long)arg2;
@property(readonly, nonatomic) UILabel *likesAndPlaysLabel;
- (void)setReleaseDate:(id)arg1;
@property(readonly, nonatomic) UILabel *releaseLabel;
- (void)setNumberOfSongs:(long long)arg1 isVideo:(_Bool)arg2;
@property(readonly, nonatomic) UILabel *songsLabel;
- (void)setNumberOfFollowers:(long long)arg1;
- (void)followersLabelTapped;
@property(readonly, nonatomic) UIButton *followersLabel;
- (double)initialHeaderViewHeight;
- (double)headerImageViewTopOffset;
@property(readonly) struct CGRect initialHeaderBackgroundGradientViewFrame;
- (void)setContentHidden:(_Bool)arg1;
- (void)viewDidLayoutSubviewsSafe;
- (void)relayoutHeaderBackgroundGradientViewWithDuration:(double)arg1;
@property(readonly) _Bool supportsParallaxEffect;
- (_Bool)navigationMinimizes;
- (void)resetContentInset:(_Bool)arg1;
- (void)layoutHeaderBackgroundGradient;
- (void)toggleNavigationBarTransapacency:(id)arg1;
- (void)headerBarHeightRefreshed:(id)arg1;
- (_Bool)shouldRefreshHeaderBackgroundGradientViewConstraint;
- (_Bool)shouldRefreshHeaderConstraint;
@property(readonly) _Bool headerBackgroundGradientViewVisible;
- (void)layoutHeader;
- (void)reloadTable;
- (void)reloadTableAndResetScrollState:(_Bool)arg1;
- (void)resetScrollState;
- (void)adjustCellsAfterRotation;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)refreshControlValueChanged;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldReloadTableAndREsetScrollStateOnAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)hidesNavigationBar;
- (void)sectionAdUpdated:(id)arg1;
- (void)viewDidLoad;
- (void)stopRefreshControl;
- (void)removeRefreshControl;
- (void)setupTableView;
- (void)setup;
@property(readonly, nonatomic) ANGRACColorSignal *headerGradientBackgroundColorSignal;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

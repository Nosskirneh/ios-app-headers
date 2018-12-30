//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSectionedContentViewController.h"

#import "ANGSearchAutocompleteViewControllerDelegate-Protocol.h"
#import "AVAudioRecorderDelegate-Protocol.h"
#import "LoaderDelegate-Protocol.h"
#import "SectionsPaginationProtocol-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class ANGLinksHeaderSwiperView, ANGPagedSearchViewController, ANGRecentSearchViewController, ANGSearchTableViewHeader, NSIndexPath, NSString, SpeechSearchView, UIActivityIndicatorView, UIBarButtonItem, UISearchBar, UIView;

@interface SearchViewController : ANGSectionedContentViewController <SectionsPaginationProtocol, AVAudioRecorderDelegate, UITextFieldDelegate, UISearchBarDelegate, LoaderDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, ANGSearchAutocompleteViewControllerDelegate>
{
    UISearchBar *_searchBar;
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_searchBarActivityIndicator;
    UIView *_searchView;
    _Bool _keyboardShowing;
    _Bool _resumeEditingOnCenterPanelFocus;
    NSString *_lastSelectedSearchTag;
    Class _previousViewControllerType;
    _Bool _didInsetSearch;
    UIBarButtonItem *voiceButton;
    _Bool _didSendEventInCurrentSession;
    SpeechSearchView *speechView;
    _Bool _newSearchScrolledOnce;
    long long _lastSearchTermLength;
    ANGSearchTableViewHeader *_searchTableViewHeader;
    ANGLinksHeaderSwiperView *_searchHeaderSwiperView;
    NSIndexPath *_lastDisplayedPath;
    ANGRecentSearchViewController *_recentSearchesController;
    ANGPagedSearchViewController *_tabbedSearchViewController;
    UIActivityIndicatorView *_loadingView;
}

@property(nonatomic) _Bool newSearchScrolledOnce; // @synthesize newSearchScrolledOnce=_newSearchScrolledOnce;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) ANGPagedSearchViewController *tabbedSearchViewController; // @synthesize tabbedSearchViewController=_tabbedSearchViewController;
@property(retain, nonatomic) ANGRecentSearchViewController *recentSearchesController; // @synthesize recentSearchesController=_recentSearchesController;
@property(retain, nonatomic) NSIndexPath *lastDisplayedPath; // @synthesize lastDisplayedPath=_lastDisplayedPath;
@property(retain, nonatomic) ANGLinksHeaderSwiperView *searchHeaderSwiperView; // @synthesize searchHeaderSwiperView=_searchHeaderSwiperView;
@property(retain, nonatomic) ANGSearchTableViewHeader *searchTableViewHeader; // @synthesize searchTableViewHeader=_searchTableViewHeader;
@property long long lastSearchTermLength; // @synthesize lastSearchTermLength=_lastSearchTermLength;
- (void).cxx_destruct;
- (_Bool)showRadarTooltip;
- (void)adjustInsetsForMiniPlayer:(id)arg1;
- (void)scrollToTop;
- (_Bool)canChangeStatusBar;
- (_Bool)shouldAdjustTableViewContentOffset;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)transparentPurpleNavigationBar;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshButtons:(id)arg1;
- (void)searchTextFieldDidChange:(id)arg1;
- (void)scrollSearchViewToTop;
- (_Bool)searchIsScrolledToTop;
- (_Bool)searchIsScrolledToBottom;
- (void)refreshStatusOnAppearance;
- (void)updateStatusBarStyle:(long long)arg1 backgroundColorClear:(_Bool)arg2;
- (void)scrollSearchViewToBottom;
- (void)searchCancelClicked:(id)arg1;
- (void)updateSearchPlaceHolder;
- (void)addSearchTableViewHeader;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)loadSwiperHeader;
- (void)addSearchSwiperView;
- (double)getTableViewTopInsetForNewSearch;
- (struct CGRect)getNewSearchSwiperViewFrame;
- (double)getNewSearchSwiperViewHeight;
- (void)resetToOldSearch;
- (void)initNewSearchView;
- (_Bool)searchSwiperViewShouldReset;
- (long long)tableViewStyle;
- (_Bool)hidesNavigationBarWithNoControls;
- (void)goToAudioRecognition;
- (id)previewObjectForIndexPath:(id)arg1 collectionView:(id)arg2 section:(id)arg3 confirmActionRef:(CDUnknownBlockType *)arg4;
- (id)previewingObjectFromLocation:(struct CGPoint)arg1 confirmActionRef:(CDUnknownBlockType *)arg2;
- (struct CGRect)previewingContextFrameFromLocation:(struct CGPoint)arg1;
- (void)searchTabbarGroupSelected:(id)arg1;
- (void)dismissSearch;
- (void)hideSearch;
- (id)searchPlaceholder;
- (void)reloadTable;
- (_Bool)canShowFreeBar;
- (_Bool)disableTouchPreview;
- (_Bool)isAccessibilityElement;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)showSearchMode;
- (void)setSearchTerm:(id)arg1 source:(id)arg2;
- (void)setSearchViewHidden:(_Bool)arg1;
- (void)showPeopleSearch;
- (void)invokeSearch:(id)arg1 source:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (_Bool)isSearchMode;
- (void)updateSearchViewStatusForceShowPeople:(_Bool)arg1;
- (void)updateSearchViewStatus;
- (void)stopSearchBarActivityAnimation;
- (void)addSearchBarActivityIndicator;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)resetSelectedTab;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancel;
- (void)cancelSearchAnimated:(_Bool)arg1 resetText:(_Bool)arg2;
- (void)cancelSearchAnimated:(_Bool)arg1;
- (void)addSearchClearButton;
- (void)refreshSearchNavIcons;
- (void)addSearchView;
- (id)cachedContentSectionContainer;
- (void)didHandlePaginatingSections:(id)arg1;
- (void)deleteSection:(id)arg1;
- (void)loadSections;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (void)restartAnimation;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)lastSelectedSearchTag;
- (void)setLastSelectedSearchTag:(id)arg1;
- (void)connectionStateDidChangeAnimated:(_Bool)arg1;
- (void)cancelAllAutoCompleteRequests;
- (id)amplitudeEventPageTitle;
- (id)buildAdCell:(id)arg1 size:(struct CGSize)arg2;
- (void)customizeSearchBar;
- (id)childNavigationController;
- (void)refreshAutocompleteTableInsets;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


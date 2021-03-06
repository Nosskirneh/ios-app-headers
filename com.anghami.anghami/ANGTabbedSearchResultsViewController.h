//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGSearchAutocompleteViewController.h"

#import "ANGQuestionTableViewCellDelegate-Protocol.h"

@class ANGPagedSearchViewController, NSDictionary, NSString, NSTimer;

@interface ANGTabbedSearchResultsViewController : ANGSearchAutocompleteViewController <ANGQuestionTableViewCellDelegate>
{
    _Bool _shouldShow;
    _Bool _forceRemoveLoading;
    NSString *_searchGroup;
    NSTimer *_deferredSearchTimer;
    NSDictionary *_searchDict;
    ANGPagedSearchViewController *_containingPageViewController;
}

@property(nonatomic) _Bool forceRemoveLoading; // @synthesize forceRemoveLoading=_forceRemoveLoading;
@property __weak ANGPagedSearchViewController *containingPageViewController; // @synthesize containingPageViewController=_containingPageViewController;
@property(retain, nonatomic) NSDictionary *searchDict; // @synthesize searchDict=_searchDict;
@property(retain, nonatomic) NSTimer *deferredSearchTimer; // @synthesize deferredSearchTimer=_deferredSearchTimer;
@property(retain, nonatomic) NSString *searchGroup; // @synthesize searchGroup=_searchGroup;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
- (void).cxx_destruct;
- (void)userAnsweredQuestion:(id)arg1 withAnswerId:(id)arg2 andDidClose:(_Bool)arg3;
- (void)didCloseSectionWithId:(id)arg1;
- (double)bottomOffset;
- (void)adjustInsetsForMiniPlayer:(id)arg1;
- (void)stickTableViewToTopAdjustOffset:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadServerDataAndIsUserRefresh:(_Bool)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)loadingFinished:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)showRefreshControl;
- (id)searchSource;
- (id)searchString;
- (void)searchNow;
- (void)deferredSearch;
- (void)cancelDeferredSearch;
- (void)removeLoading;
- (void)cancelAllRequests;
- (void)cancelAllLoaders;
- (void)setSearchDict:(id)arg1 containingController:(id)arg2 searchImmediately:(_Bool)arg3 isPreload:(_Bool)arg4;
- (id)analyticsReportingDataObject:(id)arg1;
- (_Bool)disableTouchPreview;
- (void)updateDataSource;
- (void)reloadData;
- (void)handleClickedObject:(id)arg1 inSection:(id)arg2 atIndexPath:(id)arg3 correctedIndex:(long long)arg4;
- (_Bool)isInitialLoading;
- (_Bool)shouldShowLoading;
- (id)loader;
- (void)scrollToTop;
- (_Bool)loadPaginatedDataIfNeeded;
- (void)reloadTableAndResetScrollState:(_Bool)arg1;
- (void)updatePageView:(id)arg1;
- (_Bool)shouldSearch;
- (id)selectedTab;
- (id)initWithSearchGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


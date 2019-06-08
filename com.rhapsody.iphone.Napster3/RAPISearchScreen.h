//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreen.h"

#import "IDSpellerDelegate-Protocol.h"
#import "IDTableDelegate-Protocol.h"

@class IDSpeller, IDView, NSArray, NSMutableArray, NSString, RAPISearchScreenConfig, SearchResultsID5View, SearchResultsView, SearchScreenID5View, SearchScreenView, SearchSuggestionsID5View;

@interface RAPISearchScreen : RAPIScreen <IDTableDelegate, IDSpellerDelegate>
{
    _Bool _showingPreviousSearchTerms;
    SearchScreenView *_searchScreenID4View;
    SearchResultsView *_searchResultsView;
    SearchScreenID5View *_searchScreenID5View;
    SearchSuggestionsID5View *_searchSuggestionsID5View;
    SearchResultsID5View *_searchResultsID5View;
    NSArray *_suggestionsGroupLabels;
    NSArray *_suggestionsGroupTables;
    NSArray *_searchResultsGroupLabels;
    NSArray *_searchResultsGroupTables;
    IDSpeller *_searchScreenSpeller;
    long long _filterSearchResultsGroupIndex;
    RAPISearchScreenConfig *_config;
    NSMutableArray *_previousSearchTerms;
    NSString *_currentSearchTerm;
    NSArray *_searchResultsRowProperties;
    NSMutableArray *_searchResultsGroupCounts;
    NSArray *_suggestionListRowProperties;
    NSMutableArray *_suggestionListGroupCounts;
    IDView *_previousFocusedView;
}

@property(retain) IDView *previousFocusedView; // @synthesize previousFocusedView=_previousFocusedView;
@property(retain) NSMutableArray *suggestionListGroupCounts; // @synthesize suggestionListGroupCounts=_suggestionListGroupCounts;
@property(retain) NSArray *suggestionListRowProperties; // @synthesize suggestionListRowProperties=_suggestionListRowProperties;
@property(retain) NSMutableArray *searchResultsGroupCounts; // @synthesize searchResultsGroupCounts=_searchResultsGroupCounts;
@property(retain) NSArray *searchResultsRowProperties; // @synthesize searchResultsRowProperties=_searchResultsRowProperties;
@property _Bool showingPreviousSearchTerms; // @synthesize showingPreviousSearchTerms=_showingPreviousSearchTerms;
@property(retain) NSString *currentSearchTerm; // @synthesize currentSearchTerm=_currentSearchTerm;
@property(retain) NSMutableArray *previousSearchTerms; // @synthesize previousSearchTerms=_previousSearchTerms;
@property(retain) RAPISearchScreenConfig *config; // @synthesize config=_config;
@property long long filterSearchResultsGroupIndex; // @synthesize filterSearchResultsGroupIndex=_filterSearchResultsGroupIndex;
@property(retain) IDSpeller *searchScreenSpeller; // @synthesize searchScreenSpeller=_searchScreenSpeller;
@property(retain) NSArray *searchResultsGroupTables; // @synthesize searchResultsGroupTables=_searchResultsGroupTables;
@property(retain) NSArray *searchResultsGroupLabels; // @synthesize searchResultsGroupLabels=_searchResultsGroupLabels;
@property(retain) NSArray *suggestionsGroupTables; // @synthesize suggestionsGroupTables=_suggestionsGroupTables;
@property(retain) NSArray *suggestionsGroupLabels; // @synthesize suggestionsGroupLabels=_suggestionsGroupLabels;
@property(retain) SearchResultsID5View *searchResultsID5View; // @synthesize searchResultsID5View=_searchResultsID5View;
@property(retain) SearchSuggestionsID5View *searchSuggestionsID5View; // @synthesize searchSuggestionsID5View=_searchSuggestionsID5View;
@property(retain) SearchScreenID5View *searchScreenID5View; // @synthesize searchScreenID5View=_searchScreenID5View;
@property(retain) SearchResultsView *searchResultsView; // @synthesize searchResultsView=_searchResultsView;
@property(retain) SearchScreenView *searchScreenID4View; // @synthesize searchScreenID4View=_searchScreenID4View;
- (void).cxx_destruct;
- (void)delegate_onSearchStringChanged:(id)arg1;
- (id)delegate_getMoreLabelForGroup:(long long)arg1;
- (id)delegate_getLabelForEmptyList;
- (long long)delegate_getTargetScreenForRow:(long long)arg1 forGroup:(long long)arg2;
- (id)delegate_getStringForRow:(long long)arg1 forGroup:(long long)arg2;
- (long long)delegate_getItemCountForGroup:(long long)arg1;
- (id)delegate_getGroupLabelForGroup:(long long)arg1;
- (long long)delegate_getGroupCount;
- (id)delegate_getLoadingLabel;
- (_Bool)delegate_canProvideDataImmediately;
- (void)clearScreenContent;
- (void)setInfoLabel:(id)arg1;
- (void)showLoadingMessage;
- (void)updateScreenContent;
- (_Bool)canProvideDataImmediately;
- (void)onFocusGained:(long long)arg1;
- (void)onViewAppeared;
- (id)getScreenDelegate;
- (void)onConnectedToHeadunit;
- (void)clearSearchResults;
- (void)clearSuggestions;
- (void)clearSearch;
- (void)setTargetScreenForIndex:(long long)arg1 rowProperties:(id)arg2 groupTables:(id)arg3 onlyFocused:(_Bool)arg4;
- (void)handleTableRowSelection:(long long)arg1 table:(id)arg2 onlyFocused:(_Bool)arg3;
- (id)fillSearchResults:(id)arg1 tables:(id)arg2 tableGroupCounts:(id)arg3 infoLabel:(id)arg4 stringArray:(id)arg5 maxItemsPerGroup:(long long)arg6 groupIndex:(long long)arg7;
- (void)searchResultSelectedAtIndex:(long long)arg1 onlyFocused:(_Bool)arg2;
- (void)updateSearchResults;
- (void)suggestionSelectedAtIndex:(long long)arg1 onlyFocused:(_Bool)arg2;
- (long long)getAbsoluteIndex:(id)arg1 indexWithinTable:(long long)arg2 tables:(id)arg3 tableGroupCounts:(id)arg4;
- (void)updateSuggestions;
- (void)showSearchTermHistoryID5;
- (void)showSearchTermHistoryID4;
- (void)addSearchTermToHistory;
- (void)searchTermChanged:(id)arg1;
- (void)table:(id)arg1 didFocusItemAtIndex:(long long)arg2;
- (void)table:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)spellerDidSelectOK:(id)arg1;
- (void)speller:(id)arg1 didSelectResultAtIndex:(long long)arg2;
- (void)speller:(id)arg1 didChangeText:(id)arg2;
- (void)viewDidAppear:(id)arg1;
- (void)viewDidBecomeFocused:(id)arg1;
- (id)initWithConfig:(id)arg1 andContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRDataSourceAbstract.h"

#import "DZRSuggestMappingOperationDelegate-Protocol.h"

@class DZRSuggestDataSourceStateMachine, NSArray, NSOperationQueue, NSString, NSTimer;
@protocol DZRCancelable, DZRSuggestDataSourceDelegate, _TtP6Deezer27NetworkReachabilityProtocol_;

@interface DZRSuggestDataSource : DZRDataSourceAbstract <DZRSuggestMappingOperationDelegate>
{
    _Bool _suggestRequestIsLoading;
    NSString *_searchText;
    NSString *_revisedQuery;
    NSString *_suggestedQuery;
    id <DZRSuggestDataSourceDelegate> _suggestDelegate;
    NSArray *_offlineResults;
    DZRSuggestDataSourceStateMachine *_suggestDataSourceStateMachine;
    NSTimer *_timeOutTimer;
    NSArray *_suggestResults;
    id <DZRCancelable> _suggestRequest;
    id <DZRCancelable> _trendingsRequest;
    NSString *_DZRSearchHistoryUDKey;
    NSOperationQueue *_offlineSuggestMappingQueue;
    id <_TtP6Deezer27NetworkReachabilityProtocol_> _reachability;
}

+ (id)suggestMappingQueue;
@property(retain, nonatomic) id <_TtP6Deezer27NetworkReachabilityProtocol_> reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) NSOperationQueue *offlineSuggestMappingQueue; // @synthesize offlineSuggestMappingQueue=_offlineSuggestMappingQueue;
@property(retain, nonatomic) NSString *DZRSearchHistoryUDKey; // @synthesize DZRSearchHistoryUDKey=_DZRSearchHistoryUDKey;
@property(nonatomic) __weak id <DZRCancelable> trendingsRequest; // @synthesize trendingsRequest=_trendingsRequest;
@property(retain, nonatomic) id <DZRCancelable> suggestRequest; // @synthesize suggestRequest=_suggestRequest;
@property(retain, nonatomic) NSArray *suggestResults; // @synthesize suggestResults=_suggestResults;
@property(retain, nonatomic) NSTimer *timeOutTimer; // @synthesize timeOutTimer=_timeOutTimer;
@property(retain, nonatomic) DZRSuggestDataSourceStateMachine *suggestDataSourceStateMachine; // @synthesize suggestDataSourceStateMachine=_suggestDataSourceStateMachine;
@property(nonatomic) _Bool suggestRequestIsLoading; // @synthesize suggestRequestIsLoading=_suggestRequestIsLoading;
@property(retain, nonatomic) NSArray *offlineResults; // @synthesize offlineResults=_offlineResults;
@property(nonatomic) __weak id <DZRSuggestDataSourceDelegate> suggestDelegate; // @synthesize suggestDelegate=_suggestDelegate;
@property(retain, nonatomic) NSString *suggestedQuery; // @synthesize suggestedQuery=_suggestedQuery;
@property(retain, nonatomic) NSString *revisedQuery; // @synthesize revisedQuery=_revisedQuery;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void).cxx_destruct;
- (void)enterOfflineComplete;
- (void)enterSuggestCompletedButOffline;
- (void)enterSuggestTimedOutWithOfflineResult;
- (void)enterSuggestTimedOut;
- (void)enterLoadingWithOfflineResults;
- (void)enterSuggestCompleted;
- (void)enterLoading;
- (void)needsUpdate;
- (_Bool)queryHasSuggestion;
- (_Bool)queryHasBeenRevised;
- (id)indexPathForItem:(id)arg1;
- (long long)typeForSection:(long long)arg1;
- (id)titleForFooterAtSection:(long long)arg1;
- (id)titleForHeaderAtSection:(long long)arg1;
- (id)itemsForSection:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (double)heightForFooterInSection:(long long)arg1 withDefaultValue:(double)arg2;
- (double)heightForHeaderInSection:(long long)arg1 withDefaultValue:(double)arg2;
- (void)refreshData;
- (id)getResults;
- (_Bool)hasData;
- (_Bool)isLoading;
- (void)reinit;
- (void)suggestMappingOperationDidComplete:(id)arg1;
- (void)offlineSuggestOperationDidComplete:(id)arg1;
- (id)retrieveCachedTrendings;
- (void)saveTrendings:(id)arg1;
- (void)requestSearchTrending;
- (id)getSearchTrendings;
- (void)searchOfflineWithString:(id)arg1 maximumCountOfResults:(unsigned long long)arg2;
- (void)requestHasTimedOut:(id)arg1;
- (void)searchWithString:(id)arg1;
- (id)getSearchHistory;
- (void)saveSearchTextInHistory:(id)arg1;
- (void)validateSearch;
- (void)clearSearchHistory;
- (id)initWithDelegate:(id)arg1 reachability:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTSearch2ViewModelFetcher-Protocol.h"

@class EXP_HUBViewModelBuilderFactory, NSString, NSURL, SPTDataLoader, SPTDataLoaderFactory;
@protocol EXP_HUBContentOperation, SPTSearch2DateProviding, SPTSearch2EmptyStatePropertiesProvider, SPTSearchABTestSource;

@interface SPTSearch2OnlineViewModelFetcher : NSObject <SPTDataLoaderDelegate, SPTSearch2ViewModelFetcher>
{
    NSURL *_url;
    id <SPTSearch2DateProviding> _dateProvider;
    SPTDataLoader *_dataLoader;
    SPTDataLoaderFactory *_dataLoaderFactory;
    EXP_HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <EXP_HUBContentOperation> _hubs2TargetMigrationContentOperation;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTSearchABTestSource> _searchTestManager;
    NSString *_autoCompleteRequestID;
}

@property(readonly, nonatomic) NSString *autoCompleteRequestID; // @synthesize autoCompleteRequestID=_autoCompleteRequestID;
@property(readonly, nonatomic) id <SPTSearchABTestSource> searchTestManager; // @synthesize searchTestManager=_searchTestManager;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) id <EXP_HUBContentOperation> hubs2TargetMigrationContentOperation; // @synthesize hubs2TargetMigrationContentOperation=_hubs2TargetMigrationContentOperation;
@property(readonly, nonatomic) EXP_HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)nextPageFetcherForViewModel:(id)arg1;
- (void)performCompletionUnlessCancelledForRequest:(id)arg1 withViewModel:(id)arg2;
- (void)addEmptyStateViewWithProperties:(id)arg1 toViewModelBuilder:(id)arg2;
- (void)addErrorStateOverlayComponentToViewModelBuilder:(id)arg1;
- (void)addOfflineStateOverlayComponentToViewModelBuilder:(id)arg1;
- (void)addEmptyStateOverlayForQuery:(id)arg1 toViewModelBuilder:(id)arg2;
- (void)replaceEmptyviewsWithInfoViewInViewModelBuilder:(id)arg1;
- (_Bool)viewModelBuilderContainsEmptyviewComponents:(id)arg1;
- (id)emptyviewComponentsInViewModelBuilder:(id)arg1;
- (void)removeEmptyviewComponentsFromViewModelBuilder:(id)arg1;
- (id)urlByUpdatingTimestampInURL:(id)arg1;
- (void)deriveWebgateNextPageURLFromAccesspointNextPageURLInViewModelBuilder:(id)arg1;
- (void)applyTransparencyToComponentsInViewModelBuilder:(id)arg1;
- (void)removeGradientFromViewModelBuilder:(id)arg1;
- (void)setCancellationToken:(id)arg1 forRequest:(id)arg2;
- (id)cancellationTokenForRequest:(id)arg1;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
- (CDUnknownBlockType)completionBlockForRequest:(id)arg1;
- (id)podcastTransformerForURL:(id)arg1;
- (id)transformerForURL:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)fetchViewModelWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 dataLoaderFactory:(id)arg2 viewModelBuilderFactory:(id)arg3 hubs2TargetMigrationContentOperation:(id)arg4 emptyStatePropertiesProvider:(id)arg5 searchTestManager:(id)arg6 dateProvider:(id)arg7 autoCompleteRequestID:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


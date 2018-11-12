//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBContentOperationDelegate-Protocol.h"
#import "SPTSearch2Context-Protocol.h"

@class NSArray, NSString;
@protocol EXP_HUBViewModel, SPTSearch2CancellationToken, SPTSearch2ContextDelegate, SPTSearch2ViewModelFetcher;

@interface SPTSearch2ResultsContext : NSObject <EXP_HUBContentOperationDelegate, SPTSearch2Context>
{
    id <SPTSearch2ContextDelegate> _delegate;
    NSString *_query;
    unsigned long long _state;
    id <EXP_HUBViewModel> _viewModel;
    id <SPTSearch2ViewModelFetcher> _viewModelFetcher;
    id <SPTSearch2ViewModelFetcher> _nextPageFetcher;
    id <SPTSearch2CancellationToken> _nextPageFetchCancellationToken;
    NSArray *_postProcessContentOperations;
}

@property(readonly, copy, nonatomic) NSArray *postProcessContentOperations; // @synthesize postProcessContentOperations=_postProcessContentOperations;
@property(retain, nonatomic) id <SPTSearch2CancellationToken> nextPageFetchCancellationToken; // @synthesize nextPageFetchCancellationToken=_nextPageFetchCancellationToken;
@property(retain, nonatomic) id <SPTSearch2ViewModelFetcher> nextPageFetcher; // @synthesize nextPageFetcher=_nextPageFetcher;
@property(readonly, nonatomic) id <SPTSearch2ViewModelFetcher> viewModelFetcher; // @synthesize viewModelFetcher=_viewModelFetcher;
@property(readonly, nonatomic) id <EXP_HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) __weak id <SPTSearch2ContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)postProcessViewModel:(id)arg1;
- (void)contentOperation:(id)arg1 didFailWithError:(id)arg2;
- (void)contentOperationDidFinish:(id)arg1;
- (void)contentOperationRequiresRescheduling:(id)arg1;
- (void)loadNextPage;
- (void)reload;
- (void)setViewModel:(id)arg1;
- (id)initWithViewModelFetcher:(id)arg1 postProcessContentOperations:(id)arg2 query:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


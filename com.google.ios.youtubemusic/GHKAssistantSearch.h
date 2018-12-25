//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITextFieldDelegate-Protocol.h"

@class GHKAssistantSearchView, GHKAutocompleteFetcher, GHKConnectivity, GHKReceiverConfig, GHKRecommendationsFetcher, NSArray, NSString, SUPActionManager, SUPMetricsReporter;
@protocol GHKAssistantSearchDelegate;

@interface GHKAssistantSearch : NSObject <UITextFieldDelegate>
{
    double _frameHeight;
    id <GHKAssistantSearchDelegate> _delegate;
    GHKAssistantSearchView *_view;
    SUPActionManager *_actionManager;
    GHKAutocompleteFetcher *_autocompleteFetcher;
    GHKConnectivity *_connectivity;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKRecommendationsFetcher *_searchSuggestionsFetcher;
    NSArray *_fetchedHelpUnits;
    NSString *_query;
}

+ (id)objectionRequires;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSArray *fetchedHelpUnits; // @synthesize fetchedHelpUnits=_fetchedHelpUnits;
@property(retain, nonatomic) GHKRecommendationsFetcher *searchSuggestionsFetcher; // @synthesize searchSuggestionsFetcher=_searchSuggestionsFetcher;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConnectivity *connectivity; // @synthesize connectivity=_connectivity;
@property(retain, nonatomic) GHKAutocompleteFetcher *autocompleteFetcher; // @synthesize autocompleteFetcher=_autocompleteFetcher;
@property(retain, nonatomic) SUPActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(readonly, nonatomic) GHKAssistantSearchView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <GHKAssistantSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)maxSearchResults;
- (void)processFetchedHelpUnits:(id)arg1 showSnippet:(_Bool)arg2 fromAutocomplete:(_Bool)arg3 tapSelector:(SEL)arg4;
- (void)initiateSearchWithQuery:(id)arg1;
- (void)initiateAutocompleteWithPartialQuery:(id)arg1;
- (void)didTapSearchSuggestion:(id)arg1;
- (void)didTapAutocompleteSuggestion:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


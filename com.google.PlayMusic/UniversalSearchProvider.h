//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMServiceConfiguration, MusicFetcher, MusicModel, MusicPreferences, NetworkMonitor;

@interface UniversalSearchProvider : NSObject
{
    MusicPreferences *_musicPreferences;
    GPMServiceConfiguration *_serviceConfiguration;
    MusicFetcher *_musicFetcher;
    NetworkMonitor *_networkMonitor;
    MusicModel *_musicModel;
}

+ (unsigned long long)clusterCategoryFromSjClusterResourceCategory:(id)arg1;
+ (id)musicItemFromSjSearchEntryResource:(id)arg1;
+ (id)itemListWithClusterInfoForSearchResponse:(id)arg1 mergedWithLockerResults:(id)arg2;
+ (void)mergeSearchSuggestResponse:(id)arg1 intoLockerSuggestionResults:(id)arg2 fromQuery:(id)arg3;
- (void).cxx_destruct;
- (void)searchSuggestionsForQuery:(id)arg1 loadingHandler:(CDUnknownBlockType)arg2;
- (void)search:(id)arg1 explicitSearch:(_Bool)arg2 loadingHandler:(CDUnknownBlockType)arg3;
- (id)initWithMusicPreferences:(id)arg1 serviceConfiguration:(id)arg2 musicFetcher:(id)arg3 networkMonitor:(id)arg4 musicModel:(id)arg5;

@end

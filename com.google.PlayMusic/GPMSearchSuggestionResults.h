//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GPMSearchSuggestionResults : NSObject
{
    NSString *_suggestQuery;
    NSArray *_searchEntitySuggestionItems;
    NSMutableArray *_searchQuerySuggestionItems;
}

- (void).cxx_destruct;
- (id)generateItemListWithClusterInfo;
- (void)mergeRemoteQuerySearchSuggestions:(id)arg1 remoteEntitySearchSuggestions:(id)arg2;
- (void)addLocalSearchQuerySuggestion:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)init;

@end

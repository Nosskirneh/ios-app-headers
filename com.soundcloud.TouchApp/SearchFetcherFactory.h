//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SearchFetcherFactory : NSObject
{
}

- (id)sortOptions;
- (id)predicateForSearchWithQuery:(id)arg1 filterType:(long long)arg2;
- (id)searchPropertiesForResultsType:(long long)arg1;
- (id)searchSuggestionProperties;
- (id)searchRequestWithQuery:(id)arg1 filterType:(long long)arg2 properties:(id)arg3;
- (id)searchForSearchConfiguration:(id)arg1;

@end

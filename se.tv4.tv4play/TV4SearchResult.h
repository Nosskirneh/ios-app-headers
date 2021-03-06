//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface TV4SearchResult : NSObject
{
    NSString *_searchString;
    long long _maxRetries;
    NSMutableDictionary *_results;
    NSMutableDictionary *_totalNumberOfResults;
    NSMutableDictionary *_pageCursors;
}

@property(retain, nonatomic) NSMutableDictionary *pageCursors; // @synthesize pageCursors=_pageCursors;
@property(retain, nonatomic) NSMutableDictionary *totalNumberOfResults; // @synthesize totalNumberOfResults=_totalNumberOfResults;
@property(retain, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
@property(nonatomic) long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (long long)totalNumberOfResultsForSectionAtIndex:(long long)arg1;
- (id)resultsForSectionAtIndex:(long long)arg1;
- (int)sectionAtIndex:(long long)arg1;
- (int)currentPageForSection:(int)arg1;
- (void)incrementPageCursorForSection:(int)arg1;
- (void)createPageCursorForSection:(int)arg1;
- (int)totalNumberOfResultsForSection:(int)arg1;
- (void)setTotalNumberOfResults:(long long)arg1 forSection:(int)arg2;
- (id)resultsForSection:(int)arg1;
- (void)appendResults:(id)arg1 forSection:(int)arg2;
- (void)setResults:(id)arg1 forSection:(int)arg2;
@property(readonly) _Bool isEmpty;
@property(readonly, nonatomic) NSArray *sections;
- (id)initWithSearchString:(id)arg1;

@end


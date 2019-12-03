//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTPodcastUnfinishedItemsProviderObserver;

@protocol SPTPodcastUnfinishedItemsProvider <NSObject>
- (void)removeUnfinishedItemsProviderObserver:(id <SPTPodcastUnfinishedItemsProviderObserver>)arg1;
- (void)addUnfinishedItemsProviderObserver:(id <SPTPodcastUnfinishedItemsProviderObserver>)arg1;
- (void)getUnfinishedItemsWithMaximumCount:(unsigned long long)arg1;
- (void)subscribeToUnfinishedItems;
@end


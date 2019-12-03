//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface SPTCarPlayContentTreeCache : NSObject
{
    NSMutableOrderedSet *_rootItems;
}

@property(retain, nonatomic) NSMutableOrderedSet *rootItems; // @synthesize rootItems=_rootItems;
- (void).cxx_destruct;
- (void)removeDeletedRootItemsWithNewRootItems:(id)arg1;
- (id)contentTreeCacheDescription;
- (void)setRootItemsShouldRefreshOnUpdate:(id)arg1;
- (void)insertListOfRootItems:(id)arg1;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1 enforcedDepth:(long long)arg2 filterOutErrors:(_Bool)arg3;
- (id)contentItemForIndexPath:(id)arg1 enforcedDepth:(long long)arg2;

@end


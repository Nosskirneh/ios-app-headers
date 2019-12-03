//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface ZDSFetchedResultsChanges : NSObject
{
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    NSMutableArray *_deletedItemPaths;
    NSMutableArray *_insertedItemPaths;
    NSMutableArray *_updatedItemPaths;
    NSMutableArray *_movedItems;
    NSMutableDictionary *_userInfo;
    unsigned long long _options;
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSMutableArray *movedItems; // @synthesize movedItems=_movedItems;
@property(readonly, nonatomic) NSMutableArray *updatedItemPaths; // @synthesize updatedItemPaths=_updatedItemPaths;
@property(readonly, nonatomic) NSMutableArray *insertedItemPaths; // @synthesize insertedItemPaths=_insertedItemPaths;
@property(readonly, nonatomic) NSMutableArray *deletedItemPaths; // @synthesize deletedItemPaths=_deletedItemPaths;
@property(readonly, nonatomic) NSMutableIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(readonly, nonatomic) NSMutableIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
- (void).cxx_destruct;
- (void)changeObjectAtIndexPath:(id)arg1 forChangeType:(unsigned long long)arg2 newIndexPath:(id)arg3;
- (void)changeSection:(id)arg1 atIndex:(unsigned long long)arg2 forChangeType:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

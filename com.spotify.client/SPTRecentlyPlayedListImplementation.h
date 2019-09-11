//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRecentlyPlayedEntityModelObserver-Protocol.h"
#import "SPTRecentlyPlayedList-Protocol.h"

@class NSEnumerator, NSMutableArray, NSString, SPTObserverManager, SPTRecentlyPlayedEntityModel;
@protocol SPTRecentlyPlayedEntityItem;

@interface SPTRecentlyPlayedListImplementation : NSObject <SPTRecentlyPlayedEntityModelObserver, SPTRecentlyPlayedList>
{
    _Bool _dataLoaded;
    SPTRecentlyPlayedEntityModel *_recentlyPlayedModel;
    unsigned long long _maxNumberOfItems;
    CDUnknownBlockType _filterPredicate;
    SPTObserverManager *_observerManager;
    NSMutableArray *_entities;
    NSMutableArray *_allEntities;
}

@property(retain, nonatomic) NSMutableArray *allEntities; // @synthesize allEntities=_allEntities;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(readonly, copy, nonatomic) CDUnknownBlockType filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly, nonatomic) unsigned long long maxNumberOfItems; // @synthesize maxNumberOfItems=_maxNumberOfItems;
@property(nonatomic) __weak SPTRecentlyPlayedEntityModel *recentlyPlayedModel; // @synthesize recentlyPlayedModel=_recentlyPlayedModel;
- (void).cxx_destruct;
- (_Bool)removeItemAtIndex:(long long)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)itemAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfItems;
- (void)removeRecentlyPlayedListObserver:(id)arg1;
- (void)addRecentlyPlayedListObserver:(id)arg1;
- (void)recentlyPlayedEntityModelDidReload:(id)arg1;
- (void)updateItemsAndNotifyObservers;
- (void)updateEntityListIfLoaded;
@property(readonly, nonatomic) NSEnumerator<SPTRecentlyPlayedEntityItem> *enumerator;
- (id)initWithRecentlyPlayedModel:(id)arg1 maxNumberOfItems:(unsigned long long)arg2 filterPredicate:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


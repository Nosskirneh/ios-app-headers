//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTSearchFancyRecentsDataSource-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSString;
@protocol SPTLocalSettings;

@interface SPTSearchFancyRecentsDataSourceImplementation : NSObject <SPTSearchFancyRecentsDataSource>
{
    NSMutableArray *_mutableItems;
    id <SPTLocalSettings> _localSettings;
    NSString *_storageKey;
    unsigned long long _maxItemsCount;
    NSMapTable *_delegates;
}

@property(readonly, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) unsigned long long maxItemsCount; // @synthesize maxItemsCount=_maxItemsCount;
@property(readonly, copy, nonatomic) NSString *storageKey; // @synthesize storageKey=_storageKey;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)keyForDelegate:(id)arg1;
- (unsigned long long)indexOfItemWithOriginURI:(id)arg1;
- (void)trimMutableItemsToMaxItemsCount;
- (void)notifyDelegatesAboutItemsChange;
- (void)saveData;
- (void)loadData;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeAllItems;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)addItem:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *items;
- (id)initWithLocalSettings:(id)arg1 storageKey:(id)arg2 maxItemsCount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable;
@protocol DZRDeveloperSettingsModelDelegate, OS_dispatch_queue;

@interface DZRDeveloperSettingsModel : NSObject
{
    unsigned long long _version;
    id <DZRDeveloperSettingsModelDelegate> _delegate;
    NSArray *_sections;
    NSMapTable *_itemsToIndexPathMap;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSMapTable *itemsToIndexPathMap; // @synthesize itemsToIndexPathMap=_itemsToIndexPathMap;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <DZRDeveloperSettingsModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)maybeUpdateModelRepresentation:(id)arg1;
- (void)replaceItemAtIndex:(unsigned long long)arg1 withItem:(id)arg2 inSectionNamed:(id)arg3;
- (void)deleteItemAtIndex:(unsigned long long)arg1 inSectionNamed:(id)arg2;
- (void)addItem:(id)arg1 atIndex:(unsigned long long)arg2 inSectionNamed:(id)arg3;
- (void)addItem:(id)arg1 inSectionWithName:(id)arg2;
- (void)addSectionWithName:(id)arg1 description:(id)arg2 containingItems:(id)arg3;
- (void)replaceSection:(id)arg1 withSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)replaceItemsInRange:(struct _NSRange)arg1 withItems:(id)arg2 inSectionWithName:(id)arg3;
- (id)itemAthIndexPath:(id)arg1;
- (id)titleOfSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (void)dealloc;
- (id)init;

@end


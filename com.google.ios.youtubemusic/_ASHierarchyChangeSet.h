//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDebugDescriptionProvider-Protocol.h"
#import "ASDescriptionProvider-Protocol.h"

@class ASIntegerMap, NSIndexSet, NSMutableArray;

@interface _ASHierarchyChangeSet : NSObject <ASDescriptionProvider, ASDebugDescriptionProvider>
{
    unsigned long long _countForAsyncLayout;
    vector_afed86a5 _oldItemCounts;
    vector_afed86a5 _newItemCounts;
    CDUnknownBlockType _completionHandler;
    _Bool _completed;
    _Bool _animated;
    _Bool _includesReloadData;
    ASIntegerMap *_sectionMapping;
    ASIntegerMap *_reverseSectionMapping;
    NSMutableArray *_itemMappings;
    NSMutableArray *_reverseItemMappings;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    unsigned long long _rootActivity;
    unsigned long long _submitActivity;
    NSMutableArray *_insertItemChanges;
    NSMutableArray *_originalInsertItemChanges;
    NSMutableArray *_deleteItemChanges;
    NSMutableArray *_originalDeleteItemChanges;
    NSMutableArray *_reloadItemChanges;
    NSMutableArray *_insertSectionChanges;
    NSMutableArray *_originalInsertSectionChanges;
    NSMutableArray *_deleteSectionChanges;
    NSMutableArray *_originalDeleteSectionChanges;
    NSMutableArray *_reloadSectionChanges;
}

@property(readonly, nonatomic) NSMutableArray *reloadSectionChanges; // @synthesize reloadSectionChanges=_reloadSectionChanges;
@property(readonly, nonatomic) NSMutableArray *originalDeleteSectionChanges; // @synthesize originalDeleteSectionChanges=_originalDeleteSectionChanges;
@property(readonly, nonatomic) NSMutableArray *deleteSectionChanges; // @synthesize deleteSectionChanges=_deleteSectionChanges;
@property(readonly, nonatomic) NSMutableArray *originalInsertSectionChanges; // @synthesize originalInsertSectionChanges=_originalInsertSectionChanges;
@property(readonly, nonatomic) NSMutableArray *insertSectionChanges; // @synthesize insertSectionChanges=_insertSectionChanges;
@property(readonly, nonatomic) NSMutableArray *reloadItemChanges; // @synthesize reloadItemChanges=_reloadItemChanges;
@property(readonly, nonatomic) NSMutableArray *originalDeleteItemChanges; // @synthesize originalDeleteItemChanges=_originalDeleteItemChanges;
@property(readonly, nonatomic) NSMutableArray *deleteItemChanges; // @synthesize deleteItemChanges=_deleteItemChanges;
@property(readonly, nonatomic) NSMutableArray *originalInsertItemChanges; // @synthesize originalInsertItemChanges=_originalInsertItemChanges;
@property(readonly, nonatomic) NSMutableArray *insertItemChanges; // @synthesize insertItemChanges=_insertItemChanges;
@property(nonatomic) unsigned long long submitActivity; // @synthesize submitActivity=_submitActivity;
@property(nonatomic) unsigned long long rootActivity; // @synthesize rootActivity=_rootActivity;
@property(readonly, nonatomic) _Bool includesReloadData; // @synthesize includesReloadData=_includesReloadData;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(readonly, nonatomic) NSIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
@property(nonatomic) unsigned long long countForAsyncLayout; // @synthesize countForAsyncLayout=_countForAsyncLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)propertiesForDebugDescription;
- (id)propertiesForDescription;
- (id)debugDescription;
- (id)description;
- (_Bool)_includesPerItemOrSectionChanges;
- (void)_validateUpdate;
- (void)_sortAndCoalesceChangeArrays;
- (_Bool)_ensureCompleted;
- (_Bool)_ensureNotCompleted;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2 animationOptions:(unsigned long long)arg3;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 animationOptions:(unsigned long long)arg3;
- (void)reloadSections:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)reloadItems:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)insertSections:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)insertItems:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)deleteSections:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)deleteItems:(id)arg1 animationOptions:(unsigned long long)arg2;
- (void)reloadData;
- (id)newIndexPathForOldIndexPath:(id)arg1;
- (id)oldIndexPathForNewIndexPath:(id)arg1;
- (id)reverseItemMappingInSection:(long long)arg1;
- (id)itemMappingInSection:(long long)arg1;
@property(readonly, nonatomic) NSMutableArray *reverseItemMappings; // @synthesize reverseItemMappings=_reverseItemMappings;
@property(readonly, nonatomic) NSMutableArray *itemMappings; // @synthesize itemMappings=_itemMappings;
@property(readonly, nonatomic) ASIntegerMap *reverseSectionMapping; // @synthesize reverseSectionMapping=_reverseSectionMapping;
@property(readonly, nonatomic) ASIntegerMap *sectionMapping; // @synthesize sectionMapping=_sectionMapping;
- (unsigned long long)oldSectionForNewSection:(unsigned long long)arg1;
- (unsigned long long)newSectionForOldSection:(unsigned long long)arg1;
- (id)indexesForItemChangesOfType:(long long)arg1 inSection:(unsigned long long)arg2;
- (id)itemChangesOfType:(long long)arg1;
- (id)sectionChangesOfType:(long long)arg1;
- (void)markCompletedWithNewItemCounts:(vector_afed86a5)arg1;
- (void)executeCompletionHandlerWithFinished:(_Bool)arg1;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initWithOldData:(vector_afed86a5)arg1;
- (id)init;

@end


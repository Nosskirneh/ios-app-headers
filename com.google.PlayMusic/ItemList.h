//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMMusicItemProvider-Protocol.h"

@class NSMutableArray, NSString;

@interface ItemList : NSObject <GPMMusicItemProvider>
{
    NSMutableArray *_inputSections;
    unsigned long long _totalItemCount;
}

- (void).cxx_destruct;
- (unsigned long long)generateRoutingForItemsFromProvider:(id)arg1 atIndexPath:(id)arg2 onSectionsArray:(id)arg3;
- (unsigned long long)generateRoutingForAppendedProvider:(id)arg1 onSectionsArray:(id)arg2;
- (void)generateRoutingForItem:(id)arg1 atIndexPath:(id)arg2 onSectionsArray:(id)arg3;
- (unsigned long long)sectionIndexForLastSectionInsertOnArray:(id)arg1;
- (void)maybeCreateSectionForSectionIndex:(unsigned long long)arg1 onArray:(id)arg2;
- (void)ensureSectionCount:(unsigned long long)arg1;
- (void)addItemsFromItemProvider:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addItemsFromItemProvider:(id)arg1;
- (void)addItemProvider:(id)arg1;
- (void)addItemsFromArray:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addItemsFromArray:(id)arg1;
- (void)addItem:(id)arg1 toSection:(unsigned long long)arg2;
- (void)addItem:(id)arg1;
- (id)mutationToMusicItemProvider:(id)arg1 visibleIndexPaths:(id)arg2 stopHint:(_Bool *)arg3;
- (id)mutationEnumerator;
- (id)musicItemsInSection:(unsigned long long)arg1 range:(struct _NSRange)arg2;
- (id)musicItemsInSection:(unsigned long long)arg1;
- (id)musicItems;
- (id)musicItemAtIndexPath:(id)arg1;
- (unsigned long long)musicItemCountInSection:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (unsigned long long)musicItemCount;
- (_Bool)hasData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCollectionViewUIFormatter-Protocol.h"

@class NSString;

@interface YTCardCollectionViewUIFormatter : NSObject <YTCollectionViewUIFormatter>
{
    int _cellPositioningStyle;
}

@property(nonatomic) int cellPositioningStyle; // @synthesize cellPositioningStyle=_cellPositioningStyle;
- (struct CGSize)availableSizeForSupplementaryItemWithSectionController:(id)arg1;
- (double)marginWithType:(int)arg1 sectionIndex:(unsigned long long)arg2 sectionController:(id)arg3 numberOfSections:(unsigned long long)arg4;
- (_Bool)sectionControllerHasHeight:(id)arg1;
- (void)setPositionForSupplementaryItem:(id)arg1 kind:(id)arg2 sectionIndex:(unsigned long long)arg3 sectionController:(id)arg4 numberOfSections:(unsigned long long)arg5;
- (int)positionForCellAtIndex:(unsigned long long)arg1 sectionController:(id)arg2 numberOfItems:(unsigned long long)arg3;
- (void)setPositionForCell:(id)arg1 atIndex:(unsigned long long)arg2 sectionController:(id)arg3 numberOfItems:(unsigned long long)arg4;
- (struct CGSize)referenceSizeForFooterWithSize:(struct CGSize)arg1 sectionIndex:(unsigned long long)arg2 sectionController:(id)arg3 numberOfSections:(unsigned long long)arg4;
- (struct CGSize)referenceSizeForHeaderWithSize:(struct CGSize)arg1 sectionIndex:(unsigned long long)arg2 sectionController:(id)arg3 numberOfSections:(unsigned long long)arg4;
- (struct UIEdgeInsets)insetForSectionAtIndex:(unsigned long long)arg1 sectionController:(id)arg2 numberOfSections:(unsigned long long)arg3;
- (void)updateSupplementaryItem:(id)arg1 kind:(id)arg2 sectionIndex:(unsigned long long)arg3 sectionController:(id)arg4 numberOfSections:(unsigned long long)arg5;
- (void)updateCell:(id)arg1 atIndexPath:(id)arg2 sectionController:(id)arg3 numberofSections:(unsigned long long)arg4;
- (struct CGSize)collectionViewSizeWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


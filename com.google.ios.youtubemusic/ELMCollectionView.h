//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "ELMScrollViewProtocol-Protocol.h"

@class ELMScrollViewDataController, NSString;
@protocol ELMContext, UICollectionViewDataSource><ELMScrollViewDataSource;

@interface ELMCollectionView : UICollectionView <ELMScrollViewProtocol>
{
    CDStruct_3a510305 _tuningParameters[4][2];
    ELMScrollViewDataController *_dataController;
    id <ELMContext> _context;
}

@property(readonly, nonatomic) id <ELMContext> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
- (id)elementsViewForHeaderInSection:(long long)arg1;
- (id)elementsViewForFooterInSection:(long long)arg1;
- (id)elementsCellForItemAtIndexPath:(id)arg1;
- (struct CGSize)elementsSizeForFooterInSection:(long long)arg1;
- (struct CGSize)elementsSizeForHeaderInSection:(long long)arg1;
- (struct CGSize)elementsSizeForItemAtIndexPath:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)insertSections:(id)arg1;
@property(nonatomic) __weak id <UICollectionViewDataSource><ELMScrollViewDataSource> dataSource; // @dynamic dataSource;
- (void)reloadData;
- (void)setSelected:(_Bool)arg1 at:(id)arg2;
- (void)elementsInvalidateLayout;
- (_Bool)scrollsHorizontally;
- (void)getPathsInRect:(struct CGRect)arg1 paths:(vector_b8106f4e *)arg2;
- (id)dequeueCellFor:(const struct CollectionPath *)arg1 contentView:(id *)arg2;
- (long long)elementsNumberOfItemsInSection:(long long)arg1 duringSizingPass:(_Bool)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

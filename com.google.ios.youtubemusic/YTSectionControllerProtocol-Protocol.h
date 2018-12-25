//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTAsyncSectionDataSource-Protocol.h"

@class NSArray, NSIndexPath, NSString, Protocol, UICollectionReusableView, UICollectionViewCell, UIView, YTCellController;
@protocol IGListDiffable, UIDragSession, YTSectionControllerDelegate, YTSectionControllerProtocol;

@protocol YTSectionControllerProtocol <YTAsyncSectionDataSource>
@property(nonatomic) __weak id <YTSectionControllerDelegate> sectionControllerDelegate;
- (id)implementationForBehavior:(Protocol *)arg1;
- (_Bool)canLoadMore;
- (id)model;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2;
- (NSArray *)cellClassesToRegister;
- (Class)cellClassForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@optional
- (NSArray *)itemsForBeginningDragSession:(id <UIDragSession>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)supplementaryViewDidBecomeHiddenAtIndexPath:(NSIndexPath *)arg1 forElementKind:(NSString *)arg2;
- (void)supplementaryViewWillBecomeVisibleAtIndexPath:(NSIndexPath *)arg1 forElementKind:(NSString *)arg2;
- (void)cellDidBecomeHiddenAtIndexPath:(NSIndexPath *)arg1;
- (void)cellWillBecomeVisibleAtIndexPath:(NSIndexPath *)arg1;
- (void)collectionViewWillAppearAnimated:(_Bool)arg1;
- (void)prepareCellForIndex:(long long)arg1;
- (unsigned long long)indexOfCellWithVideoId:(NSString *)arg1;
- (void)collectionViewControllerWillAskForRefresh;
- (void)loadMoreWithContinuationType:(unsigned long long)arg1 completionBlock:(void (^)(void))arg2;
- (void)didReloadData;
- (void)reloadData;
- (_Bool)persistCellSelection;
- (void)didDeselectItemAtIndex:(long long)arg1 fromView:(UIView *)arg2;
- (void)didSelectItemAtIndex:(long long)arg1 fromView:(UIView *)arg2;
- (_Bool)shouldSelectItemAtIndex:(unsigned long long)arg1;
- (_Bool)shouldHighlightItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForCellController:(YTCellController *)arg1 withSize:(struct CGSize)arg2;
- (id <IGListDiffable>)itemAtIndex:(long long)arg1;
- (YTCellController *)createCellControllerForEntry:(id)arg1;
- (Class)cellClassForEntry:(id)arg1;
- (YTCellController *)headerCellController;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)sizeForFooterWithSize:(struct CGSize)arg1;
- (void)updateFooter:(UICollectionReusableView *)arg1;
- (Class)classForFooter;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (void)updateHeader:(UICollectionReusableView *)arg1 indexPath:(NSIndexPath *)arg2;
- (void)updateHeader:(UICollectionReusableView *)arg1;
- (Class)classForHeader;
- (_Bool)hasBottomSeparator;
- (struct UIEdgeInsets)insetWithInset:(struct UIEdgeInsets)arg1;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)updateCell:(UICollectionViewCell *)arg1 forIndex:(long long)arg2;
- (NSArray *)cellControllers;
- (void)restoreWithSelf:(id <YTSectionControllerProtocol>)arg1;
- (_Bool)shouldReloadOnBoundsChange;
- (void)commitStagedChanges;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1 withSize:(struct CGSize)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
@end


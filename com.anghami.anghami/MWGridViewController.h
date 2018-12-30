//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class MWPhotoBrowser;

@interface MWGridViewController : UICollectionViewController
{
    double _margin;
    double _gutter;
    double _marginL;
    double _gutterL;
    double _columns;
    double _columnsL;
    _Bool _selectionMode;
    MWPhotoBrowser *_browser;
    struct CGPoint _initialContentOffset;
}

@property(nonatomic) struct CGPoint initialContentOffset; // @synthesize initialContentOffset=_initialContentOffset;
@property(nonatomic) _Bool selectionMode; // @synthesize selectionMode=_selectionMode;
@property(nonatomic) MWPhotoBrowser *browser; // @synthesize browser=_browser;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)getGutter;
- (double)getMargin;
- (double)getColumns;
- (void)adjustInsetsForMiniPlayer;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)performLayout;
- (void)adjustOffsetsAsRequired;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOScrollViewKeyboardManagerDelegate-Protocol.h"
#import "MDCInkTouchControllerDelegate-Protocol.h"
#import "QTMCollectionViewInfoBarDelegate-Protocol.h"
#import "QTMCollectionViewModelDelegate-Protocol.h"
#import "QTMCollectionViewStyleDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class MDCInkTouchController, NSString, QTMCollectionView, QTMCollectionViewInfoBar, QTMCollectionViewModel, UICollectionViewLayout;

@interface QTMCollectionViewController : UIViewController <MDCInkTouchControllerDelegate, GOOScrollViewKeyboardManagerDelegate, QTMCollectionViewModelDelegate, QTMCollectionViewInfoBarDelegate, QTMCollectionViewStyleDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>
{
    QTMCollectionView *_collectionView;
    QTMCollectionViewInfoBar *_headerInfoBar;
    QTMCollectionViewInfoBar *_footerInfoBar;
    _Bool _headerInfoBarDismissed;
    MDCInkTouchController *_touchController;
    _Bool _respondsToKeyboardEvents;
    _Bool _clearsSelectionOnViewWillAppear;
    UICollectionViewLayout *_layout;
    QTMCollectionViewModel *_model;
}

@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(nonatomic) _Bool respondsToKeyboardEvents; // @synthesize respondsToKeyboardEvents=_respondsToKeyboardEvents;
@property(retain, nonatomic) QTMCollectionViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UICollectionViewLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)inkTouchController:(id)arg1 didProcessInkView:(id)arg2 atTouchLocation:(struct CGPoint)arg3;
- (id)inkTouchController:(id)arg1 inkViewAtTouchLocation:(struct CGPoint)arg2;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (id)updateInkTouchControllerInkView:(id)arg1 touchLocation:(struct CGPoint)arg2;
- (void)updateContentWithBottomInset:(double)arg1;
- (void)updateFooterInfoBarIfNecessary;
- (void)updateHeaderInfoBarIfNecessary;
- (void)deleteSelectedItems;
- (_Bool)canSelectItemDuringEditingAtIndexPath:(id)arg1;
- (_Bool)canEditItemAtIndexPath:(id)arg1;
- (struct CGSize)inlaidSizeForObject:(id)arg1 withSize:(struct CGSize)arg2 atIndexPath:(id)arg3;
- (struct CGSize)sizeForObject:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndSwipeToDismissItemAtIndexPath:(id)arg2;
- (void)collectionViewWillEndEditing:(id)arg1;
- (void)collectionViewWillBeginEditing:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (unsigned long long)collectionView:(id)arg1 cellStyleForSection:(long long)arg2;
- (void)infoBar:(id)arg1 willDismissAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)infoBar:(id)arg1 willShowAnimated:(_Bool)arg2 willAutoDismiss:(_Bool)arg3;
- (void)didPerformTapWithInfoBar:(id)arg1;
- (void)updateControllerWithInfoBar:(id)arg1;
- (id)navigationPrimaryScrollView;
- (void)receivedCollectionView;
- (void)collectionViewDidLoad;
- (void)loadCollectionView;
@property(readonly, nonatomic) _Bool isCollectionViewLoaded;
@property(retain, nonatomic) QTMCollectionView *collectionView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


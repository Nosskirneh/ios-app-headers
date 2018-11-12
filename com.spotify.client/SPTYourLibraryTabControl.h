//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTYourLibraryTabControlDelegateFlowLayout-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTYourLibraryTabControlCollectionViewCell, SPTYourLibraryTabControlStyle, UICollectionView;
@protocol SPTYourLibraryTabControlDelegate;

@interface SPTYourLibraryTabControl : UIView <SPTYourLibraryTabControlDelegateFlowLayout, UICollectionViewDataSource>
{
    unsigned long long _selectedSegmentIndex;
    id <SPTYourLibraryTabControlDelegate> _delegate;
    UICollectionView *_collectionView;
    SPTYourLibraryTabControlStyle *_style;
    NSArray *_items;
    UIView *_selectionIndicator;
    NSLayoutConstraint *_selectionIndicatorWidthConstraint;
    NSLayoutConstraint *_selectionIndicatorLeftConstraint;
    SPTYourLibraryTabControlCollectionViewCell *_calculationCell;
    double _estimatedCollectionViewWidth;
    double _estimatedMaxCollectionViewCellWidth;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(nonatomic) double estimatedMaxCollectionViewCellWidth; // @synthesize estimatedMaxCollectionViewCellWidth=_estimatedMaxCollectionViewCellWidth;
@property(nonatomic) double estimatedCollectionViewWidth; // @synthesize estimatedCollectionViewWidth=_estimatedCollectionViewWidth;
@property(retain, nonatomic) SPTYourLibraryTabControlCollectionViewCell *calculationCell; // @synthesize calculationCell=_calculationCell;
@property(retain, nonatomic) NSLayoutConstraint *selectionIndicatorLeftConstraint; // @synthesize selectionIndicatorLeftConstraint=_selectionIndicatorLeftConstraint;
@property(retain, nonatomic) NSLayoutConstraint *selectionIndicatorWidthConstraint; // @synthesize selectionIndicatorWidthConstraint=_selectionIndicatorWidthConstraint;
@property(retain, nonatomic) UIView *selectionIndicator; // @synthesize selectionIndicator=_selectionIndicator;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SPTYourLibraryTabControlStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <SPTYourLibraryTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 layoutDidUpdateLayoutParameters:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)useRTLCompabilityMode;
- (void)updateSelectedIndicatorWithFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setSelectedSegmentFrom:(double)arg1 to:(double)arg2;
- (struct CGRect)rectForSegmentIndicatorAtIndex:(unsigned long long)arg1;
- (void)invalidateAndReload;
- (void)insertSegments:(id)arg1;
- (void)removeAllSegments;
@property(readonly, nonatomic) unsigned long long numberOfSegments;
- (void)setupCellCalculator;
- (void)setupConstraints;
- (void)setupSelectionIndicator;
- (void)setupCollectionView;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


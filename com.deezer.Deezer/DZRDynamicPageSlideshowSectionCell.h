//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "DZRDynamicPageCell-Protocol.h"
#import "DZRUpdatableCell-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class DZRDynamicPageSectionLayoutSlideshow, DZRDynamicPageSlideshowCollectionView, NSString, NSTimer, UICollectionViewLayout, UIPageControl;
@protocol DZRDynamicPageSectionLayout, DZRDynamicPageSlideshowSectionWrapper;

@interface DZRDynamicPageSlideshowSectionCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, DZRUpdatableCell, DZRDynamicPageCell>
{
    DZRDynamicPageSlideshowCollectionView *_slideshowCollectionView;
    UICollectionViewLayout<DZRDynamicPageSectionLayout> *_innerSlideshowLayout;
    UIPageControl *_slideshowPageControl;
    id <DZRDynamicPageSlideshowSectionWrapper> _wrapper;
    DZRDynamicPageSectionLayoutSlideshow *_slideshowLayout;
    unsigned long long _instanceCount;
    NSTimer *_scrollTimer;
}

+ (struct CGSize)sizeWithItem:(id)arg1 inSection:(id)arg2 usingBounds:(struct CGRect)arg3;
+ (id)cellIdentifier;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(nonatomic) unsigned long long instanceCount; // @synthesize instanceCount=_instanceCount;
@property(retain, nonatomic) DZRDynamicPageSectionLayoutSlideshow *slideshowLayout; // @synthesize slideshowLayout=_slideshowLayout;
@property(retain, nonatomic) id <DZRDynamicPageSlideshowSectionWrapper> wrapper; // @synthesize wrapper=_wrapper;
@property(retain, nonatomic) UIPageControl *slideshowPageControl; // @synthesize slideshowPageControl=_slideshowPageControl;
@property(copy, nonatomic) UICollectionViewLayout<DZRDynamicPageSectionLayout> *innerSlideshowLayout; // @synthesize innerSlideshowLayout=_innerSlideshowLayout;
@property(retain, nonatomic) DZRDynamicPageSlideshowCollectionView *slideshowCollectionView; // @synthesize slideshowCollectionView=_slideshowCollectionView;
- (void).cxx_destruct;
- (long long)slideshowInnerLayoutNumberOfColumns;
- (void)stopScrollTimer;
- (void)_startScrollTimer;
- (void)startScrollTimer;
- (void)updateState;
- (void)layoutSubviews;
- (void)pageControlDidChangePage:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollToNextPage;
- (void)scrollToLastPageAnimated:(_Bool)arg1;
- (void)scrollToFirstPageAnimated:(_Bool)arg1;
- (void)scrollToPage:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)scrollViewCanScroll;
- (void)onScrollViewDidEndScrolling;
- (void)populateWithItem:(id)arg1 inSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)saveCurrentPage:(long long)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


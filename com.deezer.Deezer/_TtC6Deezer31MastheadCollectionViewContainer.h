//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionView, UICollectionViewFlowLayout, UIView;

@interface _TtC6Deezer31MastheadCollectionViewContainer : NSObject
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: collectionViewLayout
    // Error parsing type: , name: currentIndex
    // Error parsing type: , name: pageChangedCallback
    // Error parsing type: , name: details
    // Error parsing type: , name: cellBinder
}

- (CDUnknownBlockType).cxx_destruct;
- (void)onScrollingEnded;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollToIndex:(long long)arg1;
- (void)populateWith:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType pageChangedCallback; // @synthesize pageChangedCallback;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex;
@property(nonatomic, retain) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout;
@property(nonatomic, retain) UICollectionView *collectionView; // @synthesize collectionView;
- (void)layoutWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeFor:(struct CGSize)arg1;
@property(nonatomic, readonly) UIView *view;

@end

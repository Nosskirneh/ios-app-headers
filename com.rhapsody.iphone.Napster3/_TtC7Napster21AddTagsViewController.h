//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7Napster14ViewController.h"

@class NSDictionary, NSLayoutConstraint, NSString, UICollectionView, UILabel, UIView;

@interface _TtC7Napster21AddTagsViewController : _TtC7Napster14ViewController
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: playlistBuilderImageService
    // Error parsing type: , name: contentView
    // Error parsing type: , name: selectedTagsCollectionView
    // Error parsing type: , name: selectedTagsCollectionViewHeight
    // Error parsing type: , name: availableTagsCollectionView
    // Error parsing type: , name: tagsInfoLabel
    // Error parsing type: , name: selectedTagsSeparator
    // Error parsing type: , name: doneButton
    // Error parsing type: , name: templateCell
    // Error parsing type: , name: minSelectedCollectionViewHeight
    // Error parsing type: , name: selectedTagsCollectionViewHeaderHeight
    // Error parsing type: , name: availableTagsDataSource
    // Error parsing type: , name: selectedTagsDataSource
    // Error parsing type: , name: disposeBag
    // Error parsing type: , name: addTagsComponent
    // Error parsing type: , name: searchViewController
    // Error parsing type: , name: iPadNavigationView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 metricsSource:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
@property(nonatomic, readonly) NSDictionary *metricsProperties;
@property(nonatomic, readonly) NSString *metricsScreenEvent;
- (void)viewDidLoad;
@property(nonatomic, readonly) _Bool showTitleWhenTransparent;
@property(nonatomic, readonly) double navigationAlpha;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak UIView *selectedTagsSeparator; // @synthesize selectedTagsSeparator;
@property(nonatomic) __weak UILabel *tagsInfoLabel; // @synthesize tagsInfoLabel;
@property(nonatomic) __weak UICollectionView *availableTagsCollectionView; // @synthesize availableTagsCollectionView;
@property(nonatomic) __weak NSLayoutConstraint *selectedTagsCollectionViewHeight; // @synthesize selectedTagsCollectionViewHeight;
@property(nonatomic) __weak UICollectionView *selectedTagsCollectionView; // @synthesize selectedTagsCollectionView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView;

@end


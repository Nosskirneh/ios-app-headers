//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSLayoutConstraint, SPTFeedCollectionView, SPTFeedItemCreatorView, SPTFeedItemEntityView, SPTFeedSeeMoreView, SPTLayoutConstraintBuilder, UIView;

@interface SPTFeedMultiTrackTableViewCell : UITableViewCell
{
    SPTFeedCollectionView *_collectionView;
    SPTFeedItemCreatorView *_creatorView;
    SPTFeedItemEntityView *_entityView;
    SPTFeedSeeMoreView *_seeMoreView;
    UIView *_colorDecorationView;
    double _collectionViewHeight;
    double _seeMoreViewHeight;
    SPTLayoutConstraintBuilder *_layout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    NSLayoutConstraint *_seeMoreViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *seeMoreViewHeightConstraint; // @synthesize seeMoreViewHeightConstraint=_seeMoreViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(nonatomic) double seeMoreViewHeight; // @synthesize seeMoreViewHeight=_seeMoreViewHeight;
@property(nonatomic) double collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
@property(retain, nonatomic) UIView *colorDecorationView; // @synthesize colorDecorationView=_colorDecorationView;
@property(retain, nonatomic) SPTFeedSeeMoreView *seeMoreView; // @synthesize seeMoreView=_seeMoreView;
@property(retain, nonatomic) SPTFeedItemEntityView *entityView; // @synthesize entityView=_entityView;
@property(retain, nonatomic) SPTFeedItemCreatorView *creatorView; // @synthesize creatorView=_creatorView;
@property(retain, nonatomic) SPTFeedCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupViews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

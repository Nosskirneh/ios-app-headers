//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class SPTFeedItemCreatorView, SPTFeedItemEntityView, SPTLayoutConstraintBuilder, UIView;

@interface SPTFeedSingleTrackTableViewCell : UITableViewCell
{
    SPTFeedItemCreatorView *_creatorView;
    SPTFeedItemEntityView *_entityView;
    UIView *_colorDecorationView;
    SPTLayoutConstraintBuilder *_layout;
}

@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *colorDecorationView; // @synthesize colorDecorationView=_colorDecorationView;
@property(retain, nonatomic) SPTFeedItemEntityView *entityView; // @synthesize entityView=_entityView;
@property(retain, nonatomic) SPTFeedItemCreatorView *creatorView; // @synthesize creatorView=_creatorView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)setupViews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


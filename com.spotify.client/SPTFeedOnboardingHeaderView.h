//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class SPTLayoutConstraintBuilder, UILabel, UIView;

@interface SPTFeedOnboardingHeaderView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTLayoutConstraintBuilder *_layout;
    UIView *_container;
}

@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)addViewConstraints;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

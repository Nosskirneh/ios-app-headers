//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ANGAsyncImageView, CAGradientLayer, LOTAnimationView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CustomUITableViewWideCell : UITableViewCell
{
    LOTAnimationView *_equalizerView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_engagementLabel;
    CAGradientLayer *_imageGradient;
    UIImageView *_iconImageView;
    UIView *_contentView;
    NSLayoutConstraint *_imageViewCenter;
    NSLayoutConstraint *_titleHeight;
    NSLayoutConstraint *_descriptionHeight;
    NSLayoutConstraint *_iconWidth;
    NSLayoutConstraint *_iconY;
    NSLayoutConstraint *_iconX;
    _Bool _isCurrentlyPlayingQueue;
    ANGAsyncImageView *_coverArtImageView;
}

+ (double)heightForRow;
@property(readonly, nonatomic) _Bool isCurrentlyPlayingQueue; // @synthesize isCurrentlyPlayingQueue=_isCurrentlyPlayingQueue;
@property(retain, nonatomic) ANGAsyncImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)addIconImageViewConstraints;
- (void)addIconImageView;
- (void)addTitleLabelConstraints;
- (void)addTitleLabel;
- (void)addDescriptionLabelConstraints;
- (void)addDescriptionLabel;
- (void)setIcon:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setEngagementTextWithParts:(id)arg1;
- (void)addEngagementLabelConstraints;
- (void)addEngagementLabel;
- (void)addEqualizerIconConstraints;
- (void)addEqualizerView;
- (void)addImageViewConstraints;
- (void)addImageView;
- (void)refreshPlayingIcon;
@property double xOffset;
- (void)prepareForReuse;
- (void)setupGradient;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)dealloc;
- (void)addContentViewConstraints;
- (void)setupSubviewConstraints;
- (void)addSubviews;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UILabel *engagementLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


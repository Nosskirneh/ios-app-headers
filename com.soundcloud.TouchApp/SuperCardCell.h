//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCell.h"

@class BorderLabel, ImageSwappingView, NSLayoutConstraint, UIButton, UIImageView, UILabel, _TtC2UI14ParallaxEffect, _TtC2UI19LineBackgroundLabel;
@protocol CardCellDelegate;

@interface SuperCardCell : BaseCell
{
    _Bool _isPromoted;
    _Bool _isPrivate;
    _Bool _shouldRenderCompactPromoted;
    _Bool _shouldRenderAsCard;
    _Bool _shouldRenderAsSpotlight;
    UIImageView *_avatarMaskImageView;
    ImageSwappingView *_avatarImageView;
    NSLayoutConstraint *_avatarImageViewWidthConstraint;
    NSLayoutConstraint *_topLabelAvatarImageViewHorizontalSpacingConstraint;
    NSLayoutConstraint *_artworkImageTopSpaceConstraint;
    UILabel *_topLabel;
    UILabel *_timestampLabel;
    UIButton *_topMetaButton;
    NSLayoutConstraint *_headerViewHeight;
    UIButton *_artistButton;
    _TtC2UI19LineBackgroundLabel *_titleLabel;
    ImageSwappingView *_artworkImageView;
    BorderLabel *_statusLabel;
    UIImageView *_bottomMetaImageView;
    UILabel *_bottomMetaLabel;
    UIButton *_moreButton;
    UIButton *_likeButton;
    UIButton *_repostButton;
    UILabel *_privateLabel;
    UIImageView *_goMarkerImageView;
    id <CardCellDelegate> _delegate;
    double _parallaxFactor;
    _TtC2UI14ParallaxEffect *_parallaxEffect;
}

+ (double)artworkAspectRatio;
+ (struct CGSize)artworkSizeWithTotalWidth:(double)arg1;
+ (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) _TtC2UI14ParallaxEffect *parallaxEffect; // @synthesize parallaxEffect=_parallaxEffect;
@property(nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;
@property(nonatomic) _Bool shouldRenderAsSpotlight; // @synthesize shouldRenderAsSpotlight=_shouldRenderAsSpotlight;
@property(nonatomic) _Bool shouldRenderAsCard; // @synthesize shouldRenderAsCard=_shouldRenderAsCard;
@property(nonatomic) _Bool shouldRenderCompactPromoted; // @synthesize shouldRenderCompactPromoted=_shouldRenderCompactPromoted;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) _Bool isPromoted; // @synthesize isPromoted=_isPromoted;
@property(nonatomic) __weak id <CardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIImageView *goMarkerImageView; // @synthesize goMarkerImageView=_goMarkerImageView;
@property(nonatomic) __weak UILabel *privateLabel; // @synthesize privateLabel=_privateLabel;
@property(nonatomic) __weak UIButton *repostButton; // @synthesize repostButton=_repostButton;
@property(nonatomic) __weak UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UILabel *bottomMetaLabel; // @synthesize bottomMetaLabel=_bottomMetaLabel;
@property(nonatomic) __weak UIImageView *bottomMetaImageView; // @synthesize bottomMetaImageView=_bottomMetaImageView;
@property(nonatomic) __weak BorderLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak ImageSwappingView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(nonatomic) __weak _TtC2UI19LineBackgroundLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *artistButton; // @synthesize artistButton=_artistButton;
@property(nonatomic) __weak NSLayoutConstraint *headerViewHeight; // @synthesize headerViewHeight=_headerViewHeight;
@property(nonatomic) __weak UIButton *topMetaButton; // @synthesize topMetaButton=_topMetaButton;
@property(nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(nonatomic) __weak UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(nonatomic) __weak NSLayoutConstraint *artworkImageTopSpaceConstraint; // @synthesize artworkImageTopSpaceConstraint=_artworkImageTopSpaceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *topLabelAvatarImageViewHorizontalSpacingConstraint; // @synthesize topLabelAvatarImageViewHorizontalSpacingConstraint=_topLabelAvatarImageViewHorizontalSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarImageViewWidthConstraint; // @synthesize avatarImageViewWidthConstraint=_avatarImageViewWidthConstraint;
@property(nonatomic) __weak ImageSwappingView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UIImageView *avatarMaskImageView; // @synthesize avatarMaskImageView=_avatarMaskImageView;
- (void).cxx_destruct;
- (struct CGPoint)accessibilityActivationPoint;
- (void)adjustConstraintsForSpotlightCell;
- (void)adjustConstraintsForCompactPromotedCell;
- (void)adjustConstraintsForStreamCell;
- (void)adjustConstraints;
- (_Bool)shouldShowTimestampLabel;
- (void)layoutTimestampLabel;
- (void)setupDividers;
- (void)didTapMeta:(id)arg1;
- (void)didTapArtist:(id)arg1;
- (void)didTapRepost:(id)arg1;
- (void)didTapLike:(id)arg1;
- (void)didTapMore:(id)arg1;
- (void)showAvatarImageView:(_Bool)arg1;
- (void)applyParallaxEffectWithFactor:(double)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;

@end


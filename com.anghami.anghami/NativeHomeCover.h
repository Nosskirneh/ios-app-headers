//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ANGAsyncImageView, ANGSwitchButton, NSLayoutConstraint, UIImageView, UILabel;

@interface NativeHomeCover : UICollectionViewCell
{
    _Bool _isCurrentlyPlaying;
    _Bool _showFollowButton;
    _Bool _isExclusive;
    _Bool _isSponsored;
    _Bool _isExplicit;
    _Bool _isCenterLabels;
    _Bool _isInGenericSetcion;
    _Bool _isSwapNames;
    _Bool _didRegisterForNotifications;
    ANGAsyncImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_explicitIndicatorImageView;
    ANGSwitchButton *_followButton;
    UILabel *_supertitleLabel;
    NSLayoutConstraint *_imageViewTop;
    NSLayoutConstraint *_titleLeft;
    NSLayoutConstraint *_titleHorizontalCenter;
    UIImageView *_playingImageView;
    NSLayoutConstraint *_followButtonHeightConstraint;
}

+ (struct CGSize)sizeWithWidth:(double)arg1 hasSupertitle:(_Bool)arg2 andHasTitle:(_Bool)arg3 andHasSubtitle:(_Bool)arg4;
+ (struct CGSize)sizeWithWidth:(double)arg1 hasSupertitle:(_Bool)arg2;
+ (struct CGSize)sizeWithWidth:(double)arg1 hasFollow:(_Bool)arg2;
+ (struct CGSize)sizeWithWidth:(double)arg1;
+ (id)superTitleFont;
+ (long long)labelsTextAlignment;
+ (double)textSpaceHeight;
+ (id)placeholderImage;
+ (id)subtitleFont;
+ (id)titleFont;
+ (long long)numberOfLinesSubtitle;
+ (long long)numberOfLinesTitle;
@property(retain, nonatomic) NSLayoutConstraint *followButtonHeightConstraint; // @synthesize followButtonHeightConstraint=_followButtonHeightConstraint;
@property(retain, nonatomic) UIImageView *playingImageView; // @synthesize playingImageView=_playingImageView;
@property(nonatomic) _Bool didRegisterForNotifications; // @synthesize didRegisterForNotifications=_didRegisterForNotifications;
@property(nonatomic) _Bool isSwapNames; // @synthesize isSwapNames=_isSwapNames;
@property(nonatomic) _Bool isInGenericSetcion; // @synthesize isInGenericSetcion=_isInGenericSetcion;
@property(nonatomic) _Bool isCenterLabels; // @synthesize isCenterLabels=_isCenterLabels;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(retain, nonatomic) NSLayoutConstraint *titleHorizontalCenter; // @synthesize titleHorizontalCenter=_titleHorizontalCenter;
@property(retain, nonatomic) NSLayoutConstraint *titleLeft; // @synthesize titleLeft=_titleLeft;
@property(retain, nonatomic) NSLayoutConstraint *imageViewTop; // @synthesize imageViewTop=_imageViewTop;
@property(retain, nonatomic) UILabel *supertitleLabel; // @synthesize supertitleLabel=_supertitleLabel;
@property(nonatomic) _Bool showFollowButton; // @synthesize showFollowButton=_showFollowButton;
@property(retain, nonatomic) ANGSwitchButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIImageView *explicitIndicatorImageView; // @synthesize explicitIndicatorImageView=_explicitIndicatorImageView;
@property(readonly, nonatomic) _Bool isCurrentlyPlaying; // @synthesize isCurrentlyPlaying=_isCurrentlyPlaying;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ANGAsyncImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (double)imageViewSpacing;
- (void)followUnfollowAction:(id)arg1;
- (void)addFollowButton;
- (void)removeExclusiveViewIsSponsored:(_Bool)arg1;
- (void)buildExclusiveViewIsSponsored:(_Bool)arg1;
- (_Bool)isAccessibilityElement;
- (void)refreshPlayingIcon;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutExplicitIndicator;
- (void)layoutPlayingImageView;
- (void)layoutImageView;
- (void)layoutTitleLabel;
- (void)layoutSubtitleLabel;
- (void)layoutFollowButton;
- (void)layoutSupertitle;
- (void)layoutSubviews;
- (void)setupSubviewConstraints;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


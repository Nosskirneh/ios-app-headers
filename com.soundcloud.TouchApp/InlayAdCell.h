//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCell.h"

@class ImageSwappingView, UIButton, UILabel, _TtC2UI10RatingView;

@interface InlayAdCell : BaseCell
{
    UILabel *_titleLabel;
    UIButton *_ctaButton;
    _TtC2UI10RatingView *_ratingView;
    UILabel *_ratingsLabel;
    UILabel *_ratingTextLabel;
    ImageSwappingView *_appImageView;
    CDUnknownBlockType _ctaAction;
    UILabel *_whyAdsLabel;
}

@property(nonatomic) __weak UILabel *whyAdsLabel; // @synthesize whyAdsLabel=_whyAdsLabel;
@property(copy, nonatomic) CDUnknownBlockType ctaAction; // @synthesize ctaAction=_ctaAction;
@property(nonatomic) __weak ImageSwappingView *appImageView; // @synthesize appImageView=_appImageView;
@property(nonatomic) __weak UILabel *ratingTextLabel; // @synthesize ratingTextLabel=_ratingTextLabel;
@property(nonatomic) __weak UILabel *ratingsLabel; // @synthesize ratingsLabel=_ratingsLabel;
@property(nonatomic) __weak _TtC2UI10RatingView *ratingView; // @synthesize ratingView=_ratingView;
@property(nonatomic) __weak UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)didTapCta;
- (void)awakeFromNib;
- (void)prepareForReuse;

@end


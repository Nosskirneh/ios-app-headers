//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DZRPlayerButton, DeezerTrack, NSLayoutConstraint, UILabel, UIVisualEffectView, _TtC6Deezer16IllustrationView;

@interface DZRPlayerCoverView : UIView
{
    _Bool _contentMasked;
    _Bool _dimmed;
    _TtC6Deezer16IllustrationView *_illustrationView;
    DZRPlayerButton *_lyricsAvailabilityButton;
    UIView *_recommendedView;
    DeezerTrack *_track;
    UILabel *_highQualityLabel;
    UILabel *_hifiLabel;
    UILabel *_sponsorCTALabel;
    UIView *_contentView;
    UIVisualEffectView *_blurMaskView;
    UIView *_dimmingView;
    UILabel *_recommendedLabel;
    NSLayoutConstraint *_lyricsButtonSizeConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *lyricsButtonSizeConstraint; // @synthesize lyricsButtonSizeConstraint=_lyricsButtonSizeConstraint;
@property(nonatomic) __weak UILabel *recommendedLabel; // @synthesize recommendedLabel=_recommendedLabel;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIVisualEffectView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UILabel *sponsorCTALabel; // @synthesize sponsorCTALabel=_sponsorCTALabel;
@property(nonatomic) __weak UILabel *hifiLabel; // @synthesize hifiLabel=_hifiLabel;
@property(nonatomic) __weak UILabel *highQualityLabel; // @synthesize highQualityLabel=_highQualityLabel;
@property(nonatomic, getter=isDimmed) _Bool dimmed; // @synthesize dimmed=_dimmed;
@property(retain, nonatomic) DeezerTrack *track; // @synthesize track=_track;
@property(nonatomic, getter=isContentMasked) _Bool contentMasked; // @synthesize contentMasked=_contentMasked;
@property(nonatomic) __weak UIView *recommendedView; // @synthesize recommendedView=_recommendedView;
@property(nonatomic) __weak DZRPlayerButton *lyricsAvailabilityButton; // @synthesize lyricsAvailabilityButton=_lyricsAvailabilityButton;
@property(retain, nonatomic) _TtC6Deezer16IllustrationView *illustrationView; // @synthesize illustrationView=_illustrationView;
- (void).cxx_destruct;
- (id)coverImage;
- (void)setRecommendedLabelHidden:(_Bool)arg1;
- (void)setQualityLabelState:(unsigned long long)arg1;
- (void)setDimmed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setContentMasked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateLyricsButton;
- (void)configureWithTrack:(id)arg1;
- (void)layoutSubviews;
- (void)offlineModeChanged:(id)arg1;
- (void)didMoveToSuperview;
- (void)awakeFromNib;

@end


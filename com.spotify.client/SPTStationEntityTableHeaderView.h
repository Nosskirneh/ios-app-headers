//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTEntityTableHeaderView.h"

@class NSString, UIImageView, UILabel, UIView;

@interface SPTStationEntityTableHeaderView : SPTEntityTableHeaderView
{
    _Bool _useSubtitleLabel;
    _Bool _hideRadioBackground;
    _Bool _useRadioImageSizeOverrides;
    UILabel *_subTitleLabel;
    UIImageView *_radioBackgroundImageView;
    UIView *_whiteTransparentBackgroundView;
    UIView *_blackGradientBackgroundView;
}

@property(retain, nonatomic) UIView *blackGradientBackgroundView; // @synthesize blackGradientBackgroundView=_blackGradientBackgroundView;
@property(retain, nonatomic) UIView *whiteTransparentBackgroundView; // @synthesize whiteTransparentBackgroundView=_whiteTransparentBackgroundView;
@property(retain, nonatomic) UIImageView *radioBackgroundImageView; // @synthesize radioBackgroundImageView=_radioBackgroundImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic, getter=shouldUseRadioImageSizeOverrides) _Bool useRadioImageSizeOverrides; // @synthesize useRadioImageSizeOverrides=_useRadioImageSizeOverrides;
@property(nonatomic, getter=shouldhideRadioBackground) _Bool hideRadioBackground; // @synthesize hideRadioBackground=_hideRadioBackground;
@property(nonatomic, getter=shouldUseSubtitleLabel) _Bool useSubtitleLabel; // @synthesize useSubtitleLabel=_useSubtitleLabel;
- (void).cxx_destruct;
- (double)stickyModeThreshold;
- (void)applyThemeToSubtitleLabel:(id)arg1;
- (void)applyThemeLayout;
- (struct CGRect)frameForTitleAccessoryView;
- (struct CGRect)frameForSubTitleLabel;
- (struct CGRect)metadataLabelFrame;
- (struct CGRect)frameForMainTitleLabel;
- (struct CGRect)frameForImageWrapperView;
- (double)heightForEntityHeaderViewSize:(long long)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *subTitle;
- (id)initWithFrame:(struct CGRect)arg1;

@end


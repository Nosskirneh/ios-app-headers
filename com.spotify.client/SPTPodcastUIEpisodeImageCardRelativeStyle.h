//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIEpisodeImageCardStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor, UIImage;
@protocol GLUETheme;

@interface SPTPodcastUIEpisodeImageCardRelativeStyle : NSObject <SPTPodcastUIEpisodeImageCardStyle>
{
    UIColor *_brightTextColor;
    UIColor *_darkTextColor;
    UIColor *_defaultBackgroundColor;
    double _highlightedAlpha;
    UIColor *_extractedFallbackColor;
    double _cardCornerRadius;
    double _thumbnailCornerRadius;
    double _thumbnailMargin;
    double _thumbnailShadowAlpha;
    double _thumbnailShadowRadius;
    double _labelStackViewMargin;
    double _labelStackViewSpacing;
    double _placeholderTextWidthMultiplier;
    double _colorAnimationDuration;
    double _progressViewHeight;
    double _progressViewCornerRadius;
    UIColor *_progressViewTintColor;
    UIColor *_progressViewTrackTintColor;
    id <GLUETheme> _theme;
    long long _cardType;
    struct CGSize _size;
}

+ (double)componentHeightForModel:(id)arg1 componentWidth:(double)arg2 titleLabelStyle:(id)arg3 metadataLabelStyle:(id)arg4 margin:(double)arg5 textSpacing:(double)arg6;
+ (double)componentWidthForContainerWidth:(double)arg1 scale:(double)arg2 maxWidth:(double)arg3;
+ (struct CGSize)componentSizeForModel:(id)arg1 cardType:(long long)arg2 containerWidth:(double)arg3 theme:(id)arg4;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIColor *progressViewTrackTintColor; // @synthesize progressViewTrackTintColor=_progressViewTrackTintColor;
@property(readonly, nonatomic) UIColor *progressViewTintColor; // @synthesize progressViewTintColor=_progressViewTintColor;
@property(readonly, nonatomic) double progressViewCornerRadius; // @synthesize progressViewCornerRadius=_progressViewCornerRadius;
@property(readonly, nonatomic) double progressViewHeight; // @synthesize progressViewHeight=_progressViewHeight;
@property(readonly, nonatomic) double colorAnimationDuration; // @synthesize colorAnimationDuration=_colorAnimationDuration;
@property(readonly, nonatomic) double placeholderTextWidthMultiplier; // @synthesize placeholderTextWidthMultiplier=_placeholderTextWidthMultiplier;
@property(readonly, nonatomic) double labelStackViewSpacing; // @synthesize labelStackViewSpacing=_labelStackViewSpacing;
@property(readonly, nonatomic) double labelStackViewMargin; // @synthesize labelStackViewMargin=_labelStackViewMargin;
@property(readonly, nonatomic) double thumbnailShadowRadius; // @synthesize thumbnailShadowRadius=_thumbnailShadowRadius;
@property(readonly, nonatomic) double thumbnailShadowAlpha; // @synthesize thumbnailShadowAlpha=_thumbnailShadowAlpha;
@property(readonly, nonatomic) double thumbnailMargin; // @synthesize thumbnailMargin=_thumbnailMargin;
@property(readonly, nonatomic) double thumbnailCornerRadius; // @synthesize thumbnailCornerRadius=_thumbnailCornerRadius;
@property(readonly, nonatomic) double cardCornerRadius; // @synthesize cardCornerRadius=_cardCornerRadius;
@property(readonly, nonatomic) UIColor *extractedFallbackColor; // @synthesize extractedFallbackColor=_extractedFallbackColor;
@property(readonly, nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
@property(readonly, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(readonly, nonatomic) UIColor *darkTextColor; // @synthesize darkTextColor=_darkTextColor;
@property(readonly, nonatomic) UIColor *brightTextColor; // @synthesize brightTextColor=_brightTextColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *thumbnailFallbackImage;
@property(readonly, nonatomic) struct CGPoint placeholderTextOffset;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) GLUELabelStyle *imagePlaceholderTextLabelStyle;
@property(readonly, nonatomic) GLUELabelStyle *metadataLabelStyle;
@property(readonly, nonatomic) GLUELabelStyle *titleLabelStyle;
- (id)initWithTheme:(id)arg1 viewSize:(struct CGSize)arg2 cardType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


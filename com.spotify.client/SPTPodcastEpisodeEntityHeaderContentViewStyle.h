//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUEHeaderBackgroundStyle, GLUELabelStyle, GLUETrackAccessoryLabelStyle, NSString, UIColor;

@interface SPTPodcastEpisodeEntityHeaderContentViewStyle : NSObject <GLUEStyle>
{
    double _contentMargin;
    double _contentBottomMargin;
    double _headerViewCollapsedTitleLabelHorizontalMargin;
    double _imageCornerRadius;
    UIColor *_imageShadowColor;
    double _imageShadowRadius;
    GLUELabelStyle *_titleStyle;
    double _titleMinimumScaleFactor;
    GLUELabelStyle *_collapsedTitleStyle;
    GLUELabelStyle *_podcastStyle;
    GLUETrackAccessoryLabelStyle *_accessoryLabelStyle;
    GLUELabelStyle *_metadataStyle;
    GLUEButtonStyle *_actionButtonStyle;
    UIColor *_backgroundColor;
    GLUEGradientStyle *_backgroundGradientStyle;
    double _backgroundGradientAnimationDuration;
    GLUEHeaderBackgroundStyle *_backgroundOverlayStyle;
    double _collapsedHeaderOverlayAlpha;
    double _collapsedTitleFadeHeight;
    double _height;
    struct CGSize _imageShadowOffset;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double collapsedTitleFadeHeight; // @synthesize collapsedTitleFadeHeight=_collapsedTitleFadeHeight;
@property(nonatomic) double collapsedHeaderOverlayAlpha; // @synthesize collapsedHeaderOverlayAlpha=_collapsedHeaderOverlayAlpha;
@property(retain, nonatomic) GLUEHeaderBackgroundStyle *backgroundOverlayStyle; // @synthesize backgroundOverlayStyle=_backgroundOverlayStyle;
@property(nonatomic) double backgroundGradientAnimationDuration; // @synthesize backgroundGradientAnimationDuration=_backgroundGradientAnimationDuration;
@property(retain, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *metadataStyle; // @synthesize metadataStyle=_metadataStyle;
@property(copy, nonatomic) GLUETrackAccessoryLabelStyle *accessoryLabelStyle; // @synthesize accessoryLabelStyle=_accessoryLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *podcastStyle; // @synthesize podcastStyle=_podcastStyle;
@property(copy, nonatomic) GLUELabelStyle *collapsedTitleStyle; // @synthesize collapsedTitleStyle=_collapsedTitleStyle;
@property(nonatomic) double titleMinimumScaleFactor; // @synthesize titleMinimumScaleFactor=_titleMinimumScaleFactor;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) double imageShadowRadius; // @synthesize imageShadowRadius=_imageShadowRadius;
@property(nonatomic) struct CGSize imageShadowOffset; // @synthesize imageShadowOffset=_imageShadowOffset;
@property(copy, nonatomic) UIColor *imageShadowColor; // @synthesize imageShadowColor=_imageShadowColor;
@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(nonatomic) double headerViewCollapsedTitleLabelHorizontalMargin; // @synthesize headerViewCollapsedTitleLabelHorizontalMargin=_headerViewCollapsedTitleLabelHorizontalMargin;
@property(nonatomic) double contentBottomMargin; // @synthesize contentBottomMargin=_contentBottomMargin;
@property(nonatomic) double contentMargin; // @synthesize contentMargin=_contentMargin;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


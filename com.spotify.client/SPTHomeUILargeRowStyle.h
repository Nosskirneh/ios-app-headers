//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulStyle.h"

@class GLUEImageStyle, GLUELabelStyle;

@interface SPTHomeUILargeRowStyle : GLUEStatefulStyle
{
    double _contentContainerTopMargin;
    double _contentContainerBottomMargin;
    double _imageToContentMargin;
    double _subtitleToTitleMargin;
    GLUEImageStyle *_imageStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    struct GLUESideMargins _contentContainerSideMargins;
}

+ (id)defaultStyleWithTheme:(id)arg1 forContainerViewSize:(struct CGSize)arg2;
+ (id)defaultStyleWithTheme:(id)arg1 forSmallContainer:(_Bool)arg2;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) double subtitleToTitleMargin; // @synthesize subtitleToTitleMargin=_subtitleToTitleMargin;
@property(nonatomic) double imageToContentMargin; // @synthesize imageToContentMargin=_imageToContentMargin;
@property(nonatomic) double contentContainerBottomMargin; // @synthesize contentContainerBottomMargin=_contentContainerBottomMargin;
@property(nonatomic) double contentContainerTopMargin; // @synthesize contentContainerTopMargin=_contentContainerTopMargin;
@property(nonatomic) struct GLUESideMargins contentContainerSideMargins; // @synthesize contentContainerSideMargins=_contentContainerSideMargins;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUELabelStyle, NSString, UIColor;

@interface GLUEEmptyStateViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_bodyLabelStyle;
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUEGradientStyle *_backgroundOverlayGradientStyle;
    UIColor *_backgroundFillColor;
    double _horizontalMargin;
    double _ctaButtonTopMargin;
}

@property(nonatomic) double ctaButtonTopMargin; // @synthesize ctaButtonTopMargin=_ctaButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(copy, nonatomic) UIColor *backgroundFillColor; // @synthesize backgroundFillColor=_backgroundFillColor;
@property(copy, nonatomic) GLUEGradientStyle *backgroundOverlayGradientStyle; // @synthesize backgroundOverlayGradientStyle=_backgroundOverlayGradientStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) GLUELabelStyle *bodyLabelStyle; // @synthesize bodyLabelStyle=_bodyLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToEmptyStateViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

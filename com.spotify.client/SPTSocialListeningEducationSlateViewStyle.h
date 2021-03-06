//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTSocialListeningEducationSlateViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    UIColor *_overlayBackgroundColor;
    double _cornerRadius;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_messageLabelStyle;
    GLUEButtonStyle *_okButtonStyle;
    GLUEImageStyle *_imageStyle;
    GLUEGradientStyle *_gradientStyle;
}

@property(copy, nonatomic) GLUEGradientStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) GLUEButtonStyle *okButtonStyle; // @synthesize okButtonStyle=_okButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) UIColor *overlayBackgroundColor; // @synthesize overlayBackgroundColor=_overlayBackgroundColor;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSocialListeningEducationSlateViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


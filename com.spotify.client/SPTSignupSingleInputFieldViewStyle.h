//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, NSString, SPTLoginInputFormViewStyle;

@interface SPTSignupSingleInputFieldViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUELabelStyle *_titleLabelStyle;
    SPTLoginInputFormViewStyle *_inputFormStyle;
    GLUEButtonStyle *_nextButtonStyle;
    double _titleTopMargin;
    double _inputFormTopMargin;
    double _horizontalMargin;
    double _nextButtonTopMargin;
}

@property(nonatomic) double nextButtonTopMargin; // @synthesize nextButtonTopMargin=_nextButtonTopMargin;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) double inputFormTopMargin; // @synthesize inputFormTopMargin=_inputFormTopMargin;
@property(nonatomic) double titleTopMargin; // @synthesize titleTopMargin=_titleTopMargin;
@property(copy, nonatomic) GLUEButtonStyle *nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) SPTLoginInputFormViewStyle *inputFormStyle; // @synthesize inputFormStyle=_inputFormStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


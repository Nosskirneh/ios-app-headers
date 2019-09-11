//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginAuthOptionViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_useFacebookLabelStyle;
    GLUEButtonStyle *_facebookButtonStyle;
    GLUELabelStyle *_separatorLabelStyle;
    GLUELabelStyle *_noAccountLabelStyle;
    double _verticalSpacing;
    UIColor *_separatorColor;
    double _separatorInnerMargin;
    double _separatorOuterMargin;
    double _facebookButtonTextMinScaleFactor;
    double _facebookButtonTopMargin;
}

@property(nonatomic) double facebookButtonTopMargin; // @synthesize facebookButtonTopMargin=_facebookButtonTopMargin;
@property(nonatomic) double facebookButtonTextMinScaleFactor; // @synthesize facebookButtonTextMinScaleFactor=_facebookButtonTextMinScaleFactor;
@property(nonatomic) double separatorOuterMargin; // @synthesize separatorOuterMargin=_separatorOuterMargin;
@property(nonatomic) double separatorInnerMargin; // @synthesize separatorInnerMargin=_separatorInnerMargin;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(copy, nonatomic) GLUELabelStyle *noAccountLabelStyle; // @synthesize noAccountLabelStyle=_noAccountLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *separatorLabelStyle; // @synthesize separatorLabelStyle=_separatorLabelStyle;
@property(copy, nonatomic) GLUEButtonStyle *facebookButtonStyle; // @synthesize facebookButtonStyle=_facebookButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *useFacebookLabelStyle; // @synthesize useFacebookLabelStyle=_useFacebookLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


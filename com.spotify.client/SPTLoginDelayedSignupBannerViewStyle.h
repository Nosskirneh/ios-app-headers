//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginDelayedSignupBannerViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleLabelStyle;
    GLUEButtonStyle *_loginButtonStyle;
    GLUEButtonStyle *_signupButtonStyle;
    double _titleLabelTopSpacing;
    double _loginButtonTopSpacing;
    double _signupButtonTopSpacing;
    double _signupButtonBottomSpacing;
}

@property(nonatomic) double signupButtonBottomSpacing; // @synthesize signupButtonBottomSpacing=_signupButtonBottomSpacing;
@property(nonatomic) double signupButtonTopSpacing; // @synthesize signupButtonTopSpacing=_signupButtonTopSpacing;
@property(nonatomic) double loginButtonTopSpacing; // @synthesize loginButtonTopSpacing=_loginButtonTopSpacing;
@property(nonatomic) double titleLabelTopSpacing; // @synthesize titleLabelTopSpacing=_titleLabelTopSpacing;
@property(copy, nonatomic) GLUEButtonStyle *signupButtonStyle; // @synthesize signupButtonStyle=_signupButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *loginButtonStyle; // @synthesize loginButtonStyle=_loginButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


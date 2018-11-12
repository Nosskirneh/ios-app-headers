//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, NSString;

@interface SPTLanguageOnboardingGridFooterViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_fadeGradientStyle;
    GLUEButtonStyle *_nextButtonStyle;
    double _nextButtonBottomMargin;
}

@property(nonatomic) double nextButtonBottomMargin; // @synthesize nextButtonBottomMargin=_nextButtonBottomMargin;
@property(copy, nonatomic) GLUEButtonStyle *nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) GLUEGradientStyle *fadeGradientStyle; // @synthesize fadeGradientStyle=_fadeGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


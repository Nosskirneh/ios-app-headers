//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTLoginOptionsSeparatorViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_separatorLabelStyle;
    UIColor *_separatorColor;
    double _separatorOuterMargin;
    double _separatorInnerMargin;
    double _separatorHeight;
}

@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(nonatomic) double separatorInnerMargin; // @synthesize separatorInnerMargin=_separatorInnerMargin;
@property(nonatomic) double separatorOuterMargin; // @synthesize separatorOuterMargin=_separatorOuterMargin;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(copy, nonatomic) GLUELabelStyle *separatorLabelStyle; // @synthesize separatorLabelStyle=_separatorLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTLyricsV2FullscreenHeaderViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleStyle;
    GLUELabelStyle *_subtitleStyle;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    double _labelTrailingMargin;
    double _trackInfoHorizontalMargin;
}

@property(nonatomic) double trackInfoHorizontalMargin; // @synthesize trackInfoHorizontalMargin=_trackInfoHorizontalMargin;
@property(nonatomic) double labelTrailingMargin; // @synthesize labelTrailingMargin=_labelTrailingMargin;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) GLUELabelStyle *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(retain, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


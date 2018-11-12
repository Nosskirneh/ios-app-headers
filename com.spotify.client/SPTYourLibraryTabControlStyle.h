//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTYourLibraryTabControlStyle : NSObject <GLUEStyle>
{
    double _height;
    GLUELabelStyle *_normalLabelStyle;
    GLUELabelStyle *_selectedLabelStyle;
    double _labelMargins;
    UIColor *_indicatorColor;
    double _indicatorHeight;
    double _indicatorMargin;
    double _bottomMargin;
}

@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double indicatorMargin; // @synthesize indicatorMargin=_indicatorMargin;
@property(nonatomic) double indicatorHeight; // @synthesize indicatorHeight=_indicatorHeight;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) double labelMargins; // @synthesize labelMargins=_labelMargins;
@property(retain, nonatomic) GLUELabelStyle *selectedLabelStyle; // @synthesize selectedLabelStyle=_selectedLabelStyle;
@property(retain, nonatomic) GLUELabelStyle *normalLabelStyle; // @synthesize normalLabelStyle=_normalLabelStyle;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


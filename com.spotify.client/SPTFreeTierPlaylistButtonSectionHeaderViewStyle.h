//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString;

@interface SPTFreeTierPlaylistButtonSectionHeaderViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_educationalLabelStyle;
    GLUEButtonStyle *_sectionHeaderButtonStyle;
    double _height;
    double _educationalLabelMargin;
    double _educationalLabelTopMargin;
    double _sectionHeaderButtonTopMargin;
}

@property(nonatomic) double sectionHeaderButtonTopMargin; // @synthesize sectionHeaderButtonTopMargin=_sectionHeaderButtonTopMargin;
@property(nonatomic) double educationalLabelTopMargin; // @synthesize educationalLabelTopMargin=_educationalLabelTopMargin;
@property(nonatomic) double educationalLabelMargin; // @synthesize educationalLabelMargin=_educationalLabelMargin;
@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) GLUEButtonStyle *sectionHeaderButtonStyle; // @synthesize sectionHeaderButtonStyle=_sectionHeaderButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *educationalLabelStyle; // @synthesize educationalLabelStyle=_educationalLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


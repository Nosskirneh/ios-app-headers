//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString;

@interface SPTUpsellNewReleaseStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_headerLabelStyle;
    GLUELabelStyle *_albumTitleLabelStyle;
    GLUELabelStyle *_artistNameLabelStyle;
    double _albumImageWidth;
    GLUEButtonStyle *_actionButtonStyle;
}

@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(nonatomic) double albumImageWidth; // @synthesize albumImageWidth=_albumImageWidth;
@property(copy, nonatomic) GLUELabelStyle *artistNameLabelStyle; // @synthesize artistNameLabelStyle=_artistNameLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *albumTitleLabelStyle; // @synthesize albumTitleLabelStyle=_albumTitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *headerLabelStyle; // @synthesize headerLabelStyle=_headerLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


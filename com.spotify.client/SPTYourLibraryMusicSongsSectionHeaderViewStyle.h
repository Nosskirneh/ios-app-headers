//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString;

@interface SPTYourLibraryMusicSongsSectionHeaderViewStyle : NSObject <GLUEStyle>
{
    double _estimatedHeight;
    double _topMargin;
    double _leadingMargin;
    GLUELabelStyle *_leadingLabelStyle;
    double _trailingMargin;
    GLUEButtonStyle *_trailingButtonStyle;
    double _bottomMargin;
}

@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(retain, nonatomic) GLUEButtonStyle *trailingButtonStyle; // @synthesize trailingButtonStyle=_trailingButtonStyle;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(retain, nonatomic) GLUELabelStyle *leadingLabelStyle; // @synthesize leadingLabelStyle=_leadingLabelStyle;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double estimatedHeight; // @synthesize estimatedHeight=_estimatedHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


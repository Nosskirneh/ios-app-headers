//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTFreeTierAllSongsHeaderContentViewStyle : NSObject <GLUEStyle>
{
    double _height;
    double _contentMargin;
    GLUELabelStyle *_titleStyle;
    double _titleMargin;
    double _collapsedTitleMargin;
    GLUELabelStyle *_collapsedTitleStyle;
    GLUELabelStyle *_subtitleStyle;
    GLUEButtonStyle *_actionButtonStyle;
    UIColor *_backgroundColor;
}

@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) GLUEButtonStyle *actionButtonStyle; // @synthesize actionButtonStyle=_actionButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(copy, nonatomic) GLUELabelStyle *collapsedTitleStyle; // @synthesize collapsedTitleStyle=_collapsedTitleStyle;
@property(nonatomic) double collapsedTitleMargin; // @synthesize collapsedTitleMargin=_collapsedTitleMargin;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=_titleMargin;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) double contentMargin; // @synthesize contentMargin=_contentMargin;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


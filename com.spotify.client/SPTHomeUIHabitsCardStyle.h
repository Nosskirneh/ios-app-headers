//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEStatefulStyle.h"

@class GLUEImageStyle, SPTHomeUILabelStyle;

@interface SPTHomeUIHabitsCardStyle : GLUEStatefulStyle
{
    SPTHomeUILabelStyle *_titleLabelStyle;
    GLUEImageStyle *_imageStyle;
    struct UIEdgeInsets _titleInsets;
    struct UIEdgeInsets _playbackIndicatorInsets;
}

+ (id)makeTitleLabelStyleWithTheme:(id)arg1;
+ (id)makeUIStatesToStylesWithTheme:(id)arg1;
+ (id)defaultStyleWithTheme:(id)arg1;
@property(nonatomic) struct UIEdgeInsets playbackIndicatorInsets; // @synthesize playbackIndicatorInsets=_playbackIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets titleInsets; // @synthesize titleInsets=_titleInsets;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) SPTHomeUILabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUIStatesToStyles:(id)arg1 titleLabelStyle:(id)arg2 imageStyle:(id)arg3 titleInsets:(struct UIEdgeInsets)arg4 playbackIndicatorInsets:(struct UIEdgeInsets)arg5;

@end


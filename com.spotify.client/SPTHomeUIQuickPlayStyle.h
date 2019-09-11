//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTHomeUIQuickPlayStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    UIColor *_playButtonColor;
    UIColor *_playButtonIconColor;
    struct CGSize _playButtonSize;
    struct CGSize _playButtonIconSize;
    struct UIEdgeInsets _contentInsets;
}

+ (id)defaultStyleWithTheme:(id)arg1;
@property(retain, nonatomic) UIColor *playButtonIconColor; // @synthesize playButtonIconColor=_playButtonIconColor;
@property(retain, nonatomic) UIColor *playButtonColor; // @synthesize playButtonColor=_playButtonColor;
@property(nonatomic) struct CGSize playButtonIconSize; // @synthesize playButtonIconSize=_playButtonIconSize;
@property(nonatomic) struct CGSize playButtonSize; // @synthesize playButtonSize=_playButtonSize;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


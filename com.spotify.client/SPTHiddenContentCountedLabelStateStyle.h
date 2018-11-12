//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTHiddenContentCountedLabelStateStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    GLUELabelStyle *_countLabelStyle;
    GLUELabelStyle *_titleLabelStyle;
}

@property(retain, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(retain, nonatomic) GLUELabelStyle *countLabelStyle; // @synthesize countLabelStyle=_countLabelStyle;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


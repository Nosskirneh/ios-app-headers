//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEDebuggableStyle-Protocol.h"

@class GLUELabelStyle, NSString;

@interface SPTHomeMixHeaderActionBarAuxViewStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    GLUELabelStyle *_labelStyleNormal;
    GLUELabelStyle *_labelStyleSelected;
    double _verticalButtonLabelSpacing;
}

@property(nonatomic) double verticalButtonLabelSpacing; // @synthesize verticalButtonLabelSpacing=_verticalButtonLabelSpacing;
@property(copy, nonatomic) GLUELabelStyle *labelStyleSelected; // @synthesize labelStyleSelected=_labelStyleSelected;
@property(copy, nonatomic) GLUELabelStyle *labelStyleNormal; // @synthesize labelStyleNormal=_labelStyleNormal;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


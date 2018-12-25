//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTGLSceneNode-Protocol.h"

@class NSMutableArray, NSString, YTGLBaseProgram, YTGLHoverChecker, YTGLMesh, YTGLModelMatrix;

@interface YTGLBaseNode : NSObject <YTGLSceneNode>
{
    YTGLBaseProgram *_program;
    YTGLMesh *_mesh;
    union _GLKMatrix4 _modelView;
    union _GLKMatrix4 _modelProjection;
    NSMutableArray *_focusAnimators;
    CDUnknownBlockType _onClickedBlock;
    float _headYaw;
    _Bool _hidden;
    YTGLModelMatrix *_model;
    long long _headTrackingMode;
    YTGLHoverChecker *_hoverChecker;
}

@property(retain, nonatomic) YTGLHoverChecker *hoverChecker; // @synthesize hoverChecker=_hoverChecker;
@property(nonatomic) long long headTrackingMode; // @synthesize headTrackingMode=_headTrackingMode;
@property(readonly, nonatomic) YTGLModelMatrix *model; // @synthesize model=_model;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
- (void).cxx_destruct;
- (void)setPositionTransform:(id)arg1;
- (void)afterDraw;
- (void)beforeDrawWithEyeViewState:(id)arg1;
- (void)shutDown;
- (_Bool)isInRangeWithFrameViewState:(id)arg1;
- (_Bool)isFocusedWithFrameViewState:(id)arg1;
- (void)setupFrameWithFrameViewState:(id)arg1;
- (void)drawWithEyeViewState:(id)arg1;
- (void)setOnClickedBlock:(CDUnknownBlockType)arg1;
- (void)addFocusAnimator:(id)arg1;
- (void)setMesh:(id)arg1;
- (id)initWithMesh:(id)arg1 baseProgram:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

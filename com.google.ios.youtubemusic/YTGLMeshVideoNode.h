//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLBaseNode.h"

@class YTGLMeshVideoProgram;

@interface YTGLMeshVideoNode : YTGLBaseNode
{
    YTGLMeshVideoProgram *_meshVideoProgram;
    long long _videoLayout;
}

- (void).cxx_destruct;
- (void)shutDown;
- (void)beforeDrawWithEyeViewState:(id)arg1;
- (void)setupFrameWithFrameViewState:(id)arg1;
- (void)setVideoLayout:(long long)arg1;
- (id)initWithMesh:(id)arg1 baseProgram:(id)arg2;
- (id)initWithMesh:(id)arg1 meshVideoProgram:(id)arg2 videoLayout:(long long)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLPixelBufferNode.h"

@class YTGLActivityIndicator;

@interface YTGLActivityIndicatorNode : YTGLPixelBufferNode
{
    YTGLActivityIndicator *_activityIndicator;
}

- (void).cxx_destruct;
- (void)shutDown;
- (void)setupFrameWithFrameViewState:(id)arg1;
- (void)setAnimating:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMesh:(id)arg1 textureProgram:(id)arg2 bufferHeight:(unsigned long long)arg3 bufferWidth:(unsigned long long)arg4;
- (id)initWithMesh:(id)arg1 textureProgram:(id)arg2 parentView:(id)arg3;

@end

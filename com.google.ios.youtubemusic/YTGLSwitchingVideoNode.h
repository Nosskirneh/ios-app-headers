//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLGroupNode.h"

@class HAMSphericalVideoMesh, YTGLAnimator, YTGLMeshVideoProgram, YTGLRectangularVideoDecorationNode, YTGLSceneNodeFactory, YTGLVideoProvider;
@protocol YTGLSceneNode;

@interface YTGLSwitchingVideoNode : YTGLGroupNode
{
    YTGLSceneNodeFactory *_sceneNodeFactory;
    YTGLVideoProvider *_videoProvider;
    id <YTGLSceneNode> _leftEyeVideoNode;
    id <YTGLSceneNode> _rightEyeVideoNode;
    YTGLMeshVideoProgram *_meshVideoProgram;
    YTGLRectangularVideoDecorationNode *_videoDecorationNode;
    long long _shaderType;
    _Bool _VRModeEnabled;
    _Bool _externalSetVRModeEnabled;
    float _meshVideoAspectRatio;
    HAMSphericalVideoMesh *_lastHAMMeshLeft;
    HAMSphericalVideoMesh *_lastHAMMeshRight;
    float _userPitch;
    float _userYaw;
    YTGLAnimator *_videoDarkeningAnimator;
}

@property(retain, nonatomic) YTGLAnimator *videoDarkeningAnimator; // @synthesize videoDarkeningAnimator=_videoDarkeningAnimator;
- (void).cxx_destruct;
- (void)updateVideoOrientation;
- (void)updateVideoDarkeningAnimator;
- (void)setupVideoNodes;
- (void)shutDownAndPrepareForReuse;
- (void)updateDynamicMeshes;
- (long long)sphericalMode;
- (void)shutDown;
- (void)drawWithEyeViewState:(id)arg1;
- (void)setupFrameWithFrameViewState:(id)arg1;
- (void)setUserPitch:(float)arg1 yaw:(float)arg2;
- (void)setVRModeEnabled:(_Bool)arg1;
- (id)initWithSceneNodeFactory:(id)arg1 videoProvider:(id)arg2;

@end

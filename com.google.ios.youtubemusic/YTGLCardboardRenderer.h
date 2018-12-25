//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GVRCardboardViewDelegate-Protocol.h"

@class GIMMe, NSString, YTGLOrientationTracker, YTGLSphericalControl;
@protocol HAMOrientationDelegate, YTGLCardboardRendererDelegate, YTGLSceneNode;

@interface YTGLCardboardRenderer : NSObject <GVRCardboardViewDelegate>
{
    id <YTGLSceneNode> _rootNode;
    id <HAMOrientationDelegate> _orientationDelegate;
    YTGLOrientationTracker *_orientationTracker;
    YTGLSphericalControl *_sphericalControl;
    union _GLKMatrix4 _magicWindowOrientation;
    _Bool _magicWindowPanningEnabled;
    _Bool _videoIsPartialSpherical;
    _Bool _cardboardTriggerClicked;
    GIMMe *_gimme;
    id <YTGLCardboardRendererDelegate> _delegate;
}

@property _Bool cardboardTriggerClicked; // @synthesize cardboardTriggerClicked=_cardboardTriggerClicked;
@property(nonatomic) _Bool videoIsPartialSpherical; // @synthesize videoIsPartialSpherical=_videoIsPartialSpherical;
@property(nonatomic) _Bool magicWindowPanningEnabled; // @synthesize magicWindowPanningEnabled=_magicWindowPanningEnabled;
@property(nonatomic) __weak id <YTGLCardboardRendererDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)cardboardView:(id)arg1 didFireEvent:(long long)arg2;
- (void)cardboardView:(id)arg1 drawEye:(long long)arg2 withHeadTransform:(id)arg3;
- (void)cardboardView:(id)arg1 prepareDrawFrame:(id)arg2;
- (void)cardboardView:(id)arg1 willStartDrawing:(id)arg2;
- (void)setOrientationDelegate:(id)arg1;
- (void)setSphericalControl:(id)arg1;
- (void)overrideCardboardOrientationTrackerWithTracker:(id)arg1;
- (void)setRootNode:(id)arg1;
- (void)onVideoStart;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


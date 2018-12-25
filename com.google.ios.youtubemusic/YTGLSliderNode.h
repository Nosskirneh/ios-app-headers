//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTGLGroupNode.h"

@class NSArray, NSMutableArray, YTGLBaseNode, YTGLHoverChecker, YTGLOpacityAnimator, YTGLScaleAnimator;

@interface YTGLSliderNode : YTGLGroupNode
{
    unsigned long long _segmentCount;
    NSArray *_colorNodes;
    NSMutableArray *_endpointLocations;
    float _barWidth;
    YTGLBaseNode *_tickNode;
    YTGLOpacityAnimator *_tickOpacityAnimator;
    YTGLScaleAnimator *_sliderScaleAnimator;
    YTGLGroupNode *_barGroup;
    YTGLGroupNode *_sliderGroup;
    _Bool _focusable;
    YTGLHoverChecker *_hoverChecker;
}

@property(nonatomic) _Bool focusable; // @synthesize focusable=_focusable;
@property(readonly, nonatomic) YTGLHoverChecker *hoverChecker; // @synthesize hoverChecker=_hoverChecker;
- (void).cxx_destruct;
- (void)placeSegment:(long long)arg1 segmentNode:(id)arg2;
- (void)addSegmentNodesWithSegmentColors:(id)arg1 sceneNodeFactory:(id)arg2;
- (_Bool)isInRangeWithFrameViewState:(id)arg1;
- (_Bool)isFocusedWithFrameViewState:(id)arg1;
- (void)setupFrameWithFrameViewState:(id)arg1;
- (void)setBarWidth:(float)arg1;
- (void)setSegment:(unsigned long long)arg1 color:(id)arg2;
- (void)setEndpoint:(unsigned long long)arg1 location:(float)arg2;
- (id)initWithSceneNodeFactory:(id)arg1 endpointLocations:(id)arg2 segmentColors:(id)arg3 barWidth:(float)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTGLFrameViewState : NSObject
{
    _Bool _triggerClicked;
    double _framePresentationTime;
    union _GLKMatrix4 _headView;
}

@property(readonly, nonatomic) _Bool triggerClicked; // @synthesize triggerClicked=_triggerClicked;
@property(readonly, nonatomic) double framePresentationTime; // @synthesize framePresentationTime=_framePresentationTime;
@property(readonly, nonatomic) union _GLKMatrix4 headView; // @synthesize headView=_headView;
- (id)initWithHeadView:(union _GLKMatrix4)arg1 framePresentationTime:(double)arg2 triggerClicked:(_Bool)arg3;

@end

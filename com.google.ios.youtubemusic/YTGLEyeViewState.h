//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTGLEyeViewState : NSObject
{
    long long _eyeType;
    union _GLKMatrix4 _eyeCameraView;
    union _GLKMatrix4 _eyePerspective;
}

@property(readonly, nonatomic) long long eyeType; // @synthesize eyeType=_eyeType;
@property(readonly, nonatomic) union _GLKMatrix4 eyePerspective; // @synthesize eyePerspective=_eyePerspective;
@property(readonly, nonatomic) union _GLKMatrix4 eyeCameraView; // @synthesize eyeCameraView=_eyeCameraView;
- (id)initWithEyeCameraView:(union _GLKMatrix4)arg1 eyePerspective:(union _GLKMatrix4)arg2 eyeType:(long long)arg3;

@end


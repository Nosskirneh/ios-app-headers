//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBezierPath.h>

@interface UIBezierPath (Interpolation)
+ (id)interpolateCGPointsWithHermite:(id)arg1 closed:(_Bool)arg2;
+ (id)interpolatePointsWithHermite:(double *)arg1 values:(float *)arg2 count:(long long)arg3 closed:(_Bool)arg4;
+ (id)interpolateCGPointsWithCatmullRom:(id)arg1 closed:(_Bool)arg2 alpha:(float)arg3;
+ (id)interpolatePointsWithCatmullRom:(double *)arg1 values:(float *)arg2 count:(long long)arg3 closed:(_Bool)arg4 alpha:(float)arg5;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTAdsDriftLatencyState : NSObject
{
    double _lastFrameWallTime;
    double _lastFrameProductionTime;
    double _nextFrameWallTime;
    double _nextFrameProductionTime;
}

@property(nonatomic) double nextFrameProductionTime; // @synthesize nextFrameProductionTime=_nextFrameProductionTime;
@property(nonatomic) double nextFrameWallTime; // @synthesize nextFrameWallTime=_nextFrameWallTime;
@property(nonatomic) double lastFrameProductionTime; // @synthesize lastFrameProductionTime=_lastFrameProductionTime;
@property(nonatomic) double lastFrameWallTime; // @synthesize lastFrameWallTime=_lastFrameWallTime;
- (_Bool)isEqualToState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (double)calculateDriftLatency;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation;

@interface GPMCurrentLocation : NSObject
{
    CLLocation *_clLocation;
    double _latency;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCLLocation:(id)arg1 detectionLatency:(double)arg2;
- (id)toGTLRObject;

@end


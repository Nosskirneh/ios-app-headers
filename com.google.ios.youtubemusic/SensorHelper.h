//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMAccelerometerData, CMDeviceMotion, CMMagnetometerData, CMMotionManager, NSLock, NSMutableSet, NSOperationQueue;

@interface SensorHelper : NSObject
{
    CMMotionManager *_motionManager;
    NSOperationQueue *_queue;
    NSMutableSet *_accelerometerCallbacks;
    NSMutableSet *_deviceMotionCallbacks;
    NSMutableSet *_magnetometerCallbacks;
    NSLock *_accelerometerLock;
    NSLock *_deviceMotionLock;
    NSLock *_magnetometerLock;
    CMAccelerometerData *_accelerometerData;
    CMDeviceMotion *_deviceMotion;
    CMMagnetometerData *_magnetometerData;
}

+ (id)sharedSensorHelper;
@property(retain) CMMagnetometerData *magnetometerData; // @synthesize magnetometerData=_magnetometerData;
@property(retain) CMDeviceMotion *deviceMotion; // @synthesize deviceMotion=_deviceMotion;
@property(retain) CMAccelerometerData *accelerometerData; // @synthesize accelerometerData=_accelerometerData;
- (void).cxx_destruct;
- (void)invokeBlock:(CDUnknownBlockType)arg1 withLock:(id)arg2;
@property(readonly, nonatomic, getter=isMagnetometerAvailable) _Bool magnetometerAvailable;
@property(readonly, nonatomic, getter=isGyroAvailable) _Bool gyroAvailable;
@property(readonly, nonatomic, getter=isAccelerometerAvailable) _Bool accelerometerAvailable;
- (void)stop:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)start:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end


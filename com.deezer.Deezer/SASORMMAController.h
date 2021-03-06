//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAccelerometerDelegate-Protocol.h"

@class CMMotionManager, NSDate, NSOperationQueue, NSString, SASMRAIDBridge, SASWebView;

@interface SASORMMAController : NSObject <UIAccelerometerDelegate>
{
    _Bool _histeresisExcited;
    NSOperationQueue *_motionQueue;
    CDUnknownBlockType _gyroHandler;
    NSDate *_lastShakeDate;
    double _lastHeading;
    _Bool _shouldSendShake;
    _Bool _shouldSendAccelerometer;
    _Bool _shouldSendHeading;
    _Bool _shouldSendGyro;
    _Bool _shouldSendGPS;
    CMMotionManager *_motionManager;
    SASWebView *_webView;
    SASMRAIDBridge *_mraidBridge;
    double _shakeIntensity;
    double _shakeInterval;
    CDStruct_31142d93 _lastAcceleration;
}

@property double shakeInterval; // @synthesize shakeInterval=_shakeInterval;
@property double shakeIntensity; // @synthesize shakeIntensity=_shakeIntensity;
@property _Bool shouldSendGPS; // @synthesize shouldSendGPS=_shouldSendGPS;
@property _Bool shouldSendGyro; // @synthesize shouldSendGyro=_shouldSendGyro;
@property _Bool shouldSendHeading; // @synthesize shouldSendHeading=_shouldSendHeading;
@property _Bool shouldSendAccelerometer; // @synthesize shouldSendAccelerometer=_shouldSendAccelerometer;
@property _Bool shouldSendShake; // @synthesize shouldSendShake=_shouldSendShake;
@property(nonatomic) CDStruct_31142d93 lastAcceleration; // @synthesize lastAcceleration=_lastAcceleration;
@property(retain, nonatomic) SASMRAIDBridge *mraidBridge; // @synthesize mraidBridge=_mraidBridge;
@property(retain, nonatomic) SASWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (_Bool)isFunctionInCreative:(id)arg1;
- (void)didRotate;
- (void)updateShakeWithMRAID;
- (void)updateShakeWithDeviceShakedMethod;
- (void)recognizeShake:(CDStruct_31142d93)arg1;
- (void)updateTiltWithMRAID:(CDStruct_31142d93)arg1;
- (void)updateTiltWithAccelerationUpdateMethod:(CDStruct_31142d93)arg1;
- (void)updateHeading:(double)arg1;
- (void)headingTimerUpdate:(id)arg1;
- (void)updateGPSPositionWithMRAID:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2;
- (void)updateGPSPositionWithGPSUpdateMethod:(struct CLLocationCoordinate2D)arg1;
- (void)gpsTimerUpdate:(id)arg1;
- (void)gyroTimerUpdate:(id)arg1;
- (void)accelerometerTimerUpdate:(id)arg1;
- (void)enableAccelerometer;
- (void)disableGyroUpdate;
- (void)enableGyroUpdate;
- (void)disableShakeUpdate;
- (void)enableShakeUpdate;
- (void)restartTiltUpdate;
- (void)disableTiltUpdate;
- (void)enableTiltUpdate;
- (void)disableHeadingUpdate;
- (void)enableHeadingUpdate;
- (void)disableGPSUpdate;
- (void)enableGPSUpdate;
- (void)initializeEventRegistration;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


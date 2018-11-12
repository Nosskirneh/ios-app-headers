//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMMotionManager, NSMutableArray, NSOperationQueue, NSTimer;
@protocol SPTDrivingMotionRecorderDelegate;

@interface SPTDrivingMotionRecorder : NSObject
{
    id <SPTDrivingMotionRecorderDelegate> _delegate;
    CMMotionManager *_coreMotionManager;
    NSOperationQueue *_coreMotionQueue;
    NSTimer *_recordingTimer;
    NSMutableArray *_accelerometerMeasurements;
    NSMutableArray *_gyroscopeMeasurements;
}

@property(retain, nonatomic) NSMutableArray *gyroscopeMeasurements; // @synthesize gyroscopeMeasurements=_gyroscopeMeasurements;
@property(retain, nonatomic) NSMutableArray *accelerometerMeasurements; // @synthesize accelerometerMeasurements=_accelerometerMeasurements;
@property(retain, nonatomic) NSTimer *recordingTimer; // @synthesize recordingTimer=_recordingTimer;
@property(readonly, nonatomic) NSOperationQueue *coreMotionQueue; // @synthesize coreMotionQueue=_coreMotionQueue;
@property(readonly, nonatomic) CMMotionManager *coreMotionManager; // @synthesize coreMotionManager=_coreMotionManager;
@property(nonatomic) __weak id <SPTDrivingMotionRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopRecordingWithAbortedStatus:(_Bool)arg1;
- (void)recordingTimerDidFire;
- (void)didReceiveGyroscopeData:(id)arg1 error:(id)arg2;
- (void)didReceiveAccelerometerData:(id)arg1 error:(id)arg2;
- (void)stopRecording;
- (void)startRecordingWithConfiguration:(id)arg1;
- (id)initWithCoreMotionManager:(id)arg1;

@end


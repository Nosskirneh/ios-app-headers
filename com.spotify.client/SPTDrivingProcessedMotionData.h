//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTDrivingProcessedMotionData : NSObject
{
    CDStruct_93d588b8 _gyroscopeValues;
    CDStruct_93d588b8 _accelerometerValues;
}

@property(readonly, nonatomic) CDStruct_93d588b8 accelerometerValues; // @synthesize accelerometerValues=_accelerometerValues;
@property(readonly, nonatomic) CDStruct_93d588b8 gyroscopeValues; // @synthesize gyroscopeValues=_gyroscopeValues;
- (id)initWithAccelerometerValues:(CDStruct_93d588b8)arg1 gyroscopeValues:(CDStruct_93d588b8)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDLBatteryCollector, PDLCPUCollector, PDLMemoryCollector;

@interface PDLResourceCollector : NSObject
{
    _Bool _shouldCollectMemory;
    _Bool _shouldCollectCPU;
    _Bool _shouldCollectBattery;
    PDLMemoryCollector *_memoryCollector;
    PDLCPUCollector *_CPUCollector;
    PDLBatteryCollector *_batteryCollector;
}

@property(readonly) _Bool shouldCollectBattery; // @synthesize shouldCollectBattery=_shouldCollectBattery;
@property(readonly) _Bool shouldCollectCPU; // @synthesize shouldCollectCPU=_shouldCollectCPU;
@property(readonly) _Bool shouldCollectMemory; // @synthesize shouldCollectMemory=_shouldCollectMemory;
@property(readonly) PDLBatteryCollector *batteryCollector; // @synthesize batteryCollector=_batteryCollector;
@property(readonly) PDLCPUCollector *CPUCollector; // @synthesize CPUCollector=_CPUCollector;
@property(readonly) PDLMemoryCollector *memoryCollector; // @synthesize memoryCollector=_memoryCollector;
- (void).cxx_destruct;
- (void)completeCollection;
- (void)beginCollection;
- (id)initWithAPI:(int)arg1 experimentsFlags:(id)arg2;

@end


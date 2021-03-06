//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LDAdBlock.h"

@class LDMeasurementData;
@protocol LDDisplayAdDelegate;

@interface LDDisplayAdBlock : LDAdBlock
{
    _Bool _endOfSessionImpressionSent;
    id <LDDisplayAdDelegate> _delegate;
    double _firstExposure;
    LDMeasurementData *_measurementData;
}

@property(retain, nonatomic) LDMeasurementData *measurementData; // @synthesize measurementData=_measurementData;
@property(nonatomic) _Bool endOfSessionImpressionSent; // @synthesize endOfSessionImpressionSent=_endOfSessionImpressionSent;
@property(nonatomic) double firstExposure; // @synthesize firstExposure=_firstExposure;
@property(nonatomic) __weak id <LDDisplayAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)viewed;
- (void)addViewabilityDataToDictionary:(id)arg1;
- (void)updateViewabilityWithAdState:(struct LDAdState)arg1 time:(long long)arg2 screenShare:(double)arg3;
- (id)initWithView:(id)arg1;

@end


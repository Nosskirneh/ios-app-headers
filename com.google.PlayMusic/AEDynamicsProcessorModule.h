//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AEAudioUnitModule.h"

@interface AEDynamicsProcessorModule : AEAudioUnitModule
{
}

@property(nonatomic) double masterGain;
@property(nonatomic) double releaseTime;
@property(nonatomic) double attackTime;
@property(nonatomic) double expansionThreshold;
@property(nonatomic) double expansionRatio;
@property(nonatomic) double headRoom;
@property(nonatomic) double threshold;
@property(readonly, nonatomic) double outputAmplitude;
@property(readonly, nonatomic) double inputAmplitude;
@property(readonly, nonatomic) double compressionAmount;
- (id)initWithRenderer:(id)arg1;

@end

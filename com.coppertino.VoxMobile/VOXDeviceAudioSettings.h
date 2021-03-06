//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VOXDeviceAudioSettings : NSObject
{
    _Bool _eqEnabled;
    long long _presetIndex;
    unsigned long long _presetType;
    NSDictionary *_eqParameters;
    long long _bs2bPreset;
    long long _syncSampleRateMode;
    long long _targetSampleRateForUpsample;
    long long _autoGainMode;
    long long _srcQuality;
}

@property(nonatomic) long long srcQuality; // @synthesize srcQuality=_srcQuality;
@property(nonatomic) long long autoGainMode; // @synthesize autoGainMode=_autoGainMode;
@property(nonatomic) long long targetSampleRateForUpsample; // @synthesize targetSampleRateForUpsample=_targetSampleRateForUpsample;
@property(nonatomic) long long syncSampleRateMode; // @synthesize syncSampleRateMode=_syncSampleRateMode;
@property(nonatomic) long long bs2bPreset; // @synthesize bs2bPreset=_bs2bPreset;
@property(nonatomic) _Bool eqEnabled; // @synthesize eqEnabled=_eqEnabled;
@property(nonatomic) NSDictionary *eqParameters; // @synthesize eqParameters=_eqParameters;
@property(nonatomic) unsigned long long presetType; // @synthesize presetType=_presetType;
@property(nonatomic) long long presetIndex; // @synthesize presetIndex=_presetIndex;

@end


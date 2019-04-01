//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface VXBassAudioDevice : NSObject
{
    _Bool _isOutput;
    _Bool _isAirplay;
    _Bool _isBuiltIn;
    _Bool _isSystemDefault;
    _Bool _supportsSampleRateSwitching;
    _Bool _isExternal;
    _Bool _isSonos;
    _Bool _deviceMute;
    float _deviceVolume;
    NSString *_deviceName;
    NSString *_deviceUID;
    NSArray *_outputDeviceSources;
    long long _bitDepth;
    long long _sampleRate;
    long long _bassDeviceIndex;
    long long _numberOfChannels;
    NSArray *_supportedSampleRates;
}

@property(nonatomic) _Bool deviceMute; // @synthesize deviceMute=_deviceMute;
@property(nonatomic) float deviceVolume; // @synthesize deviceVolume=_deviceVolume;
@property(nonatomic) _Bool isSonos; // @synthesize isSonos=_isSonos;
@property(nonatomic) _Bool isExternal; // @synthesize isExternal=_isExternal;
@property(readonly, nonatomic) NSArray *supportedSampleRates; // @synthesize supportedSampleRates=_supportedSampleRates;
@property(nonatomic) _Bool supportsSampleRateSwitching; // @synthesize supportsSampleRateSwitching=_supportsSampleRateSwitching;
@property(nonatomic) _Bool isSystemDefault; // @synthesize isSystemDefault=_isSystemDefault;
@property(nonatomic) _Bool isBuiltIn; // @synthesize isBuiltIn=_isBuiltIn;
@property(nonatomic) _Bool isAirplay; // @synthesize isAirplay=_isAirplay;
@property(nonatomic) _Bool isOutput; // @synthesize isOutput=_isOutput;
@property(nonatomic) long long numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(nonatomic) long long bassDeviceIndex; // @synthesize bassDeviceIndex=_bassDeviceIndex;
@property(nonatomic) long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long bitDepth; // @synthesize bitDepth=_bitDepth;
@property(retain, nonatomic) NSArray *outputDeviceSources; // @synthesize outputDeviceSources=_outputDeviceSources;
@property(retain, nonatomic) NSString *deviceUID; // @synthesize deviceUID=_deviceUID;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long numberOfChannelsInDesiredLayoutConfiguration;
- (id)currentOutputDeviceSource;
- (_Bool)outputDeviceSourceIsSelected:(id)arg1;
- (id)outputDeviceSourceWithID:(id)arg1;
- (id)outputDeviceSourceWithName:(id)arg1;
- (void)selectOutputDeviceSource:(id)arg1;
- (long long)bestCompatibleSampleRateTo:(long long)arg1;
- (id)matrixForStereo;
- (id)matrixForMultichannel;
@property(readonly, nonatomic) _Bool isNetwork;
- (_Bool)isHogedByCurrentProcess;
- (_Bool)isInHogMode;
- (_Bool)unhogDevice;
- (_Bool)hogDevice;
- (_Bool)isJackConnected;
- (_Bool)hasJack;
@property(readonly, nonatomic) NSString *humanReadableDeviceName;
- (id)advancedDescription;
- (id)init;

@end


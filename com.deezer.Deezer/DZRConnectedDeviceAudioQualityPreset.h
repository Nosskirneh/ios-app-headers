//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DZRConnectedDeviceAudioQualityPreset : NSObject
{
    NSDictionary *_presetDescription;
}

@property(retain, nonatomic) NSDictionary *presetDescription; // @synthesize presetDescription=_presetDescription;
- (void).cxx_destruct;
- (id)description;
- (void)applyPresetToUser:(id)arg1;
@property(readonly, nonatomic) long long connectedDeviceStreamingQuality;
- (void)setConnectedDeviceStreamingQuality:(long long)arg1;
- (id)init;

@end

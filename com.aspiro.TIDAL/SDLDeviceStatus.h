//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString;
@protocol SDLBool;

@interface SDLDeviceStatus : SDLRPCStruct
{
}

@property(retain, nonatomic) NSNumber<SDLBool> *eCallEventActive;
@property(retain, nonatomic) NSString *primaryAudioSource;
@property(retain, nonatomic) NSString *signalLevelStatus;
@property(retain, nonatomic) NSNumber<SDLBool> *monoAudioOutputMuted;
@property(retain, nonatomic) NSNumber<SDLBool> *stereoAudioOutputMuted;
@property(retain, nonatomic) NSString *battLevelStatus;
@property(retain, nonatomic) NSNumber<SDLBool> *textMsgAvailable;
@property(retain, nonatomic) NSNumber<SDLBool> *phoneRoaming;
@property(retain, nonatomic) NSNumber<SDLBool> *callActive;
@property(retain, nonatomic) NSNumber<SDLBool> *btIconOn;
@property(retain, nonatomic) NSNumber<SDLBool> *voiceRecOn;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString, SDLTemperature;
@protocol SDLBool, SDLInt;

@interface SDLClimateControlData : SDLRPCStruct
{
}

@property(retain, nonatomic) NSString *ventilationMode;
@property(retain, nonatomic) NSNumber<SDLBool> *acMaxEnable;
@property(retain, nonatomic) NSNumber<SDLBool> *dualModeEnable;
@property(retain, nonatomic) NSString *defrostZone;
@property(retain, nonatomic) NSNumber<SDLBool> *autoModeEnable;
@property(retain, nonatomic) NSNumber<SDLBool> *circulateAirEnable;
@property(retain, nonatomic) NSNumber<SDLBool> *acEnable;
@property(retain, nonatomic) SDLTemperature *desiredTemperature;
@property(retain, nonatomic) SDLTemperature *currentTemperature;
@property(retain, nonatomic) NSNumber<SDLInt> *fanSpeed;
- (id)initWithFanSpeed:(id)arg1 desiredTemperature:(id)arg2 acEnable:(id)arg3 circulateAirEnable:(id)arg4 autoModeEnable:(id)arg5 defrostZone:(id)arg6 dualModeEnable:(id)arg7 acMaxEnable:(id)arg8 ventilationMode:(id)arg9;

@end


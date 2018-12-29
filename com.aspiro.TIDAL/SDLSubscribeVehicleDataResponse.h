//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCResponse.h"

@class SDLVehicleDataResult;

@interface SDLSubscribeVehicleDataResponse : SDLRPCResponse
{
}

@property(retain, nonatomic) SDLVehicleDataResult *myKey;
@property(retain, nonatomic) SDLVehicleDataResult *clusterModes;
@property(retain, nonatomic) SDLVehicleDataResult *emergencyEvent;
@property(retain, nonatomic) SDLVehicleDataResult *airbagStatus;
@property(retain, nonatomic) SDLVehicleDataResult *eCallInfo;
@property(retain, nonatomic) SDLVehicleDataResult *steeringWheelAngle;
@property(retain, nonatomic) SDLVehicleDataResult *accPedalPosition;
@property(retain, nonatomic) SDLVehicleDataResult *engineTorque;
@property(retain, nonatomic) SDLVehicleDataResult *headLampStatus;
@property(retain, nonatomic) SDLVehicleDataResult *wiperStatus;
@property(retain, nonatomic) SDLVehicleDataResult *driverBraking;
@property(retain, nonatomic) SDLVehicleDataResult *deviceStatus;
@property(retain, nonatomic) SDLVehicleDataResult *bodyInformation;
@property(retain, nonatomic) SDLVehicleDataResult *beltStatus;
@property(retain, nonatomic) SDLVehicleDataResult *odometer;
@property(retain, nonatomic) SDLVehicleDataResult *tirePressure;
@property(retain, nonatomic) SDLVehicleDataResult *prndl;
@property(retain, nonatomic) SDLVehicleDataResult *externalTemperature;
@property(retain, nonatomic) SDLVehicleDataResult *instantFuelConsumption;
@property(retain, nonatomic) SDLVehicleDataResult *fuelLevel_State;
@property(retain, nonatomic) SDLVehicleDataResult *fuelLevel;
@property(retain, nonatomic) SDLVehicleDataResult *rpm;
@property(retain, nonatomic) SDLVehicleDataResult *speed;
@property(retain, nonatomic) SDLVehicleDataResult *gps;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString;
@protocol SDLBool;

@interface SDLBodyInformation : SDLRPCStruct
{
}

@property(retain, nonatomic) NSNumber<SDLBool> *rearRightDoorAjar;
@property(retain, nonatomic) NSNumber<SDLBool> *rearLeftDoorAjar;
@property(retain, nonatomic) NSNumber<SDLBool> *passengerDoorAjar;
@property(retain, nonatomic) NSNumber<SDLBool> *driverDoorAjar;
@property(retain, nonatomic) NSString *ignitionStatus;
@property(retain, nonatomic) NSString *ignitionStableStatus;
@property(retain, nonatomic) NSNumber<SDLBool> *parkBrakeActive;

@end


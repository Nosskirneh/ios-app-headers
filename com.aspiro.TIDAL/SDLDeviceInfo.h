//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString;
@protocol SDLInt;

@interface SDLDeviceInfo : SDLRPCStruct
{
}

+ (id)currentDevice;
@property(retain, nonatomic) NSNumber<SDLInt> *maxNumberRFCOMMPorts;
@property(retain, nonatomic) NSString *carrier;
@property(retain, nonatomic) NSString *osVersion;
@property(retain, nonatomic) NSString *os;
@property(retain, nonatomic) NSString *firmwareRev;
@property(retain, nonatomic) NSString *hardware;

@end

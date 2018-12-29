//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString;
@protocol SDLBool, SDLInt;

@interface SDLRDSData : SDLRPCStruct
{
}

@property(retain, nonatomic) NSString *region;
@property(retain, nonatomic) NSNumber<SDLBool> *trafficAnnouncementIdentification;
@property(retain, nonatomic) NSNumber<SDLBool> *trafficProgramIdentification;
@property(retain, nonatomic) NSNumber<SDLInt> *programType;
@property(retain, nonatomic) NSString *programIdentification;
@property(retain, nonatomic) NSString *clockText;
@property(retain, nonatomic) NSString *radioText;
@property(retain, nonatomic) NSString *programService;
- (id)initWithProgramService:(id)arg1 radioText:(id)arg2 clockText:(id)arg3 programIdentification:(id)arg4 programType:(id)arg5 trafficProgramIdentification:(id)arg6 trafficAnnouncementIdentification:(id)arg7 region:(id)arg8;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber;
@protocol SDLInt;

@interface SDLStartTime : SDLRPCStruct
{
}

@property(retain, nonatomic) NSNumber<SDLInt> *seconds;
@property(retain, nonatomic) NSNumber<SDLInt> *minutes;
@property(retain, nonatomic) NSNumber<SDLInt> *hours;
- (id)initWithHours:(unsigned char)arg1 minutes:(unsigned char)arg2 seconds:(unsigned char)arg3;

@end


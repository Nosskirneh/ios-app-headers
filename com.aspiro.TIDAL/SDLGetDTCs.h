//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSNumber;
@protocol SDLInt;

@interface SDLGetDTCs : SDLRPCRequest
{
}

@property(retain, nonatomic) NSNumber<SDLInt> *dtcMask;
@property(retain, nonatomic) NSNumber<SDLInt> *ecuName;
- (id)initWithECUName:(unsigned short)arg1;
- (id)initWithECUName:(unsigned short)arg1 mask:(unsigned char)arg2;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString;
@protocol SDLInt;

@interface SDLDIDResult : SDLRPCStruct
{
}

@property(retain, nonatomic) NSString *data;
@property(retain, nonatomic) NSNumber<SDLInt> *didLocation;
@property(retain, nonatomic) NSString *resultCode;

@end


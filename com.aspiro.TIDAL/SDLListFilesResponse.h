//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCResponse.h"

@class NSArray, NSNumber;
@protocol SDLInt;

@interface SDLListFilesResponse : SDLRPCResponse
{
}

@property(retain, nonatomic) NSNumber<SDLInt> *spaceAvailable;
@property(retain, nonatomic) NSArray *filenames;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCStruct.h"

@class NSNumber, NSString, SDLImage;
@protocol SDLInt;

@interface SDLVRHelpItem : SDLRPCStruct
{
}

@property(retain, nonatomic) NSNumber<SDLInt> *position;
@property(retain, nonatomic) SDLImage *image;
@property(retain, nonatomic) NSString *text;
- (id)initWithText:(id)arg1 image:(id)arg2;
- (id)initWithText:(id)arg1 image:(id)arg2 position:(unsigned char)arg3;

@end


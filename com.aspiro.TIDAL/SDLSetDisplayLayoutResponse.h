//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCResponse.h"

@class NSArray, SDLDisplayCapabilities, SDLPresetBankCapabilities;

@interface SDLSetDisplayLayoutResponse : SDLRPCResponse
{
}

@property(retain, nonatomic) SDLPresetBankCapabilities *presetBankCapabilities;
@property(retain, nonatomic) NSArray *softButtonCapabilities;
@property(retain, nonatomic) NSArray *buttonCapabilities;
@property(retain, nonatomic) SDLDisplayCapabilities *displayCapabilities;
- (id)init;

@end


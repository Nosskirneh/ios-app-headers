//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIResponseContext;

@interface YTICreateKidsPersonaResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasPersonaVersion; // @dynamic hasPersonaVersion;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(copy, nonatomic) NSData *personaVersion; // @dynamic personaVersion;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end


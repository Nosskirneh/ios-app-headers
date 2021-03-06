//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIGamingSpaceEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int accentColor; // @dynamic accentColor;
@property(nonatomic) _Bool hasAccentColor; // @dynamic hasAccentColor;
@property(nonatomic) _Bool hasPlayEndpoint; // @dynamic hasPlayEndpoint;
@property(nonatomic) _Bool hasSpaceId; // @dynamic hasSpaceId;
@property(retain, nonatomic) YTICommand *playEndpoint; // @dynamic playEndpoint;
@property(copy, nonatomic) NSString *spaceId; // @dynamic spaceId;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIAdVideoProgressOffset, YTICommand;

@interface YTIAdVideoProgressCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAdVideoProgressOffset *adVideoOffset; // @dynamic adVideoOffset;
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(nonatomic) _Bool hasAdVideoOffset; // @dynamic hasAdVideoOffset;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;

@end


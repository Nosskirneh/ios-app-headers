//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIMediaItemIdentifier : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *command; // @dynamic command;
@property(nonatomic) _Bool hasCommand; // @dynamic hasCommand;
@property(nonatomic) _Bool hasLocalContainerType; // @dynamic hasLocalContainerType;
@property(nonatomic) _Bool hasServerId; // @dynamic hasServerId;
@property(nonatomic) int localContainerType; // @dynamic localContainerType;
@property(copy, nonatomic) NSString *serverId; // @dynamic serverId;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MMKProtoPlayerEventMedia, NSString;

@interface MMKProtoPlayerEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int favorite; // @dynamic favorite;
@property(nonatomic) _Bool hasMedia; // @dynamic hasMedia;
@property(retain, nonatomic) MMKProtoPlayerEventMedia *media; // @dynamic media;
@property(nonatomic) int name; // @dynamic name;
@property(copy, nonatomic) NSString *playerId; // @dynamic playerId;
@property(nonatomic) unsigned int position; // @dynamic position;
@property(nonatomic) int repeat; // @dynamic repeat;
@property(nonatomic) int shuffle; // @dynamic shuffle;
@property(nonatomic) int state; // @dynamic state;
@property(nonatomic) unsigned int supportedOperations; // @dynamic supportedOperations;

@end


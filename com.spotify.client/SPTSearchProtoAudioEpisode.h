//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDuration, NSMutableArray, NSString;

@interface SPTSearchProtoAudioEpisode : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDuration *duration; // @dynamic duration;
@property(nonatomic) _Bool explicit_p; // @dynamic explicit_p;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(copy, nonatomic) NSString *showName; // @dynamic showName;
@property(nonatomic) _Bool topPlayed; // @dynamic topPlayed;
@property(retain, nonatomic) NSMutableArray *topicsArray; // @dynamic topicsArray;
@property(readonly, nonatomic) unsigned long long topicsArray_Count; // @dynamic topicsArray_Count;

@end

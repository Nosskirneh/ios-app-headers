//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface TtsServiceEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *audio; // @dynamic audio;
@property(nonatomic) _Bool endOfData; // @dynamic endOfData;
@property(nonatomic) _Bool hasAudio; // @dynamic hasAudio;
@property(nonatomic) _Bool hasEndOfData; // @dynamic hasEndOfData;

@end

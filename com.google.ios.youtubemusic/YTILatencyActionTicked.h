//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTILatencyActionTicked : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientActionNonce; // @dynamic clientActionNonce;
@property(nonatomic) _Bool hasClientActionNonce; // @dynamic hasClientActionNonce;
@property(nonatomic) _Bool hasTickName; // @dynamic hasTickName;
@property(copy, nonatomic) NSString *tickName; // @dynamic tickName;

@end

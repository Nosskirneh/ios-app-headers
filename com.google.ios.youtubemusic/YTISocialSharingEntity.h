//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTISocialSharingSyncToken;

@interface YTISocialSharingEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *chatSet; // @dynamic chatSet;
@property(nonatomic) long long entityFilledTimestamp; // @dynamic entityFilledTimestamp;
@property(nonatomic) _Bool hasChatSet; // @dynamic hasChatSet;
@property(nonatomic) _Bool hasEntityFilledTimestamp; // @dynamic hasEntityFilledTimestamp;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasSyncToken; // @dynamic hasSyncToken;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) YTISocialSharingSyncToken *syncToken; // @dynamic syncToken;

@end


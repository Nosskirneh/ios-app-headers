//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTITenXPlayerRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(retain, nonatomic) NSMutableArray *channelIdsArray; // @dynamic channelIdsArray;
@property(readonly, nonatomic) unsigned long long channelIdsArray_Count; // @dynamic channelIdsArray_Count;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) long long currentPlayerPositionIngestionWalltimeMillis; // @dynamic currentPlayerPositionIngestionWalltimeMillis;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasCurrentPlayerPositionIngestionWalltimeMillis; // @dynamic hasCurrentPlayerPositionIngestionWalltimeMillis;

@end


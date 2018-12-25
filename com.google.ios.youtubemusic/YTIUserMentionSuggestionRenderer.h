//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUserMentionSuggestionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(retain, nonatomic) YTIFormattedString *details; // @dynamic details;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasDetails; // @dynamic hasDetails;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


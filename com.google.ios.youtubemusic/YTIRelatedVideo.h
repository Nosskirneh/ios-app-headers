//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIThumbnailDetails;

@interface YTIRelatedVideo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *chatBodyEntityKey; // @dynamic chatBodyEntityKey;
@property(nonatomic) long long durationSeconds; // @dynamic durationSeconds;
@property(nonatomic) _Bool hasChatBodyEntityKey; // @dynamic hasChatBodyEntityKey;
@property(nonatomic) _Bool hasDurationSeconds; // @dynamic hasDurationSeconds;
@property(nonatomic) _Bool hasSerializedShareEntity; // @dynamic hasSerializedShareEntity;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(copy, nonatomic) NSString *serializedShareEntity; // @dynamic serializedShareEntity;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSData *title; // @dynamic title;
@property(nonatomic) long long viewCount; // @dynamic viewCount;

@end


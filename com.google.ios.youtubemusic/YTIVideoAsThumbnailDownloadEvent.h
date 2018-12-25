//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIVideoAsThumbnailInfo;

@interface YTIVideoAsThumbnailDownloadEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long downloadSize; // @dynamic downloadSize;
@property(nonatomic) int eventType; // @dynamic eventType;
@property(nonatomic) _Bool hasDownloadSize; // @dynamic hasDownloadSize;
@property(nonatomic) _Bool hasEventType; // @dynamic hasEventType;
@property(nonatomic) _Bool hasNetworkType; // @dynamic hasNetworkType;
@property(nonatomic) _Bool hasTimeToDownloadCompleteMs; // @dynamic hasTimeToDownloadCompleteMs;
@property(nonatomic) _Bool hasVideoAsThumbnailInfo; // @dynamic hasVideoAsThumbnailInfo;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(nonatomic) unsigned long long timeToDownloadCompleteMs; // @dynamic timeToDownloadCompleteMs;
@property(retain, nonatomic) YTIVideoAsThumbnailInfo *videoAsThumbnailInfo; // @dynamic videoAsThumbnailInfo;

@end


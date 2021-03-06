//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIPlayerOverlayTvAutoplayRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *byline; // @dynamic byline;
@property(nonatomic) int countDownSecs; // @dynamic countDownSecs;
@property(nonatomic) _Bool hasByline; // @dynamic hasByline;
@property(nonatomic) _Bool hasCountDownSecs; // @dynamic hasCountDownSecs;
@property(nonatomic) _Bool hasLengthText; // @dynamic hasLengthText;
@property(nonatomic) _Bool hasNextEndpoint; // @dynamic hasNextEndpoint;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoTitle; // @dynamic hasVideoTitle;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(retain, nonatomic) YTIFormattedString *lengthText; // @dynamic lengthText;
@property(retain, nonatomic) YTICommand *nextEndpoint; // @dynamic nextEndpoint;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *videoTitle; // @dynamic videoTitle;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end


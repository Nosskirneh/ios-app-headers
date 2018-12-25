//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIThumbnailDetails;

@interface YTIGamingEventSponsorRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasSponsorType; // @dynamic hasSponsorType;
@property(nonatomic) _Bool hasTimeToDisplaySeconds; // @dynamic hasTimeToDisplaySeconds;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(nonatomic) int sponsorType; // @dynamic sponsorType;
@property(nonatomic) long long timeToDisplaySeconds; // @dynamic timeToDisplaySeconds;

@end

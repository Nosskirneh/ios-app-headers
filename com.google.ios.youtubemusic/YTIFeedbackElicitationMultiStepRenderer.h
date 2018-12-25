//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIFeedbackElicitationMultiStepRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *answerOptionsArray; // @dynamic answerOptionsArray;
@property(readonly, nonatomic) unsigned long long answerOptionsArray_Count; // @dynamic answerOptionsArray_Count;
@property(nonatomic) _Bool avatarIs169; // @dynamic avatarIs169;
@property(retain, nonatomic) YTIThumbnailDetails *channelAvatar; // @dynamic channelAvatar;
@property(retain, nonatomic) YTICommand *channelEndpoint; // @dynamic channelEndpoint;
@property(retain, nonatomic) YTIFormattedString *channelTitle; // @dynamic channelTitle;
@property(retain, nonatomic) YTICommand *dismissalEndpoint; // @dynamic dismissalEndpoint;
@property(nonatomic) _Bool hasAvatarIs169; // @dynamic hasAvatarIs169;
@property(nonatomic) _Bool hasChannelAvatar; // @dynamic hasChannelAvatar;
@property(nonatomic) _Bool hasChannelEndpoint; // @dynamic hasChannelEndpoint;
@property(nonatomic) _Bool hasChannelTitle; // @dynamic hasChannelTitle;
@property(nonatomic) _Bool hasDismissalEndpoint; // @dynamic hasDismissalEndpoint;
@property(nonatomic) _Bool hasInitialQuestion; // @dynamic hasInitialQuestion;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *initialQuestion; // @dynamic initialQuestion;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


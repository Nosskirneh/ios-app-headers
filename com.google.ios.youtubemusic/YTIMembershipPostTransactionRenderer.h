//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIIcon, YTIRenderer, YTIThumbnailDetails;

@interface YTIMembershipPostTransactionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *channelThumbnail; // @dynamic channelThumbnail;
@property(retain, nonatomic) YTIRenderer *customPerks; // @dynamic customPerks;
@property(retain, nonatomic) YTIButtonSupportedRenderers *dismissButton; // @dynamic dismissButton;
@property(retain, nonatomic) YTIRenderer *feedbackSurvey; // @dynamic feedbackSurvey;
@property(nonatomic) _Bool hasChannelThumbnail; // @dynamic hasChannelThumbnail;
@property(nonatomic) _Bool hasCustomPerks; // @dynamic hasCustomPerks;
@property(nonatomic) _Bool hasDismissButton; // @dynamic hasDismissButton;
@property(nonatomic) _Bool hasFeedbackSurvey; // @dynamic hasFeedbackSurvey;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasHeaderImage; // @dynamic hasHeaderImage;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasOkayButton; // @dynamic hasOkayButton;
@property(nonatomic) _Bool hasSeePosts; // @dynamic hasSeePosts;
@property(nonatomic) _Bool hasSubscriptionDisclaimer; // @dynamic hasSubscriptionDisclaimer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasViewerThumbnail; // @dynamic hasViewerThumbnail;
@property(nonatomic) _Bool hasYtPerks; // @dynamic hasYtPerks;
@property(retain, nonatomic) YTIFormattedString *header; // @dynamic header;
@property(retain, nonatomic) YTIThumbnailDetails *headerImage; // @dynamic headerImage;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *okayButton; // @dynamic okayButton;
@property(retain, nonatomic) YTIRenderer *seePosts; // @dynamic seePosts;
@property(retain, nonatomic) YTIFormattedString *subscriptionDisclaimer; // @dynamic subscriptionDisclaimer;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *viewerThumbnail; // @dynamic viewerThumbnail;
@property(retain, nonatomic) YTIRenderer *ytPerks; // @dynamic ytPerks;

@end


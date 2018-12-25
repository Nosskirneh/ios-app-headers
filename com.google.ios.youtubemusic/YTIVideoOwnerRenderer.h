//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIMembershipButtonSupportedRenderers, YTISubscriptionButton, YTIThumbnailDetails, YTIVideoOwnerSubscribeButtonSupportedRenderers;

@interface YTIVideoOwnerRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accountLinkButtonsArray; // @dynamic accountLinkButtonsArray;
@property(readonly, nonatomic) unsigned long long accountLinkButtonsArray_Count; // @dynamic accountLinkButtonsArray_Count;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(nonatomic) _Bool hasMembershipButton; // @dynamic hasMembershipButton;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasSubscriptionButton; // @dynamic hasSubscriptionButton;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIMembershipButtonSupportedRenderers *membershipButton; // @dynamic membershipButton;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIVideoOwnerSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(retain, nonatomic) YTISubscriptionButton *subscriptionButton; // @dynamic subscriptionButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

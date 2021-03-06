//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIIcon, YTIShoppingAdInfoCardContentLayout, YTIThumbnailDetails;

@interface YTIShoppingAdInfoCardContentRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *action; // @dynamic action;
@property(retain, nonatomic) YTICommand *adChoicesDialogEndpoint; // @dynamic adChoicesDialogEndpoint;
@property(retain, nonatomic) YTIFormattedString *callToAction; // @dynamic callToAction;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasAdChoicesDialogEndpoint; // @dynamic hasAdChoicesDialogEndpoint;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasLayout; // @dynamic hasLayout;
@property(nonatomic) _Bool hasLinkOutIcon; // @dynamic hasLinkOutIcon;
@property(nonatomic) _Bool hasRating; // @dynamic hasRating;
@property(nonatomic) _Bool hasReviewText; // @dynamic hasReviewText;
@property(nonatomic) _Bool hasSponsoredText; // @dynamic hasSponsoredText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *impressionLoggingUrlsV2SArray; // @dynamic impressionLoggingUrlsV2SArray;
@property(readonly, nonatomic) unsigned long long impressionLoggingUrlsV2SArray_Count; // @dynamic impressionLoggingUrlsV2SArray_Count;
@property(retain, nonatomic) YTIShoppingAdInfoCardContentLayout *layout; // @dynamic layout;
@property(retain, nonatomic) YTIIcon *linkOutIcon; // @dynamic linkOutIcon;
@property(nonatomic) float rating; // @dynamic rating;
@property(retain, nonatomic) YTIFormattedString *reviewText; // @dynamic reviewText;
@property(retain, nonatomic) YTIFormattedString *sponsoredText; // @dynamic sponsoredText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


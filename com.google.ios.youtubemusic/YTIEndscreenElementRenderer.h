//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIEndscreenButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails;

@interface YTIEndscreenElementRenderer : GPBMessage
{
}

+ (id)descriptor;
- (id)toCompactVideoRenderer;
- (struct CGRect)relativeRectFromViewSize:(struct CGSize)arg1;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *animatedImage; // @dynamic animatedImage;
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(retain, nonatomic) YTIFormattedString *callToAction; // @dynamic callToAction;
@property(retain, nonatomic) YTIFormattedString *dismiss; // @dynamic dismiss;
@property(nonatomic) long long endMs; // @dynamic endMs;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasAnimatedImage; // @dynamic hasAnimatedImage;
@property(nonatomic) _Bool hasAspectRatio; // @dynamic hasAspectRatio;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasDismiss; // @dynamic hasDismiss;
@property(nonatomic) _Bool hasEndMs; // @dynamic hasEndMs;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasHovercardButton; // @dynamic hasHovercardButton;
@property(nonatomic) _Bool hasHtmlBlob; // @dynamic hasHtmlBlob;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImage; // @dynamic hasImage;
@property(nonatomic) _Bool hasIsSubscribe; // @dynamic hasIsSubscribe;
@property(nonatomic) _Bool hasLeft; // @dynamic hasLeft;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasPlaylistLength; // @dynamic hasPlaylistLength;
@property(nonatomic) _Bool hasSigninEndpoint; // @dynamic hasSigninEndpoint;
@property(nonatomic) _Bool hasStartMs; // @dynamic hasStartMs;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasSubscribersText; // @dynamic hasSubscribersText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTop; // @dynamic hasTop;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUseClassicSubscribeButton; // @dynamic hasUseClassicSubscribeButton;
@property(nonatomic) _Bool hasVideoDuration; // @dynamic hasVideoDuration;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(retain, nonatomic) YTIEndscreenButtonSupportedRenderers *hovercardButton; // @dynamic hovercardButton;
@property(retain, nonatomic) NSMutableArray *hovercardDismissUrlsArray; // @dynamic hovercardDismissUrlsArray;
@property(readonly, nonatomic) unsigned long long hovercardDismissUrlsArray_Count; // @dynamic hovercardDismissUrlsArray_Count;
@property(retain, nonatomic) NSMutableArray *hovercardShowUrlsArray; // @dynamic hovercardShowUrlsArray;
@property(readonly, nonatomic) unsigned long long hovercardShowUrlsArray_Count; // @dynamic hovercardShowUrlsArray_Count;
@property(copy, nonatomic) NSString *htmlBlob; // @dynamic htmlBlob;
@property(retain, nonatomic) YTIThumbnailDetails *icon; // @dynamic icon;
@property(retain, nonatomic) YTIThumbnailDetails *image; // @dynamic image;
@property(retain, nonatomic) NSMutableArray *impressionUrlsArray; // @dynamic impressionUrlsArray;
@property(readonly, nonatomic) unsigned long long impressionUrlsArray_Count; // @dynamic impressionUrlsArray_Count;
@property(nonatomic) _Bool isSubscribe; // @dynamic isSubscribe;
@property(nonatomic) float left; // @dynamic left;
@property(retain, nonatomic) YTIFormattedString *metadata; // @dynamic metadata;
@property(retain, nonatomic) YTIFormattedString *playlistLength; // @dynamic playlistLength;
@property(retain, nonatomic) YTICommand *signinEndpoint; // @dynamic signinEndpoint;
@property(nonatomic) long long startMs; // @dynamic startMs;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIFormattedString *subscribersText; // @dynamic subscribersText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(nonatomic) float top; // @dynamic top;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) _Bool useClassicSubscribeButton; // @dynamic useClassicSubscribeButton;
@property(retain, nonatomic) YTIFormattedString *videoDuration; // @dynamic videoDuration;
@property(nonatomic) float width; // @dynamic width;

@end


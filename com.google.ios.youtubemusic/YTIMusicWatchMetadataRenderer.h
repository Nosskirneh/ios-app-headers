//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMOfflineVideoIDProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString, YTILikeButtonSupportedRenderers, YTIMusicWatchMetadataDismissRadioButtonSupportedRenderers, YTIShareButtonSupportedRenderers;

@interface YTIMusicWatchMetadataRenderer : GPBMessage <YTMOfflineVideoIDProtocol>
{
}

+ (id)descriptor;
- (id)ytm_offlineVideoID;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *albumName; // @dynamic albumName;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIFormattedString *byline; // @dynamic byline;
@property(retain, nonatomic) YTIFormattedString *channelName; // @dynamic channelName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIMusicWatchMetadataDismissRadioButtonSupportedRenderers *dismissRadioButton; // @dynamic dismissRadioButton;
@property(nonatomic) _Bool hasAlbumName; // @dynamic hasAlbumName;
@property(nonatomic) _Bool hasByline; // @dynamic hasByline;
@property(nonatomic) _Bool hasChannelName; // @dynamic hasChannelName;
@property(nonatomic) _Bool hasDismissRadioButton; // @dynamic hasDismissRadioButton;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasSecondaryByline; // @dynamic hasSecondaryByline;
@property(nonatomic) _Bool hasSecondaryTitle; // @dynamic hasSecondaryTitle;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(retain, nonatomic) NSMutableArray *linksArray; // @dynamic linksArray;
@property(readonly, nonatomic) unsigned long long linksArray_Count; // @dynamic linksArray_Count;
@property(retain, nonatomic) YTIFormattedString *secondaryByline; // @dynamic secondaryByline;
@property(retain, nonatomic) YTIFormattedString *secondaryTitle; // @dynamic secondaryTitle;
@property(retain, nonatomic) YTIShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end


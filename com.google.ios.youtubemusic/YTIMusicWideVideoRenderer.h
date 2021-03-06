//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMOfflineVideoIDProtocol-Protocol.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIIcon, YTIMenuSupportedRenderers, YTIMusicWideVideoOfflineabilitySupportedRenderers, YTIMusicWideVideoThumbnailSupportedRenderers;

@interface YTIMusicWideVideoRenderer : GPBMessage <YTMOfflineVideoIDProtocol>
{
}

+ (id)descriptor;
- (id)ytm_offlineVideoID;

// Remaining properties
@property(retain, nonatomic) YTIIcon *bylineIcon; // @dynamic bylineIcon;
@property(retain, nonatomic) YTIFormattedString *bylineText; // @dynamic bylineText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBylineIcon; // @dynamic hasBylineIcon;
@property(nonatomic) _Bool hasBylineText; // @dynamic hasBylineText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasThumbnailRenderer; // @dynamic hasThumbnailRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIMusicWideVideoOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSMutableArray *thumbnailBadgesArray; // @dynamic thumbnailBadgesArray;
@property(readonly, nonatomic) unsigned long long thumbnailBadgesArray_Count; // @dynamic thumbnailBadgesArray_Count;
@property(retain, nonatomic) YTIMusicWideVideoThumbnailSupportedRenderers *thumbnailRenderer; // @dynamic thumbnailRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


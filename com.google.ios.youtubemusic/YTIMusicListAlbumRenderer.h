//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTMOfflinePlaylistIDProtocol-Protocol.h"

@class NSData, NSString, YTICommand, YTIFormattedString, YTIIosClientOfflineData, YTIMenuSupportedRenderers, YTIMusicListAlbumOfflineabilitySupportedRenderers, YTIMusicListAlbumThumbnailSupportedRenderers;

@interface YTIMusicListAlbumRenderer : GPBMessage <YTMOfflinePlaylistIDProtocol>
{
}

+ (id)descriptor;
+ (id)ytm_musicListAlbumRendererWithOfflinePlaylist:(id)arg1 useWatchEndpoint:(_Bool)arg2;
- (id)ytm_offlinePlaylistID;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *bylineText; // @dynamic bylineText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasBylineText; // @dynamic hasBylineText;
@property(nonatomic) _Bool hasIosClientOfflineData; // @dynamic hasIosClientOfflineData;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIIosClientOfflineData *iosClientOfflineData; // @dynamic iosClientOfflineData;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIMusicListAlbumOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIMusicListAlbumThumbnailSupportedRenderers *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

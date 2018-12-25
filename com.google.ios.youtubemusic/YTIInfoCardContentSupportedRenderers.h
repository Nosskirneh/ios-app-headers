//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICollaboratorInfoCardContentRenderer, YTIPlaylistInfoCardContentRenderer, YTIPollRenderer, YTIShoppingAdInfoCardContentRenderer, YTISimpleInfoCardContentRenderer, YTIVideoInfoCardContentRenderer;

@interface YTIInfoCardContentSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICollaboratorInfoCardContentRenderer *collaboratorInfoCardContentRenderer; // @dynamic collaboratorInfoCardContentRenderer;
@property(nonatomic) _Bool hasCollaboratorInfoCardContentRenderer; // @dynamic hasCollaboratorInfoCardContentRenderer;
@property(nonatomic) _Bool hasPlaylistInfoCardContentRenderer; // @dynamic hasPlaylistInfoCardContentRenderer;
@property(nonatomic) _Bool hasPollRenderer; // @dynamic hasPollRenderer;
@property(nonatomic) _Bool hasShoppingAdInfoCardContentRenderer; // @dynamic hasShoppingAdInfoCardContentRenderer;
@property(nonatomic) _Bool hasSimpleCardContentRenderer; // @dynamic hasSimpleCardContentRenderer;
@property(nonatomic) _Bool hasVideoInfoCardContentRenderer; // @dynamic hasVideoInfoCardContentRenderer;
@property(retain, nonatomic) YTIPlaylistInfoCardContentRenderer *playlistInfoCardContentRenderer; // @dynamic playlistInfoCardContentRenderer;
@property(retain, nonatomic) YTIPollRenderer *pollRenderer; // @dynamic pollRenderer;
@property(retain, nonatomic) YTIShoppingAdInfoCardContentRenderer *shoppingAdInfoCardContentRenderer; // @dynamic shoppingAdInfoCardContentRenderer;
@property(retain, nonatomic) YTISimpleInfoCardContentRenderer *simpleCardContentRenderer; // @dynamic simpleCardContentRenderer;
@property(retain, nonatomic) YTIVideoInfoCardContentRenderer *videoInfoCardContentRenderer; // @dynamic videoInfoCardContentRenderer;

@end


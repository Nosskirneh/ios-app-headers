//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConnectionMenuTitleRenderer, YTIMenuTitleRenderer, YTIMusicMenuTitleRenderer;

@interface YTIMenuTitleSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConnectionMenuTitleRenderer *connectionMenuTitleRenderer; // @dynamic connectionMenuTitleRenderer;
@property(nonatomic) _Bool hasConnectionMenuTitleRenderer; // @dynamic hasConnectionMenuTitleRenderer;
@property(nonatomic) _Bool hasMenuTitleRenderer; // @dynamic hasMenuTitleRenderer;
@property(nonatomic) _Bool hasMusicMenuTitleRenderer; // @dynamic hasMusicMenuTitleRenderer;
@property(retain, nonatomic) YTIMenuTitleRenderer *menuTitleRenderer; // @dynamic menuTitleRenderer;
@property(retain, nonatomic) YTIMusicMenuTitleRenderer *musicMenuTitleRenderer; // @dynamic musicMenuTitleRenderer;

@end

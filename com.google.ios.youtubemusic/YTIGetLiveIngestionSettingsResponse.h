//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILiveDashboardSharingRenderer, YTILiveIngestionSettingsRenderer, YTIResponseContext;

@interface YTIGetLiveIngestionSettingsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLiveDashboardSharingRenderer; // @dynamic hasLiveDashboardSharingRenderer;
@property(nonatomic) _Bool hasLiveIngestionSettingsRenderer; // @dynamic hasLiveIngestionSettingsRenderer;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTILiveDashboardSharingRenderer *liveDashboardSharingRenderer; // @dynamic liveDashboardSharingRenderer;
@property(retain, nonatomic) YTILiveIngestionSettingsRenderer *liveIngestionSettingsRenderer; // @dynamic liveIngestionSettingsRenderer;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end


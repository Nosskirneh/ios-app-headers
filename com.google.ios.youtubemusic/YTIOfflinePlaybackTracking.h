//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIVisualElement;

@interface YTIOfflinePlaybackTracking : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int audioFmt; // @dynamic audioFmt;
@property(copy, nonatomic) NSString *cpn; // @dynamic cpn;
@property(nonatomic) _Bool hasAudioFmt; // @dynamic hasAudioFmt;
@property(nonatomic) _Bool hasCpn; // @dynamic hasCpn;
@property(nonatomic) _Bool hasIsMainAppAutoOffline; // @dynamic hasIsMainAppAutoOffline;
@property(nonatomic) _Bool hasIsPartialPlayback; // @dynamic hasIsPartialPlayback;
@property(nonatomic) _Bool hasOfflineSourceVisualElement; // @dynamic hasOfflineSourceVisualElement;
@property(nonatomic) _Bool hasSelectedOfflineMode; // @dynamic hasSelectedOfflineMode;
@property(nonatomic) _Bool hasVideoFmt; // @dynamic hasVideoFmt;
@property(nonatomic) _Bool isMainAppAutoOffline; // @dynamic isMainAppAutoOffline;
@property(nonatomic) _Bool isPartialPlayback; // @dynamic isPartialPlayback;
@property(retain, nonatomic) YTIVisualElement *offlineSourceVisualElement; // @dynamic offlineSourceVisualElement;
@property(nonatomic) int selectedOfflineMode; // @dynamic selectedOfflineMode;
@property(nonatomic) int videoFmt; // @dynamic videoFmt;

@end


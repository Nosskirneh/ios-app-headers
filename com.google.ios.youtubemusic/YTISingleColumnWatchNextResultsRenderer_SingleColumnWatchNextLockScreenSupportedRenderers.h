//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTILockScreenRenderer, YTIUnpluggedLockScreenRenderer;

@interface YTISingleColumnWatchNextResultsRenderer_SingleColumnWatchNextLockScreenSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLockScreen; // @dynamic hasLockScreen;
@property(nonatomic) _Bool hasUnpluggedLockScreenRenderer; // @dynamic hasUnpluggedLockScreenRenderer;
@property(retain, nonatomic) YTILockScreenRenderer *lockScreen; // @dynamic lockScreen;
@property(retain, nonatomic) YTIUnpluggedLockScreenRenderer *unpluggedLockScreenRenderer; // @dynamic unpluggedLockScreenRenderer;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTPlaybackTrackingController, YTPlayerMacroState;
@protocol YTInstreamAd;

@protocol YTPlaybackTrackingControllerDelegate <NSObject>
- (id <YTInstreamAd>)currentAdForPlaybackTrackingController:(YTPlaybackTrackingController *)arg1;
- (YTPlayerMacroState *)contentPlayerMacroStateForPlaybackTrackingController:(YTPlaybackTrackingController *)arg1;
- (YTPlayerMacroState *)lastKnownAdPlayerMacroStateForPlaybackTrackingController:(YTPlaybackTrackingController *)arg1;
@end


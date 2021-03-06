//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTVideoPlayerOverlayProtocol-Protocol.h"

@class NSArray, YTIWatchNextResponse, YTPlayerHeartbeatController;
@protocol YTContentVideoPlayerOverlayDelegate, YTSingleVideoObservable;

@protocol YTContentVideoPlayerOverlayProtocol <YTVideoPlayerOverlayProtocol>
@property(nonatomic) __weak id <YTContentVideoPlayerOverlayDelegate> delegate;
- (void)setWatchNextResponse:(YTIWatchNextResponse *)arg1;
- (void)setMarkers:(NSArray *)arg1;

@optional
- (void)setActiveSingleVideo:(id <YTSingleVideoObservable>)arg1;
- (void)setCreatorEndscreenVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPlayerRenderingViewCustomFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)isAutonavEndscreenReady;
- (_Bool)isAutonavEndscreenActivated;
- (void)setPlayerHeartbeatController:(YTPlayerHeartbeatController *)arg1;
- (_Bool)shouldPreviousButtonReplayVideo;
- (void)setPlayerBarCardboardButtonEnabled:(_Bool)arg1;
@end


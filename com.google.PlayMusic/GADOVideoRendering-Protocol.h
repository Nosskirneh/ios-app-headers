//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayer;

@protocol GADOVideoRendering <NSObject>
- (void)optimizeVideoForAdVisibility:(_Bool)arg1;
- (void)disableVideoPlaybackOptimization;
- (void)resetVideoPlaybackOptimization;
- (void)enableVideoPlaybackOptimization;
- (void)setUpWithPlayer:(AVPlayer *)arg1;
@end

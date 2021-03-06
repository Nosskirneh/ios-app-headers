//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTNowPlayingModel;

@protocol SPTNowPlayingModelObserver <NSObject>
- (void)nowPlayingModel:(SPTNowPlayingModel *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(SPTNowPlayingModel *)arg1;

@optional
- (void)nowPlayingModel:(SPTNowPlayingModel *)arg1 toggleModeDidChange:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)nowPlayingModelDidSynchronizeQueue:(SPTNowPlayingModel *)arg1;
- (void)nowPlayingModelPreviousTrackDidChange:(SPTNowPlayingModel *)arg1;
- (void)nowPlayingModelNextTrackDidChange:(SPTNowPlayingModel *)arg1;
@end


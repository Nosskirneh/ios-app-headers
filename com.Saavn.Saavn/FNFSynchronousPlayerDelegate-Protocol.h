//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol FNFAssetForPlayer;

@protocol FNFSynchronousPlayerDelegate
- (void)playbackDidStall:(unsigned long long)arg1 didStartPlaying:(_Bool)arg2;
- (void)playerItemDidPlayToEndTime;
- (void)rateUpdated:(float)arg1;
- (void)currentItemUpdated:(id <FNFAssetForPlayer>)arg1;
- (void)statusUpdated:(long long)arg1;
@end


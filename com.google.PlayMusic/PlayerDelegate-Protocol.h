//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class PlayerAsset;

@protocol PlayerDelegate
- (void)audioPlayerDidMoveToAsset:(PlayerAsset *)arg1;
- (void)audioPlayerDidFinishPlayingAsset:(PlayerAsset *)arg1 progressAtCompletion:(double)arg2 willPlayNextAsset:(PlayerAsset *)arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVPlayerItem, SCImageView, SCPlayer;

@protocol SCPlayerDelegate <NSObject>

@optional
- (void)player:(SCPlayer *)arg1 didSetupSCImageView:(SCImageView *)arg2;
- (void)player:(SCPlayer *)arg1 itemReadyToPlay:(AVPlayerItem *)arg2;
- (void)player:(SCPlayer *)arg1 didReachEndForItem:(AVPlayerItem *)arg2;
- (void)player:(SCPlayer *)arg1 didChangeItem:(AVPlayerItem *)arg2;
- (void)player:(SCPlayer *)arg1 didPlay:(CDStruct_1b6d18a9)arg2 loopsCount:(long long)arg3;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNowPlayingBarModel;

@protocol SPTNowPlayingBarModelDelegate <NSObject>

@optional
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(SPTNowPlayingBarModel *)arg1;
- (void)nowPlayingBarModelDidUpdatePlayingState:(SPTNowPlayingBarModel *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTNowPlayingScrollViewModel, SPTPlayerTrack;

@protocol SPTNowPlayingScrollViewModelDelegate <NSObject>
- (void)nowPlayingScrollViewModelDidHideBanner:(SPTNowPlayingScrollViewModel *)arg1;
- (void)nowPlayingScrollViewModelDidChangeComponentProviders:(SPTNowPlayingScrollViewModel *)arg1;
- (void)nowPlayingScrollViewModelDidLoadFirstComponentProvider:(SPTNowPlayingScrollViewModel *)arg1 forTrack:(SPTPlayerTrack *)arg2;
- (void)nowPlayingScrollViewModel:(SPTNowPlayingScrollViewModel *)arg1 didMoveToRelativeTrack:(SPTPlayerTrack *)arg2;
@end


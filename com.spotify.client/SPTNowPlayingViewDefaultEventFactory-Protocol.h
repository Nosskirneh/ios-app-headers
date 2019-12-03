//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTEventFactoryModelMapping, SPTNowPlayingViewDefault_AlbumArtEventFactory, SPTNowPlayingViewDefault_BottomBarEventFactory, SPTNowPlayingViewDefault_PlaybackControlsEventFactory, SPTNowPlayingViewDefault_PlaybackProgressEventFactory, SPTNowPlayingViewDefault_ScrollComponentEventFactory, SPTNowPlayingViewDefault_TopBarEventFactory, SPTNowPlayingViewDefault_TrackActionsEventFactory;

@protocol SPTNowPlayingViewDefaultEventFactory <NSObject>
- (id <SPTNowPlayingViewDefault_ScrollComponentEventFactory>)scrollComponentFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2;
- (id <SPTNowPlayingViewDefault_BottomBarEventFactory>)bottomBarFactory;
- (id <SPTNowPlayingViewDefault_PlaybackControlsEventFactory>)playbackControlsFactory;
- (id <SPTNowPlayingViewDefault_PlaybackProgressEventFactory>)playbackProgressFactory;
- (id <SPTNowPlayingViewDefault_TrackActionsEventFactory>)trackActionsFactory;
- (id <SPTNowPlayingViewDefault_AlbumArtEventFactory>)albumArtFactory;
- (id <SPTNowPlayingViewDefault_TopBarEventFactory>)topBarFactory;
- (id <SPTEventFactoryModelMapping>)_location;
@end


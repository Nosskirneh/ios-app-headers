//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL, SPTPlayOrigin;
@protocol SPTPodcastPlayerDelegate;

@protocol SPTPodcastPlayer <NSObject>
@property(nonatomic) _Bool sortPlaybackOrder;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) _Bool isPlayingPodcastEpisode;
@property(readonly, nonatomic) double currentTrackDuration;
@property(readonly, nonatomic) double currentTrackPosition;
@property(readonly, nonatomic) double currentTrackProgress;
@property(readonly, nonatomic) NSURL *currentlyPlayingTrack;
@property(nonatomic) __weak id <SPTPodcastPlayerDelegate> delegate;
@property(readonly, nonatomic) NSURL *lastStateContextURI;
- (_Bool)resumePodcast:(NSURL *)arg1 episodeUrl:(NSURL *)arg2;
- (_Bool)seekInPodcast:(NSURL *)arg1 episodeUrl:(NSURL *)arg2 toPosition:(double)arg3;
- (_Bool)isActiveContextURI:(NSURL *)arg1;
- (_Bool)isActiveEpisodeURL:(NSURL *)arg1 inEntityURL:(NSURL *)arg2;
- (void)pausePodcast:(NSURL *)arg1 startEpisodeUrl:(NSURL *)arg2;
- (void)playPodcastWithContextURI:(NSURL *)arg1 itemID:(NSString *)arg2 fromTimestamp:(NSNumber *)arg3;
- (void)playPodcast:(NSURL *)arg1 withEpisodes:(NSArray *)arg2 withOrigin:(SPTPlayOrigin *)arg3 startEpisodeUrl:(NSURL *)arg4 fromTimestamp:(NSNumber *)arg5 resetPlay:(_Bool)arg6 completionHandler:(void (^)(NSError *))arg7;
- (void)playPodcast:(NSURL *)arg1 withEpisodes:(NSArray *)arg2 startEpisodeUrl:(NSURL *)arg3 fromTimestamp:(NSNumber *)arg4 resetPlay:(_Bool)arg5;
@end


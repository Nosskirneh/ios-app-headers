//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, SPTCanvasStreamingPlaybackManager;

@protocol SPTCanvasStreamingPlaybackManagerLoadDelegate <NSObject>
- (void)streamingPlaybackManager:(SPTCanvasStreamingPlaybackManager *)arg1 didFailToLoadAssetURL:(NSURL *)arg2 entityURI:(NSURL *)arg3 playbackOption:(long long)arg4;
- (void)streamingPlaybackManager:(SPTCanvasStreamingPlaybackManager *)arg1 didLoadAssetURL:(NSURL *)arg2 entityURI:(NSURL *)arg3 playbackOption:(long long)arg4;
- (void)streamingPlaybackManager:(SPTCanvasStreamingPlaybackManager *)arg1 willLoadAssetURL:(NSURL *)arg2 entityURI:(NSURL *)arg3 playbackOption:(long long)arg4;
- (void)streamingPlaybackManager:(SPTCanvasStreamingPlaybackManager *)arg1 streamingStartedManifestID:(NSString *)arg2 entityURI:(NSURL *)arg3 playbackOption:(long long)arg4;
@end

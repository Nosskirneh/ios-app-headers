//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (YTURL)
+ (_Bool)canOpenAppWithScheme:(id)arg1;
+ (id)webURLWithCanonicalBaseURL:(id)arg1;
+ (id)webURLWithChannelID:(id)arg1;
+ (id)webWatchURLWithPlaylistID:(id)arg1;
+ (id)webWatchURLWithVideoID:(id)arg1;
+ (id)launchYouTubeAppURL;
+ (id)launchURLWithAppScheme:(id)arg1;
+ (id)appWatchURLWithVideoID:(id)arg1;
- (_Bool)hasOneLevelPath;
- (id)sanitizedYouTubeURL;
- (id)YouTubeVideoFromURLWithNoYouTubeHost;
- (id)YouTubeVideoFromURLWithYouTubeHost;
- (_Bool)hasShortYouTubeHost;
- (_Bool)isRedirectURL;
- (_Bool)hasNoAppKey;
- (_Bool)shouldResolve;
- (_Bool)isYouTubeURL;
- (_Bool)hasYouTubeAppleScheme;
- (_Bool)hasYouTubeCustomScheme;
- (_Bool)hasExtension:(id)arg1;
- (_Bool)hasYouTubeHost;
- (id)safeStringOrNilWithString:(id)arg1;
- (id)YouTubeChannelID;
- (id)YouTubePlaylistID;
- (id)YouTubeClientVideoID;
- (id)YouTubeVideoID;
- (_Bool)isAssetsLibraryURL;
- (_Bool)isGoogleAdNetworkPing;
@end


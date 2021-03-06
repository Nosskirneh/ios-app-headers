//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPSessionManager.h"

@class FXKeychain, NSMutableArray, NSString;

@interface VOXLastFMManager : AFHTTPSessionManager
{
    NSString *_sessionKey;
    NSMutableArray *_scrobblesQueue;
    FXKeychain *_keychain;
}

+ (id)pathToScrobbleCache;
+ (id)shared;
@property(retain, nonatomic) FXKeychain *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) NSMutableArray *scrobblesQueue; // @synthesize scrobblesQueue=_scrobblesQueue;
- (void).cxx_destruct;
- (void)logout;
- (void)searchArtworkForAlbum:(id)arg1 artist:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)searchArtworkForTrack:(id)arg1 artist:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)searchArtworkForArtist2:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)searchArtworkForArtist:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_methodSignatureWithParameters:(id)arg1;
- (void)retrieveAndStoreSessionKeyWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)handleOAuthURL:(id)arg1;
- (id)oauthURL;
- (id)completeParams:(id)arg1;
- (id)apiSecret;
- (id)apiKey;
- (void)updateNowPlayingTrackWithName:(id)arg1 album:(id)arg2 artist:(id)arg3 albumArtist:(id)arg4 trackNumber:(long long)arg5 duration:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)scrobbleTrackWithName:(id)arg1 album:(id)arg2 artist:(id)arg3 albumArtist:(id)arg4 trackNumber:(long long)arg5 duration:(long long)arg6 timestamp:(long long)arg7;
- (void)setNeedFlush;
- (void)flushScrobbles;
- (void)saveScrobblesQueue;
- (void)didScrobble:(id)arg1;
- (void)addScrobble:(id)arg1;
@property(retain, nonatomic) NSString *sessionKey; // @synthesize sessionKey=_sessionKey;
@property(retain, nonatomic) NSString *userName;
@property(readonly, nonatomic) _Bool authorized;
@property(nonatomic) _Bool sendCurrentTrackInfo;
@property(nonatomic) _Bool scrobblingEnabled;
- (void)setUp;

@end


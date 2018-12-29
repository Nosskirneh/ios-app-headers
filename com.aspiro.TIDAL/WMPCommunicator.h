//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WMPCommunicator : NSObject
{
}

+ (id)encodeSHA256:(id)arg1 withSecret:(id)arg2;
+ (id)generateJWTStringWithDictionary:(id)arg1;
+ (id)loadCachedResponseForUrl:(id)arg1;
+ (_Bool)hasCachedResponseForUrl:(id)arg1;
+ (id)createErrorFromHttpResponse:(id)arg1 withSubStatus:(long long)arg2;
+ (void)addSessionHeadersToRequest:(id)arg1;
+ (id)urlEncodeString:(id)arg1;
+ (void)performRequest:(CDUnknownBlockType)arg1 session:(id)arg2 request:(id)arg3 makeQuiet:(_Bool)arg4;
+ (void)performRequest:(CDUnknownBlockType)arg1 session:(id)arg2 request:(id)arg3;
+ (void)setHTTPBodyWithClientId:(id)arg1 clientName:(id)arg2 request:(id)arg3;
+ (void)setHTTPBodyWithAlbumId:(id)arg1 request:(id)arg2;
+ (void)setHTTPBodyWithVideoIds:(id)arg1 request:(id)arg2;
+ (void)setHTTPBodyWithTrackId:(id)arg1 request:(id)arg2;
+ (void)setHTTPBodyWithArtistId:(id)arg1 request:(id)arg2;
+ (void)setHTTPBodyWithPlaylistUUID:(id)arg1 request:(id)arg2;
+ (void)setHTTPBodyWithUUID:(id)arg1 request:(id)arg2;
+ (void)setEtagHeaderField:(id)arg1 request:(id)arg2;
+ (void)postRequestWithUrl:(id)arg1 withEtag:(id)arg2 withData:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)deleteRequestWithUrl:(id)arg1 withEtag:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)postTwitterLoginRequest:(id)arg1 accessToken:(id)arg2 accessTokenSecret:(id)arg3 clientUniqueKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)postFacebookLoginRequest:(id)arg1 withToken:(id)arg2 clientUniqueKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postLoginRequest:(id)arg1 withToken:(id)arg2 clientUniqueKey:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postLoginRequest:(id)arg1 withUserName:(id)arg2 password:(id)arg3 clientUniqueKey:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)postRequestWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)postRequestWithUrl:(id)arg1 withClientId:(id)arg2 clientName:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withAlbumId:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withBody:(id)arg2 withEtag:(id)arg3 contentTypeJson:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)postRequestWithUrl:(id)arg1 withBody:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withBody:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)postRequestWithUrl:(id)arg1 withVideoIds:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withTrackId:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withArtistId:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withPlaylistUUID:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)postRequestWithUrl:(id)arg1 withUUID:(id)arg2 withEtag:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getRequestWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getRequestWithUrl:(id)arg1 withEtag:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLHLSPlaylistData, MLRemoteStream, NSData, NSURL;

@protocol MLHLSPlaylistCacheResolver <NSObject>
- (void)updateStalePlaylistData:(MLHLSPlaylistData *)arg1 forStream:(MLRemoteStream *)arg2 withFreshData:(NSData *)arg3 completionBlock:(void (^)(MLHLSPlaylistData *, MLHLSDGMediaPlaylist *, NSError *))arg4;
- (NSURL *)URLForStream:(MLRemoteStream *)arg1 withStalePlaylistData:(MLHLSPlaylistData *)arg2;
@end


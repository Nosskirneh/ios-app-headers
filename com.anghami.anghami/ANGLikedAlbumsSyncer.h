//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ANGLikedAlbumsSyncer : NSObject
{
}

+ (void)clearLikedAlbums;
+ (void)unlikeAlbum:(id)arg1;
+ (void)likeAlbum:(id)arg1;
+ (void)cleanAlbumSongs;
+ (void)cleanOldChangesets;
+ (void)reportLikedAlbums;
+ (void)_syncPendingChangesets;
+ (void)syncPendingChangesets;
+ (void)updateLikedAlbumsFromServerAlbums:(id)arg1;
+ (void)syncLikedAlbums;
+ (void)initiateLikeAlbums;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface DZRCarPlayContentItemProvider : NSObject
{
    NSCache *_itemCache;
}

@property(retain, nonatomic) NSCache *itemCache; // @synthesize itemCache=_itemCache;
- (void).cxx_destruct;
- (id)dzrContentItemForArtistRadio:(id)arg1;
- (id)dzrContentItemForArtist:(id)arg1;
- (id)dzrContentItemForAlbum:(id)arg1;
- (id)dzrContentItemForTrack:(id)arg1 inAlbum:(id)arg2;
- (id)dzrContentItemForTrack:(id)arg1 inPlaylist:(id)arg2;
- (id)dzrContentItemForPlaylist:(id)arg1;
- (id)dzrContentItemForRandomAlbum:(id)arg1;
- (id)dzrContentItemForRandomPlaylist:(id)arg1;
- (id)dzrContentItemForFlow;
- (id)dzrContentItemForArtists;
- (id)dzrContentItemForAlbums;
- (id)dzrContentItemForPlaylists;
- (id)dzrContentItemForNotAllowed;
- (id)dzrContentItemForDisconnected;
- (id)dzrContentItemForLostConnection;
- (id)dzrContentItemForLoading;
- (id)dzrContentItemForInitializing;
- (id)contentItemWithIdentifier:(id)arg1 andTitle:(id)arg2 andSubtitle:(id)arg3 isSync:(_Bool)arg4;
- (id)contentItemForIdentifier:(id)arg1;
- (void)downloadImage:(id)arg1 forItem:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CustomUITableViewCell.h"

@class ANGPlaylist;

@interface PlaylistUITableViewCell : CustomUITableViewCell
{
    _Bool _isDownloading;
    ANGPlaylist *_serverPlaylist;
}

+ (id)darkDownloadingImage;
+ (id)lightDownloadingImage;
@property(nonatomic) _Bool isDownloading; // @synthesize isDownloading=_isDownloading;
@property(retain, nonatomic) ANGPlaylist *serverPlaylist; // @synthesize serverPlaylist=_serverPlaylist;
- (void).cxx_destruct;
- (void)showPlaylistInfoAsSubtitle;
- (void)presentContextSheet:(id)arg1;
- (_Bool)isCurrentlyPlaying;
- (void)refreshIsDownloading;
- (void)refreshStarredAndDownloaded;
- (_Bool)isDownloaded;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectContext, VOXSoundCloudPlaylistModel, VOXSoundCloudTrackModel;

@interface VOXMediaLibrarySoundCloudStorageFactory : NSObject
{
    NSManagedObjectContext *_context;
    VOXSoundCloudPlaylistModel *_soundCloudPlaylist;
    VOXSoundCloudTrackModel *_soundCloudTrack;
}

@property(readonly, nonatomic) VOXSoundCloudTrackModel *soundCloudTrack; // @synthesize soundCloudTrack=_soundCloudTrack;
@property(readonly, nonatomic) VOXSoundCloudPlaylistModel *soundCloudPlaylist; // @synthesize soundCloudPlaylist=_soundCloudPlaylist;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)productTrackForAlbum:(id)arg1;
- (id)productAlbumWithArtist:(id)arg1;
- (id)productArtist;
- (id)productUserCollection;
- (id)initWithSoundCloudTrack:(id)arg1 context:(id)arg2;
- (id)initWithSoundCloudPlaylist:(id)arg1 context:(id)arg2;

@end


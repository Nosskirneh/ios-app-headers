//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationDatasource-Protocol.h"

@class NSString, NSURL;
@protocol SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTAssistedCurationPlaylistDatasource : NSObject <SPTAssistedCurationDatasource>
{
    NSURL *_playlistURI;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
- (void).cxx_destruct;
- (void)removeTrack:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addTrack:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hasTracks:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hasTrack:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchNameAndTracksWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPlaylistURI:(id)arg1 playlistModel:(id)arg2 playlistDataLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

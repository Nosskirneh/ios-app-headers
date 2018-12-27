//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NewApiCoreDataAdapter-Protocol.h"

@class CDUser, NSEntityDescription, NSManagedObjectContext, NSString, PlaylistAdapter;

@interface UserPostedPlaylistAdapter : NSObject <NewApiCoreDataAdapter>
{
    NSManagedObjectContext *_context;
    NSEntityDescription *_entityDescription;
    PlaylistAdapter *_playlistAdapter;
    CDUser *_user;
}

@property(readonly, nonatomic) CDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) PlaylistAdapter *playlistAdapter; // @synthesize playlistAdapter=_playlistAdapter;
@property(readonly, nonatomic) NSEntityDescription *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)userPostedPlaylistWithPlaylist:(id)arg1 user:(id)arg2;
- (void)adaptUserPostedPlaylistsWithPlaylists:(id)arg1 collection:(id)arg2;
- (id)adapt:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 user:(id)arg2 playlistAdapter:(id)arg3;
- (id)initWithManagedObjectContext:(id)arg1 user:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierCollectionItemViewModel-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierCollectionAlbumEntity, SPTFreeTierCollectionArtistEntity, SPTFreeTierCollectionFolderEntity, SPTFreeTierCollectionPlaylistEntity, SPTFreeTierCollectionPodcastEntity, SPTFreeTierCollectionSongEntity, SPTFreeTierCollectionTestManager;

@interface SPTFreeTierCollectionItemViewModelImplementation : NSObject <SPTFreeTierCollectionItemViewModel>
{
    _Bool showOverlayMask;
    _Bool _locked;
    _Bool _onDemand;
    _Bool _showDecorationOverlay;
    id <SPTFreeTierCollectionTestManager> _testManager;
    id <SPTFreeTierCollectionPlaylistEntity> _playlistEntity;
    id <SPTFreeTierCollectionAlbumEntity> _albumEntity;
    id <SPTFreeTierCollectionArtistEntity> _artistEntity;
    id <SPTFreeTierCollectionPodcastEntity> _podcastEntity;
    id <SPTFreeTierCollectionSongEntity> _songEntity;
    id <SPTFreeTierCollectionFolderEntity> _folderEntity;
    unsigned long long _type;
    NSURL *_URL;
    NSString *_subtitle;
    long long _offlineStatus;
}

+ (long long)trackOfflineSyncStatusForSPTOfflineAvailability:(unsigned long long)arg1;
+ (long long)offlineSyncStatusForSPTOfflineAvailability:(unsigned long long)arg1;
@property(nonatomic) long long offlineStatus; // @synthesize offlineStatus=_offlineStatus;
@property(nonatomic) _Bool showDecorationOverlay; // @synthesize showDecorationOverlay=_showDecorationOverlay;
@property(nonatomic) _Bool onDemand; // @synthesize onDemand=_onDemand;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <SPTFreeTierCollectionFolderEntity> folderEntity; // @synthesize folderEntity=_folderEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionSongEntity> songEntity; // @synthesize songEntity=_songEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionPodcastEntity> podcastEntity; // @synthesize podcastEntity=_podcastEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionArtistEntity> artistEntity; // @synthesize artistEntity=_artistEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionAlbumEntity> albumEntity; // @synthesize albumEntity=_albumEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionPlaylistEntity> playlistEntity; // @synthesize playlistEntity=_playlistEntity;
@property(retain, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) _Bool showOverlayMask; // @synthesize showOverlayMask;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFolder) _Bool folder;
@property(readonly, nonatomic, getter=isOfflineAvailable) _Bool offlineAvailable;
@property(readonly, nonatomic, getter=isShuffle) _Bool isShuffle;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *title;
- (id)initWithItemModelEntity:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicPlaylistModelItemEntity-Protocol.h"

@class NSString;
@protocol SPTYourLibraryMusicFolderEntity, SPTYourLibraryMusicLikedSongsModelEntity, SPTYourLibraryMusicPlaylistEntity;

@interface SPTYourLibraryMusicPlaylistModelItemEntityImplementation : NSObject <SPTYourLibraryMusicPlaylistModelItemEntity>
{
    _Bool _onDemand;
    unsigned long long _type;
    id <SPTYourLibraryMusicPlaylistEntity> _playlistEntity;
    id <SPTYourLibraryMusicFolderEntity> _folderEntity;
    id <SPTYourLibraryMusicLikedSongsModelEntity> _favoriteMixEntity;
    NSString *_personalizedByline;
}

@property(copy, nonatomic) NSString *personalizedByline; // @synthesize personalizedByline=_personalizedByline;
@property(nonatomic, getter=isOnDemand) _Bool onDemand; // @synthesize onDemand=_onDemand;
@property(retain, nonatomic) id <SPTYourLibraryMusicLikedSongsModelEntity> favoriteMixEntity; // @synthesize favoriteMixEntity=_favoriteMixEntity;
@property(retain, nonatomic) id <SPTYourLibraryMusicFolderEntity> folderEntity; // @synthesize folderEntity=_folderEntity;
@property(retain, nonatomic) id <SPTYourLibraryMusicPlaylistEntity> playlistEntity; // @synthesize playlistEntity=_playlistEntity;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

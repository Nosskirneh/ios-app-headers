//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTService.h"

@class NSURL;

@protocol SPTFreeTierCollectionService <SPTService>
- (id <SPTFreeTierCollectionTestManager>)provideTestManager;
- (id <SPTFreeTierCollectionSongsModel>)provideSongsEntityModel;
- (id <SPTFreeTierCollectionEntityModel>)providePodcastsEntityModel;
- (id <SPTFreeTierCollectionEntityModel>)provideArtistsEntityModel;
- (id <SPTFreeTierCollectionEntityModel>)provideAlbumsEntityModel;
- (id <SPTFreeTierCollectionPlaylistsModel>)providePlaylistsModel:(NSURL *)arg1;
@end

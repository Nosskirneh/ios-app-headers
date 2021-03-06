//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_VOXCollectionEntity.h"

#import "VOXMediaLibraryCollectionsProtocol-Protocol.h"
#import "VOXPlayableItemContainerProtocol-Protocol.h"
#import "_TtP3VOX21DownloadableContainer_-Protocol.h"

@class NSArray, NSString;

@interface VOXCollectionEntity : _VOXCollectionEntity <VOXMediaLibraryCollectionsProtocol, VOXPlayableItemContainerProtocol, _TtP3VOX21DownloadableContainer_>
{
}

+ (id)spotifyPlaylistMapping;
- (void)downloadableItems:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSArray *downloadedItems;
@property(readonly, copy, nonatomic) NSArray *downloadableItems;
@property(readonly, nonatomic) _Bool canBeDownloaded;
- (id)vx_containerArtworkURL;
- (id)vx_containerArtistName;
- (id)vx_containerName;
- (id)trackCellInTableView:(id)arg1 forRowAtIndexPath:(id)arg2;
- (double)itemHeightInList;
- (id)collectionDescription;
- (id)collectionSubTitle;
- (id)collectionTitle;
- (id)items;
- (id)collectionUUID;
- (_Bool)isContainMediaItem:(id)arg1;
- (void)refreshArtwork;
- (void)recalculatePlayableDuration;
- (void)addTracksObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


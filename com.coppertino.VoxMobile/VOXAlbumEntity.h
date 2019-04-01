//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_VOXAlbumEntity.h"

#import "VOXItemStateIndicatorProvider-Protocol.h"
#import "VOXMediaLibraryCollectionsProtocol-Protocol.h"
#import "VOXMediaLibraryItemsListProtocol-Protocol.h"
#import "VOXPlayableItemContainerProtocol-Protocol.h"

@class NSError, NSString;

@interface VOXAlbumEntity : _VOXAlbumEntity <VOXItemStateIndicatorProvider, VOXMediaLibraryCollectionsProtocol, VOXMediaLibraryItemsListProtocol, VOXPlayableItemContainerProtocol>
{
    _Bool _loadingContent;
    NSError *_loadingContentError;
}

+ (id)unknownAlbum;
@property(retain, nonatomic) NSError *loadingContentError; // @synthesize loadingContentError=_loadingContentError;
@property(nonatomic) _Bool loadingContent; // @synthesize loadingContent=_loadingContent;
- (void).cxx_destruct;
- (_Bool)cs_shouldIndex;
- (_Bool)shouldIndexForSearch;
- (unsigned long long)ftsEntityType;
- (void)sortTracks;
- (void)loadContentIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadContentIfNeeded;
- (id)allTracksSortedArray;
- (id)allTracksArray;
- (void)setTitleForSort:(id)arg1;
- (void)awakeFromFetch;
- (void)refreshArtwork;
- (id)trackCellInTableView:(id)arg1 forRowAtIndexPath:(id)arg2;
- (double)itemHeightInList;
- (id)collectionDescription;
- (id)collectionSubTitle;
- (id)collectionTitle;
- (id)items;
- (id)collectionUUID;
- (id)vx_containerArtworkURL;
- (id)vx_containerArtistName;
- (id)vx_containerName;
- (id)uuidOfTracks;
- (_Bool)displayLikeIndication;
- (id)itemUUIDForIndication;
- (id)allDownloadedTracksArray;
- (void)addTracksObject:(id)arg1;
- (id)ftsSearchIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


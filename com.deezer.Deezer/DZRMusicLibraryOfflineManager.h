//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRMusicLibrarySynchronizerObserver-Protocol.h"

@class DZRMusicLibraryRegisteredCollectionsObserver, DZRMusicLibraryStateCache, DZRMusicLibrarySynchronizationUpdater, DZRMusicLibrarySynchronizer, NSString;

@interface DZRMusicLibraryOfflineManager : NSObject <DZRMusicLibrarySynchronizerObserver>
{
    DZRMusicLibrarySynchronizer *_synchronizer;
    DZRMusicLibraryStateCache *_stateCache;
    DZRMusicLibraryRegisteredCollectionsObserver *_collectionsObserver;
    DZRMusicLibrarySynchronizationUpdater *_updater;
}

@property(retain, nonatomic) DZRMusicLibrarySynchronizationUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) DZRMusicLibraryRegisteredCollectionsObserver *collectionsObserver; // @synthesize collectionsObserver=_collectionsObserver;
@property(retain, nonatomic) DZRMusicLibraryStateCache *stateCache; // @synthesize stateCache=_stateCache;
@property(retain, nonatomic) DZRMusicLibrarySynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
- (void).cxx_destruct;
- (void)synchronizerDidFailDownloadingPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidDeletePlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidDownloadPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidProgressWithPlayable:(id)arg1 progress:(float)arg2 collectionID:(id)arg3;
- (void)synchronizerDidCancelDownloadOfPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerWillDownloadPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidUnregisterAllCollections;
- (void)synchronizerDidUnregisterCollectionForSynchronization:(id)arg1;
- (void)synchronizerDidRegisterCollectionForSynchronization:(id)arg1 availablePlayables:(id)arg2;
- (void)dispose;
- (id)initWithOwnerID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


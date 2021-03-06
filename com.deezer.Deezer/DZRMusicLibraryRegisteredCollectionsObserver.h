//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRMusicLibrarySynchronizerObserver-Protocol.h"

@class DZRMusicLibraryStateCache, DZRMusicLibrarySynchronizationUpdater, DZRMusicLibrarySynchronizer, DZRObservationNotifier, NSMutableDictionary, NSString;

@interface DZRMusicLibraryRegisteredCollectionsObserver : NSObject <DZRMusicLibrarySynchronizerObserver>
{
    NSMutableDictionary *_removeObservationByCollectionIDs;
    DZRObservationNotifier *_delegatesNotifier;
    DZRMusicLibrarySynchronizer *_synchronizer;
    DZRMusicLibraryStateCache *_stateCache;
    DZRMusicLibrarySynchronizationUpdater *_updater;
}

@property(nonatomic) __weak DZRMusicLibrarySynchronizationUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) __weak DZRMusicLibraryStateCache *stateCache; // @synthesize stateCache=_stateCache;
@property(retain, nonatomic) DZRMusicLibrarySynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
@property(retain, nonatomic) DZRObservationNotifier *delegatesNotifier; // @synthesize delegatesNotifier=_delegatesNotifier;
@property(retain, nonatomic) NSMutableDictionary *removeObservationByCollectionIDs; // @synthesize removeObservationByCollectionIDs=_removeObservationByCollectionIDs;
- (void).cxx_destruct;
- (void)notifyDidObserveRemovedPlayables:(id)arg1 addedPlayables:(id)arg2 availablePlayables:(id)arg3 forCollection:(id)arg4;
- (void)notifyDidObserveAddedPlayablesForAddedCollections:(id)arg1 availablesPlayablesByCollections:(id)arg2;
- (void)notifyDidObserveRemovedPlayablesForRemovedCollections:(id)arg1;
- (void)notifyObservationStoppedForCollections:(id)arg1 started:(id)arg2;
- (void)synchronizerDidFailDownloadingPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidDeletePlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidDownloadPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidProgressWithPlayable:(id)arg1 progress:(float)arg2 collectionID:(id)arg3;
- (void)synchronizerDidCancelDownloadOfPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerWillDownloadPlayable:(id)arg1 collectionID:(id)arg2;
- (void)synchronizerDidUnregisterAllCollections;
- (void)synchronizerDidUnregisterCollectionForSynchronization:(id)arg1;
- (void)synchronizerDidRegisterCollectionForSynchronization:(id)arg1 availablePlayables:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)stopObservingPlayablesFromCollection:(id)arg1;
- (_Bool)startObservingPlayablesFromCollection:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)stopAllObservations;
- (void)updateObservationOnPreviouslyOwnedCollections:(id)arg1 updatedCollections:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSynchronizer:(id)arg1 stateCache:(id)arg2 updater:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


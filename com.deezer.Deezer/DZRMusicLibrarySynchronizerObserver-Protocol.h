//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString;
@protocol DZRPlayableObject, DZRQueueableCollection;

@protocol DZRMusicLibrarySynchronizerObserver <NSObject>
- (void)synchronizerDidFailDownloadingPlayable:(id <DZRPlayableObject>)arg1 collectionID:(NSString *)arg2;
- (void)synchronizerDidDeletePlayable:(id <DZRPlayableObject>)arg1 collectionID:(NSString *)arg2;
- (void)synchronizerDidProgressWithPlayable:(id <DZRPlayableObject>)arg1 progress:(float)arg2 collectionID:(NSString *)arg3;
- (void)synchronizerDidDownloadPlayable:(id <DZRPlayableObject>)arg1 collectionID:(NSString *)arg2;
- (void)synchronizerDidCancelDownloadOfPlayable:(id <DZRPlayableObject>)arg1 collectionID:(NSString *)arg2;
- (void)synchronizerWillDownloadPlayable:(id <DZRPlayableObject>)arg1 collectionID:(NSString *)arg2;
- (void)synchronizerDidUnregisterAllCollections;
- (void)synchronizerDidUnregisterCollectionForSynchronization:(id <DZRQueueableCollection>)arg1;
- (void)synchronizerDidRegisterCollectionForSynchronization:(id <DZRQueueableCollection>)arg1 availablePlayables:(NSSet *)arg2;
@end


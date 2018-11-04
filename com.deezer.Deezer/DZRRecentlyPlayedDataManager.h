//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;

@interface DZRRecentlyPlayedDataManager : NSObject
{
    NSMutableArray *_recentlyPlayed;
    id _observer;
}

+ (id)playingCollectionForRecentlyPlayedCollection:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSMutableArray *recentlyPlayed; // @synthesize recentlyPlayed=_recentlyPlayed;
- (void).cxx_destruct;
- (void)startObservingNotifications;
- (void)recentlyPlayedCollectionsForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recentlyPlayedCollectionsForUser:(id)arg1;
- (_Bool)userHasRecentlyPlayedCollections:(id)arg1;
- (void)deduplicateRecentlyPlayed;
- (void)sortAndPurgeRecentlyPlayedList;
- (void)addItemsFromList:(id)arg1 forUser:(id)arg2;
- (void)playlistDeleted:(id)arg1;
- (void)insertCollection:(id)arg1;
- (_Bool)canBeRecentlyPlayed:(id)arg1;
- (void)saveRecentlyPlayedData;
- (void)loadRecentlyPlayedData;
@property(readonly) NSURL *recentlyPlayedDataURL;
- (void)clearRecentlyPlayed;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRProfileDynamicItem-Protocol.h"
#import "DZRQueueableCollection-Protocol.h"
#import "DZRShareable-Protocol.h"
#import "DeezerBrowsable-Protocol.h"
#import "_TtP6Deezer15DZRSortableItem_-Protocol.h"

@class DBPlaylist, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, NSURL;

@interface DeezerRadio : NSObject <DZRProfileDynamicItem, DZRShareable, DZRQueueableCollection, _TtP6Deezer15DZRSortableItem_, DeezerBrowsable>
{
    NSString *deezerId;
    NSString *_name;
    long long capabilities;
    NSArray *tracks;
    _Bool tracksRequestIsLoading;
    _Bool hasSmartRadio;
    _Bool isSmartRadio;
    _Bool isUsableInFreeMode;
    NSMutableArray *smartRadioLastSkipTimes;
    DBPlaylist *dbPlaylist;
    _Bool shouldCleanTracks;
    NSString *onAir;
    NSArray *artistsIntoRadio;
    NSString *artistsIntoRadioString;
    _Bool isTopArtistRadio;
    _Bool _tracksRequested;
    _Bool _onlineTracksRequested;
    _Bool _radioHasUnlimitedSkips;
    NSString *artistIdForTop;
    NSString *_coverSeed;
    NSString *_coverUrlString;
    NSURL *_coverURL40_40;
    NSURL *_coverURL80_80;
    NSURL *_coverURL90_90;
    NSURL *_coverURL340_340;
    NSString *_uniqueID;
    unsigned long long _uniqueIDHash;
    NSDictionary *_cachedSortableProperty;
}

+ (id)coversQueue;
+ (void)prepareRadioSkipsForNewUser;
+ (id)globalRadioSkipsArrayWithSkipLimit:(unsigned long long)arg1;
+ (void)resetSkips;
+ (void)saveCurrentRadioSkipsArray:(id)arg1 forUser:(id)arg2;
+ (id)getRadioSkipsArrayForUser:(id)arg1;
+ (void)sortCollectionsInSeparatedArraysBySynchronizationStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sortCollectionsBySynchronizationStatus:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSDictionary *cachedSortableProperty; // @synthesize cachedSortableProperty=_cachedSortableProperty;
@property(nonatomic) _Bool radioHasUnlimitedSkips; // @synthesize radioHasUnlimitedSkips=_radioHasUnlimitedSkips;
@property(nonatomic) unsigned long long uniqueIDHash; // @synthesize uniqueIDHash=_uniqueIDHash;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) _Bool onlineTracksRequested; // @synthesize onlineTracksRequested=_onlineTracksRequested;
@property(nonatomic) _Bool tracksRequested; // @synthesize tracksRequested=_tracksRequested;
@property(retain, nonatomic) NSURL *coverURL340_340; // @synthesize coverURL340_340=_coverURL340_340;
@property(retain, nonatomic) NSURL *coverURL90_90; // @synthesize coverURL90_90=_coverURL90_90;
@property(retain, nonatomic) NSURL *coverURL80_80; // @synthesize coverURL80_80=_coverURL80_80;
@property(retain, nonatomic) NSURL *coverURL40_40; // @synthesize coverURL40_40=_coverURL40_40;
@property(retain, nonatomic) NSString *coverUrlString; // @synthesize coverUrlString=_coverUrlString;
@property(retain, nonatomic) NSString *coverSeed; // @synthesize coverSeed=_coverSeed;
@property(copy, nonatomic) NSString *artistIdForTop; // @synthesize artistIdForTop;
@property(nonatomic) _Bool isTopArtistRadio; // @synthesize isTopArtistRadio;
@property(retain, nonatomic) NSString *onAir; // @synthesize onAir;
@property(retain, nonatomic) NSString *artistsIntoRadioString; // @synthesize artistsIntoRadioString;
@property(retain, nonatomic) NSArray *artistsIntoRadio; // @synthesize artistsIntoRadio;
@property(nonatomic) _Bool shouldCleanTracks; // @synthesize shouldCleanTracks;
@property(nonatomic) _Bool tracksRequestIsLoading; // @synthesize tracksRequestIsLoading;
@property(retain, nonatomic) DBPlaylist *dbPlaylist; // @synthesize dbPlaylist;
@property _Bool isUsableInFreeMode; // @synthesize isUsableInFreeMode;
@property(nonatomic) _Bool isSmartRadio; // @synthesize isSmartRadio;
@property _Bool hasSmartRadio; // @synthesize hasSmartRadio;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks;
@property long long capabilities; // @synthesize capabilities;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *deezerId; // @synthesize deezerId;
- (void).cxx_destruct;
- (id)illustrations;
- (id)illustration;
- (id)sortableProperties;
- (unsigned long long)trackIndexWithTrackId:(id)arg1;
- (id)generateDerivedMixStartingWithTrack:(id)arg1;
- (_Bool)startPlayingWithListeningContext:(id)arg1 startingWithTrack:(id)arg2 shufflingTrack:(_Bool)arg3;
- (_Bool)startPlayingWithListeningContext:(id)arg1 startingWithTrack:(id)arg2;
- (_Bool)startPlayingWithListeningContext:(id)arg1 startingAtIndex:(unsigned long long)arg2 shufflingTrack:(_Bool)arg3;
- (_Bool)startPlayingWithListeningContext:(id)arg1 shufflingTrack:(_Bool)arg2;
- (_Bool)startPlayingWithListeningContext:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (_Bool)startPlayingWithListeningContext:(id)arg1;
- (id)domain;
- (_Bool)hasPlayableContent;
- (_Bool)showProgress;
- (_Bool)showAddToPlaylistButton;
- (_Bool)showRandomButton;
- (_Bool)showTracksButton;
- (_Bool)showPreviousTrackButton;
- (_Bool)showNextTrackButton;
- (_Bool)canPlayAllTracks;
- (void)clean;
- (void)refreshOnlineTracks;
- (_Bool)tracksNeverRead;
- (void)canCleanTracks;
- (void)forceCleanTracks;
- (id)onlineTracks;
- (void)downloadTracks;
- (_Bool)isMarkedAsExpired;
- (void)applyReceivedTracks:(id)arg1;
- (_Bool)handleReceivedTracksData:(id)arg1;
- (long long)smartRadioRemainingSkips;
- (_Bool)smartRadioSkipIsAllowed;
- (double)smartRadioNextSkipTime;
- (_Bool)smartRadioCanSkip;
- (_Bool)canBePlayedOffline;
- (unsigned long long)coverType;
- (id)coverURLForSize:(id)arg1;
@property(retain, nonatomic) NSURL *coverUrl;
- (id)prefixForImages;
- (void)dealloc;
- (void)resetSkips;
- (_Bool)willSkipToNextTrack;
- (void)displayMessageForUnAuthorizedSkips;
- (long long)sort:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (id)itemIDForBrowsableWithId:(id)arg1 type:(id)arg2 inSection:(id)arg3 atIndex:(long long)arg4;
- (id)DZROfflineSearchObjectGetState;
- (id)mailSubject;
- (id)messageForActivityType:(id)arg1;
- (id)shareLinkURL;
- (void)sortReceivedTracks:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)customShuffler;
- (id)synchronizer;
- (void)playbackQueuer:(id)arg1 didPerfomForwardSelection:(id)arg2;
- (void)playbackQueuer:(id)arg1 didPerfomBackwardSelection:(id)arg2;
- (_Bool)playbackQueuer:(id)arg1 canPerfomForwardSelection:(id)arg2;
- (_Bool)playbackQueuer:(id)arg1 canPerfomBackwardSelection:(id)arg2;
- (_Bool)playbackQueuerIsAllowedToSkipForward:(id)arg1;
- (_Bool)playbackQueuerIsAllowedToSkipBackward:(id)arg1;
- (void)downloadCoverImageForOffline;
- (_Bool)shouldSkipWhenContentNotAvailableInOffline;
- (_Bool)playerIsAllowedToDisplayNextTracks;
- (_Bool)isFlowMode;
- (_Bool)repeatIsAllowed;
- (_Bool)shuffleIsAllowed;
- (_Bool)seekIsAllowed;
- (_Bool)isQueueListEditable;
- (_Bool)canBeQueued;
- (unsigned long long)collectionType;
- (id)displayType;
- (id)displayName;
- (id)objectID;
- (id)deezerID;
- (void)deleteAllPlayables;
- (void)downloadAllPlayables;
- (_Bool)canSynchronize;
- (_Bool)tryToSynchronize;
- (_Bool)isSynchronized;
- (id)currentSynchronizer;
@property(retain, nonatomic) NSDate *syncDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRPlaybackQueuer.h"

@class DZRMix, NSArray;

@interface DZRMixQueuer : DZRPlaybackQueuer
{
    _Bool _fetching;
    DZRMix *_mix;
    unsigned long long _lastBatchFirstIndex;
    unsigned long long _indexToFetchMoreTracks;
    NSArray *_tracks;
}

@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(nonatomic, getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
@property(nonatomic) unsigned long long indexToFetchMoreTracks; // @synthesize indexToFetchMoreTracks=_indexToFetchMoreTracks;
@property(nonatomic) unsigned long long lastBatchFirstIndex; // @synthesize lastBatchFirstIndex=_lastBatchFirstIndex;
@property(readonly, nonatomic) DZRMix *mix; // @synthesize mix=_mix;
- (void).cxx_destruct;
- (void)overrideQueueListWithPlayables:(id)arg1;
- (void)selectTrackAtIndexInCurrentTrackList:(unsigned long long)arg1;
- (void)addPlayables:(id)arg1;
- (void)replacePlayables:(id)arg1 shuffledTracksIDs:(id)arg2 currentTrackIndex:(unsigned long long)arg3;
- (unsigned long long)startingIndexOfLastRadioGroup;
- (long long)repeatCurrentTrackModeBackup;
- (id)deDuplicateTracks:(id)arg1;
- (_Bool)updateWithFetchedTracks:(id)arg1 andClearRemainingTracks:(_Bool)arg2;
- (void)didFailFetchingTracks;
- (void)fetchMoreTracks;
- (void)fetchMoreTracksIfNeededAfterSelectTrackAtIndex:(long long)arg1;
- (void)overrideTracks:(id)arg1;
- (void)resetTracks;
- (_Bool)queueCollection:(id)arg1;
- (void)clearQueue;
- (void)setQueuedCollection:(id)arg1;
- (id)queuedCollection;
- (id)init;
- (id)initWithMix:(id)arg1;

@end


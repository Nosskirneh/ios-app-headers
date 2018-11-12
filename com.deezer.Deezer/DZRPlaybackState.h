//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRPlayableFetcherDelegate-Protocol.h"

@class NSArray, NSString, PlayerControllerListeningContext;
@protocol DZRPlayableObject;

@interface DZRPlaybackState : NSObject <DZRPlayableFetcherDelegate>
{
    _Bool _shuffleEnabled;
    unsigned long long _currentIndex;
    double _timestamp;
    long long _repeatMode;
    NSArray *_queueList;
    NSArray *_tracks;
    NSArray *_originalTracks;
    NSString *_queueListID;
    NSArray *_contexts;
    NSArray *_order;
}

+ (id)currentPlaybackState;
+ (id)stringFromRepeatMode:(long long)arg1;
+ (long long)repeatModeFromString:(id)arg1;
+ (unsigned long long)mixTypeFromString:(id)arg1;
+ (id)containerTypeStringForCollection:(id)arg1;
+ (unsigned long long)containerTypeFromString:(id)arg1;
+ (id)playerModeForCollection:(id)arg1;
@property(retain) NSArray *order; // @synthesize order=_order;
@property(retain) NSArray *contexts; // @synthesize contexts=_contexts;
@property(retain) NSString *queueListID; // @synthesize queueListID=_queueListID;
@property(retain) NSArray *originalTracks; // @synthesize originalTracks=_originalTracks;
@property(retain) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain) NSArray *queueList; // @synthesize queueList=_queueList;
@property(getter=isShuffleEnabled) _Bool shuffleEnabled; // @synthesize shuffleEnabled=_shuffleEnabled;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=_repeatMode;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (id)containerTypeForContext:(id)arg1;
- (unsigned long long)indexForTrack:(id)arg1;
- (_Bool)isEqualExceptShuffle:(id)arg1;
- (_Bool)isEqualToPlaybackState:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)queueListJSONObject;
- (void)notifyRepeatModeUpdate;
- (void)notifyTracksUpdate;
- (void)updateTracks:(id)arg1;
- (void)playableObjectsFetched:(id)arg1 error:(id)arg2;
- (_Bool)fetchTracksIfNeeded;
@property(readonly) id <DZRPlayableObject> currentTrack;
@property(readonly) NSString *primarySmartTracklistMethod;
@property(readonly) unsigned long long mixListeningOrigin;
@property(readonly) unsigned long long primaryMixType;
@property(readonly) PlayerControllerListeningContext *primaryListeningContext;
@property(readonly) unsigned long long primaryContainerType;
- (_Bool)isValid;
- (_Bool)isQueueListDataFullySupported;
- (id)initWithQueueListDictionary:(id)arg1 defaultRepeatMode:(long long)arg2;
- (id)initWithCurrentPlayerState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

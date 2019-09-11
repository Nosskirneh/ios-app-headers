//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GCKAdBreakStatus, GCKMediaInformation, GCKMediaLiveSeekableRange, GCKMediaQueueData, GCKMediaQueueItem, GCKVideoInfo, NSArray, NSMutableArray, NSMutableDictionary;

@interface GCKMediaStatus : NSObject <NSCopying>
{
    long long _supportedMediaCommands;
    NSMutableArray *_queueItems;
    NSMutableDictionary *_queueItemIDToIndexMap;
    _Bool _playingAd;
    _Bool _isMuted;
    float _playbackRate;
    float _volume;
    long long _mediaSessionID;
    long long _playerState;
    long long _idleReason;
    GCKMediaInformation *_mediaInformation;
    double _streamPosition;
    long long _queueRepeatMode;
    unsigned long long _currentItemID;
    unsigned long long _preloadedItemID;
    unsigned long long _loadingItemID;
    NSArray *_activeTrackIDs;
    GCKVideoInfo *_videoInfo;
    id _customData;
    GCKAdBreakStatus *_adBreakStatus;
    GCKMediaLiveSeekableRange *_liveSeekableRange;
    GCKMediaQueueData *_queueData;
}

@property(retain, nonatomic) GCKMediaQueueData *queueData; // @synthesize queueData=_queueData;
@property(retain, nonatomic) GCKMediaLiveSeekableRange *liveSeekableRange; // @synthesize liveSeekableRange=_liveSeekableRange;
@property(retain, nonatomic) GCKAdBreakStatus *adBreakStatus; // @synthesize adBreakStatus=_adBreakStatus;
@property(retain, nonatomic) id customData; // @synthesize customData=_customData;
@property(retain, nonatomic) GCKVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSArray *activeTrackIDs; // @synthesize activeTrackIDs=_activeTrackIDs;
@property(nonatomic) unsigned long long loadingItemID; // @synthesize loadingItemID=_loadingItemID;
@property(nonatomic) unsigned long long preloadedItemID; // @synthesize preloadedItemID=_preloadedItemID;
@property(nonatomic) unsigned long long currentItemID; // @synthesize currentItemID=_currentItemID;
@property(nonatomic) long long queueRepeatMode; // @synthesize queueRepeatMode=_queueRepeatMode;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) double streamPosition; // @synthesize streamPosition=_streamPosition;
@property(retain, nonatomic) GCKMediaInformation *mediaInformation; // @synthesize mediaInformation=_mediaInformation;
@property(nonatomic) float playbackRate; // @synthesize playbackRate=_playbackRate;
@property(nonatomic) long long idleReason; // @synthesize idleReason=_idleReason;
@property(nonatomic) _Bool playingAd; // @synthesize playingAd=_playingAd;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) long long mediaSessionID; // @synthesize mediaSessionID=_mediaSessionID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) GCKMediaQueueItem *nextQueueItem;
@property(readonly, nonatomic) _Bool queueHasNextItem;
@property(readonly, nonatomic) _Bool queueHasLoadingItem;
@property(readonly, nonatomic) GCKMediaQueueItem *currentQueueItem;
@property(readonly, nonatomic) _Bool queueHasCurrentItem;
@property(readonly, nonatomic) _Bool queueHasPreviousItem;
- (long long)queueIndexForItemID:(unsigned long long)arg1;
- (id)queueItemWithItemID:(unsigned long long)arg1;
- (id)queueItemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long queueItemCount;
- (void)rebuildQueueItemIDToIndexMap;
- (_Bool)updateQueueFromJSONObject:(id)arg1;
- (long long)updateFromJSONObject:(id)arg1 ignoreFields:(long long)arg2;
- (id)processExtendedStatusFromJSONObject:(id)arg1;
- (_Bool)hasQueueEnded;
- (_Bool)isSeekable;
- (_Bool)isMediaCommandSupported:(long long)arg1;
- (void)reset;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithSessionID:(long long)arg1 mediaInformation:(id)arg2 queueItems:(id)arg3 currentItemID:(unsigned long long)arg4;
- (id)initWithSessionID:(long long)arg1 mediaInformation:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGPlayQueue.h"

@class ANGPlaylist, ANGSong;

@interface ANGPlaylistPlayQueue : ANGPlayQueue
{
    _Bool _didRegisterNotifications;
    ANGPlaylist *_playlist;
    ANGSong *_pendingRemoval;
}

+ (_Bool)playInReverseOrder:(id)arg1;
@property(retain, nonatomic) ANGSong *pendingRemoval; // @synthesize pendingRemoval=_pendingRemoval;
@property(copy, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (id)radioForModeInfinite;
- (id)adTagParams;
- (_Bool)shouldDiscardAdsWithPrevious:(id)arg1;
- (void)buildDataFromDict:(id)arg1;
- (id)displaySubtitle;
- (id)displayTitle;
- (id)displayType;
- (id)sourceId;
- (id)typeString;
- (id)dictionaryRepresentation;
- (_Bool)disablePlayerRestrictions;
- (_Bool)disableQueueRestrictions;
- (_Bool)disableAds;
- (_Bool)disableSkipLimit;
- (void)fillPlayQueueDataFrom:(id)arg1;
- (id)adjustProperties;
- (id)fbEventsProperties;
- (id)analyticsProperties;
- (void)removePendingSongFromQueue;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)play;
- (id)reportingInfoForSong:(id)arg1;
- (id)_displayName;
- (void)dealloc;
- (id)initWithPlaylist:(id)arg1 songs:(id)arg2 currentIndex:(unsigned long long)arg3;
- (id)initWithPlaylist:(id)arg1 songs:(id)arg2;
- (id)initWithPlaylist:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

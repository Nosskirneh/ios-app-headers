//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGPlayQueue.h"

@class NSDictionary, NSString, Radio;

@interface ANGRadioPlayQueue : ANGPlayQueue
{
    _Bool _loadingMoreSongs;
    Radio *_radio;
    NSString *_radioName;
    NSDictionary *_extraParams;
}

+ (void)showPreviousSongDisabledAlert;
+ (void)loadQueueForRadio:(id)arg1 dislikedSong:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)loadQueueForRadio:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)loadQueueForRadio:(id)arg1 alreadyPlayed:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)loadQueueForRadio:(id)arg1 alreadyPlayed:(id)arg2 extraParams:(id)arg3 callback:(CDUnknownBlockType)arg4;
@property(nonatomic) _Bool loadingMoreSongs; // @synthesize loadingMoreSongs=_loadingMoreSongs;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(retain, nonatomic) NSString *radioName; // @synthesize radioName=_radioName;
@property(retain, nonatomic) Radio *radio; // @synthesize radio=_radio;
- (void).cxx_destruct;
- (void)dislikeSong:(id)arg1;
- (id)chosenSongID;
- (id)sourceId;
- (id)typeString;
- (id)displayType;
- (id)displaySubtitle;
- (id)displayTitle;
- (void)buildDataFromDict:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)setCurrentIndexExternal:(unsigned long long)arg1;
- (void)playPrevSongTriggeredByUI:(_Bool)arg1;
- (unsigned long long)numberOfSkips;
- (void)setNumberOfSkips:(unsigned long long)arg1;
- (id)allowedSkips;
- (_Bool)shouldApplyRadioSkipLogic;
- (id)analyticsProperties;
- (void)fillPlayQueueDataFrom:(id)arg1;
- (void)reportBadSongChoiceRadioAndSkip:(id)arg1;
- (_Bool)supportsUserControl;
- (id)reportingInfoForSong:(id)arg1;
- (id)originalSongIDs;
- (id)radioForModeInfinite;
- (void)loadMoreSongsIfNecessary;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (void)wasSetAsCurrentPlayQueue;
- (_Bool)supportsShuffle;
- (_Bool)supportsModification;
- (id)_displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadio:(id)arg1 songs:(id)arg2;

@end


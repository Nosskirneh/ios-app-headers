//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRQueueableCollection-Protocol.h"

@class NSArray, NSString;

@interface DZRGoogleCastRemoteCollection : NSObject <DZRQueueableCollection>
{
    long long _type;
    long long _playerType;
    NSString *_identifier;
    NSString *_name;
    NSString *_authorName;
    NSArray *_remoteTracks;
    NSArray *_tracks;
}

+ (long long)collectionPlayerTypeFromString:(id)arg1;
+ (id)collectionPlayerTypeStringFromEnum:(long long)arg1;
+ (id)typeEnumValuesByCollectionPlayerTypeStrings;
+ (id)collectionPlayerTypeStringsByTypeEnumValues;
+ (long long)collectionTypeFromString:(id)arg1;
+ (id)collectionTypeStringFromEnum:(long long)arg1;
+ (id)typeEnumValuesByCollectionTypeStrings;
+ (id)collectionTypeStringsByTypeEnumValues;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) NSArray *remoteTracks; // @synthesize remoteTracks=_remoteTracks;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long playerType; // @synthesize playerType=_playerType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)playbackQueuer:(id)arg1 didPerfomForwardSelection:(id)arg2;
- (void)playbackQueuer:(id)arg1 didPerfomBackwardSelection:(id)arg2;
- (_Bool)playbackQueuer:(id)arg1 canPerfomForwardSelection:(id)arg2;
- (_Bool)playbackQueuer:(id)arg1 canPerfomBackwardSelection:(id)arg2;
- (_Bool)playbackQueuerIsAllowedToSkipForward:(id)arg1;
- (_Bool)playbackQueuerIsAllowedToSkipBackward:(id)arg1;
- (id)customShuffler;
- (id)synchronizer;
- (_Bool)shouldSkipWhenContentNotAvailableInOffline;
- (id)availableDownloadableForPlayable:(id)arg1 minimumQualityLevel:(long long)arg2;
- (_Bool)isPlayableAvailableForOfflineMode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)playerIsAllowedToDisplayNextTracks;
- (_Bool)isFlowMode;
- (_Bool)repeatIsAllowed;
- (_Bool)shuffleIsAllowed;
- (_Bool)seekIsAllowed;
- (_Bool)isQueueListEditable;
- (_Bool)canBeQueued;
- (void)downloadCoverImageForOffline;
- (unsigned long long)collectionType;
- (id)displayType;
- (id)displayName;
- (id)domain;
- (id)objectID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


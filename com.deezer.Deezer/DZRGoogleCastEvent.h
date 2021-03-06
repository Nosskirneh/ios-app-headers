//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRGoogleCastMessage.h"

@class NSArray, NSNumber, NSString;
@protocol DZRPlayableObject, DZRQueueableCollection;

@interface DZRGoogleCastEvent : DZRGoogleCastMessage
{
    _Bool _isShuffleActivated;
    float _volume;
    NSNumber *_ownerID;
    long long _collectionType;
    NSString *_collectionID;
    id <DZRQueueableCollection> _collection;
    unsigned long long _currentTrackIndex;
    id <DZRPlayableObject> _currentTrack;
    NSArray *_tracks;
    double _currentTrackElapsedTime;
    double _currenTrackTotalDuration;
    long long _repeatState;
    long long _playerState;
}

+ (id)typeEnumValuesByEventTypes;
+ (id)eventTypesByTypesEnumValues;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) long long repeatState; // @synthesize repeatState=_repeatState;
@property(nonatomic) _Bool isShuffleActivated; // @synthesize isShuffleActivated=_isShuffleActivated;
@property(nonatomic) double currenTrackTotalDuration; // @synthesize currenTrackTotalDuration=_currenTrackTotalDuration;
@property(nonatomic) double currentTrackElapsedTime; // @synthesize currentTrackElapsedTime=_currentTrackElapsedTime;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) id <DZRPlayableObject> currentTrack; // @synthesize currentTrack=_currentTrack;
@property(nonatomic) unsigned long long currentTrackIndex; // @synthesize currentTrackIndex=_currentTrackIndex;
@property(retain, nonatomic) id <DZRQueueableCollection> collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(nonatomic) long long collectionType; // @synthesize collectionType=_collectionType;
@property(retain, nonatomic) NSNumber *ownerID; // @synthesize ownerID=_ownerID;
- (void).cxx_destruct;
- (void)setParametersFromDictionary:(id)arg1;
- (long long)messageTypeFromString:(id)arg1;
- (id)messageTypeString;
- (id)init;

@end


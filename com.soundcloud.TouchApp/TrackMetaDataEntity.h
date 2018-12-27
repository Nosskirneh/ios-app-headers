//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, Urn;

@interface TrackMetaDataEntity : NSObject
{
    _Bool _isPlaying;
    _Bool _isSnipped;
    _Bool _isReposted;
    _Bool _isBlocked;
    _Bool _displayStats;
    _Bool _isOfflineSyncEnabled;
    Urn *_urn;
    unsigned long long _playbackCount;
    NSString *_posterName;
    NSDate *_createdAt;
}

@property(readonly, nonatomic) _Bool isOfflineSyncEnabled; // @synthesize isOfflineSyncEnabled=_isOfflineSyncEnabled;
@property(readonly, nonatomic) _Bool displayStats; // @synthesize displayStats=_displayStats;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(readonly, nonatomic) unsigned long long playbackCount; // @synthesize playbackCount=_playbackCount;
@property(readonly, nonatomic) _Bool isBlocked; // @synthesize isBlocked=_isBlocked;
@property(readonly, nonatomic) _Bool isReposted; // @synthesize isReposted=_isReposted;
@property(readonly, nonatomic) _Bool isSnipped; // @synthesize isSnipped=_isSnipped;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) Urn *urn; // @synthesize urn=_urn;
- (void).cxx_destruct;
- (_Bool)isUnsyncableForState:(unsigned long long)arg1;
- (id)initWithTrack:(id)arg1 isPlaying:(_Bool)arg2 isOfflineSyncEnabled:(_Bool)arg3;

@end


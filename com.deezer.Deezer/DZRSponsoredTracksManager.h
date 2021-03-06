//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeezerTrack, NSMutableSet, NSString;

@interface DZRSponsoredTracksManager : NSObject
{
    _Bool _hasJinglePlayed;
    NSString *_token;
    NSString *_apiKey;
    NSString *_apiURL;
    unsigned long long _period;
    DeezerTrack *_track;
    NSMutableSet *_reportedProgress;
    CDUnknownBlockType _sponsoredTrackCompletionBlock;
}

+ (_Bool)isSponsored:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType sponsoredTrackCompletionBlock; // @synthesize sponsoredTrackCompletionBlock=_sponsoredTrackCompletionBlock;
@property(nonatomic) _Bool hasJinglePlayed; // @synthesize hasJinglePlayed=_hasJinglePlayed;
@property(retain, nonatomic) NSMutableSet *reportedProgress; // @synthesize reportedProgress=_reportedProgress;
@property(retain, nonatomic) DeezerTrack *track; // @synthesize track=_track;
@property(nonatomic) unsigned long long period; // @synthesize period=_period;
@property(retain, nonatomic) NSString *apiURL; // @synthesize apiURL=_apiURL;
@property(retain, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)currentQueueListForSponsoredTracks;
- (void)queuerQueuedCollectionDidChange:(id)arg1;
- (void)reset;
- (unsigned long long)periodForAPICalls;
- (_Bool)hasTrack;
- (void)setSponsoredTrack:(id)arg1;
- (_Bool)sponsoredTracksAllowedInCurrentContext;
- (_Bool)sponsoredTracksEnabled;
- (void)openUrlForTrack:(id)arg1;
- (void)logSponsoredTrackProgress:(double)arg1;
- (void)fetchSponsoredTrack:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)playlistDidAddTracks:(id)arg1;
- (void)audioPlayerDidStartPlaying:(id)arg1;
- (void)audioPlayerDidChangeTrack:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)dealloc;
- (id)init;

@end


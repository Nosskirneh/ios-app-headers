//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPMUserActivityEvent.h"

@class NSNumber, NSString, TrackListDescription;

@interface GPMUserActivityEventPlay : GPMUserActivityEvent
{
    _Bool _woodstockPlay;
    _Bool _explicitPlay;
    _Bool _endedFromUserTrackChangeAction;
    TrackListDescription *_trackListDescription;
    NSNumber *_playTimeMillis;
    NSString *_streamAuthID;
    NSNumber *_trackDurationMillis;
    NSString *_distilledContextToken;
    unsigned long long _trackPlaybackLocationType;
}

@property(nonatomic, getter=isEndedFromUserTrackChangeAction) _Bool endedFromUserTrackChangeAction; // @synthesize endedFromUserTrackChangeAction=_endedFromUserTrackChangeAction;
@property(nonatomic) unsigned long long trackPlaybackLocationType; // @synthesize trackPlaybackLocationType=_trackPlaybackLocationType;
@property(nonatomic, getter=isExplicitPlay) _Bool explicitPlay; // @synthesize explicitPlay=_explicitPlay;
@property(copy, nonatomic) NSString *distilledContextToken; // @synthesize distilledContextToken=_distilledContextToken;
@property(nonatomic, getter=isWoodstockPlay) _Bool woodstockPlay; // @synthesize woodstockPlay=_woodstockPlay;
@property(retain, nonatomic) NSNumber *trackDurationMillis; // @synthesize trackDurationMillis=_trackDurationMillis;
@property(copy, nonatomic) NSString *streamAuthID; // @synthesize streamAuthID=_streamAuthID;
@property(retain, nonatomic) NSNumber *playTimeMillis; // @synthesize playTimeMillis=_playTimeMillis;
@property(retain, nonatomic) TrackListDescription *trackListDescription; // @synthesize trackListDescription=_trackListDescription;
- (void).cxx_destruct;
- (id)createDetails;

@end


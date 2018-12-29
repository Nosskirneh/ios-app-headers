//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP4Core15ImageResolvable_-Protocol.h"
#import "_TtP8Features13PlayQueueItem_-Protocol.h"

@class NSDate, NSString, NSURL, Urn;

@interface StationsScreenStation : NSObject <_TtP8Features13PlayQueueItem_, _TtP4Core15ImageResolvable_>
{
    Urn *_stationUrn;
    NSString *_stationTitle;
    unsigned long long _type;
    Urn *_trackUrn;
    NSString *_trackTitle;
    NSString *_trackArtistName;
    double _playableDuration;
    double _fullDuration;
    NSDate *_updatedAt;
    NSString *_imageUrlTemplate;
}

@property(readonly, copy, nonatomic) NSString *imageUrlTemplate; // @synthesize imageUrlTemplate=_imageUrlTemplate;
@property(readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, nonatomic) double fullDuration; // @synthesize fullDuration=_fullDuration;
@property(readonly, nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(readonly, nonatomic) NSString *trackArtistName; // @synthesize trackArtistName=_trackArtistName;
@property(readonly, nonatomic) NSString *trackTitle; // @synthesize trackTitle=_trackTitle;
@property(readonly, nonatomic) Urn *trackUrn; // @synthesize trackUrn=_trackUrn;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *stationTitle; // @synthesize stationTitle=_stationTitle;
@property(readonly, nonatomic) Urn *stationUrn; // @synthesize stationUrn=_stationUrn;
- (void).cxx_destruct;
- (_Bool)canResumePlay;
@property(readonly, nonatomic) Urn *imageFallbackUrn;
@property(readonly, copy, nonatomic) NSURL *artworkURL;
@property(readonly, copy, nonatomic) NSString *playQueueTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) Urn *artworkUrn;
@property(readonly, copy, nonatomic) Urn *urn;
@property(readonly, nonatomic) long long itemType;
- (id)initWithStationUrn:(id)arg1 stationTitle:(id)arg2 type:(unsigned long long)arg3 trackUrn:(id)arg4 trackTitle:(id)arg5 trackArtistName:(id)arg6 playableDuration:(double)arg7 fullDuration:(double)arg8 updatedAt:(id)arg9 imageUrlTemplate:(id)arg10;
@property(readonly, nonatomic) _Bool isExpired;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

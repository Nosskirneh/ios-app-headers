//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8Playback10PlayerItem.h"

@class NSArray, NSURL, Urn;
@protocol _TtP8Features25AnalyticsAttributeStoring_;

@interface _TtC8Playback10PlayerItem (Playback1)
@property(nonatomic, readonly) id <_TtP8Features25AnalyticsAttributeStoring_> analyticsBag;
@property(nonatomic, readonly) _Bool isShareable;
@property(nonatomic, readonly) _Bool isMonetizable;
@property(nonatomic, readonly) NSURL *waveformURL;
@property(nonatomic, readonly) NSURL *streamURL;
@property(nonatomic, readonly) NSArray *transcodings;
@property(nonatomic, readonly) Urn *stationUrn;
@property(nonatomic, readonly) Urn *artistUrn;
@end

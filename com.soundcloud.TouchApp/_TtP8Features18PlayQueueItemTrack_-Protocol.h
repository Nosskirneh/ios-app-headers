//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP8Features12PaywallTrack_-Protocol.h"
#import "_TtP8Features18StationConvertible_-Protocol.h"

@class NSArray, NSURL, Urn;
@protocol _TtP8Features25AnalyticsAttributeStoring_;

@protocol _TtP8Features18PlayQueueItemTrack_ <_TtP8Features12PaywallTrack_, _TtP8Features18StationConvertible_>
@property(readonly, nonatomic) id <_TtP8Features25AnalyticsAttributeStoring_> analyticsBag;
@property(readonly, nonatomic) _Bool isShareable;
@property(readonly, nonatomic) _Bool isMonetizable;
@property(readonly, copy, nonatomic) NSURL *waveformURL;
@property(readonly, copy, nonatomic) NSURL *streamURL;
@property(readonly, copy, nonatomic) NSArray *transcodings;
@property(readonly, copy, nonatomic) Urn *artistUrn;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP4Core15ImageResolvable_-Protocol.h"
#import "_TtP8Features18PlayQueueItemTrack_-Protocol.h"

@class AnalyticsBag, NSArray, NSString, NSURL, Urn;

@interface PlayQueueTrack : NSObject <_TtP8Features18PlayQueueItemTrack_, _TtP4Core15ImageResolvable_>
{
    _Bool _isMonetizable;
    _Bool _isShareable;
    _Bool _blocked;
    _Bool _snipped;
    _Bool _subMidTier;
    _Bool _subHighTier;
    _Bool _syncable;
    NSString *_policy;
    NSString *_monetizationModel;
    Urn *_urn;
    NSArray *_transcodings;
    NSURL *_streamURL;
    NSURL *_waveformURL;
    Urn *_artistUrn;
    Urn *_stationUrn;
    NSString *_artistName;
    NSString *_title;
    NSString *_playQueueTitle;
    double _playableDuration;
    double _fullDuration;
    AnalyticsBag *_analyticsBag;
    NSString *_imageUrlTemplate;
}

@property(nonatomic) _Bool syncable; // @synthesize syncable=_syncable;
@property(nonatomic) _Bool subHighTier; // @synthesize subHighTier=_subHighTier;
@property(nonatomic) _Bool subMidTier; // @synthesize subMidTier=_subMidTier;
@property(nonatomic) _Bool snipped; // @synthesize snipped=_snipped;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, copy, nonatomic) NSString *imageUrlTemplate; // @synthesize imageUrlTemplate=_imageUrlTemplate;
@property(retain, nonatomic) AnalyticsBag *analyticsBag; // @synthesize analyticsBag=_analyticsBag;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;
@property(readonly, nonatomic) _Bool isMonetizable; // @synthesize isMonetizable=_isMonetizable;
@property(readonly, nonatomic) double fullDuration; // @synthesize fullDuration=_fullDuration;
@property(readonly, nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(readonly, copy, nonatomic) NSString *playQueueTitle; // @synthesize playQueueTitle=_playQueueTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) Urn *stationUrn; // @synthesize stationUrn=_stationUrn;
@property(readonly, copy, nonatomic) Urn *artistUrn; // @synthesize artistUrn=_artistUrn;
@property(readonly, copy, nonatomic) NSURL *waveformURL; // @synthesize waveformURL=_waveformURL;
@property(readonly, copy, nonatomic) NSURL *streamURL; // @synthesize streamURL=_streamURL;
@property(readonly, copy, nonatomic) NSArray *transcodings; // @synthesize transcodings=_transcodings;
@property(readonly, copy, nonatomic) Urn *urn; // @synthesize urn=_urn;
@property(readonly, copy, nonatomic) NSString *monetizationModel; // @synthesize monetizationModel=_monetizationModel;
@property(readonly, copy, nonatomic) NSString *policy; // @synthesize policy=_policy;
- (void).cxx_destruct;
@property(readonly, nonatomic) Urn *imageFallbackUrn;
@property(readonly, copy, nonatomic) NSURL *artworkURL;
@property(readonly, copy, nonatomic) Urn *artworkUrn;
@property(readonly, nonatomic) long long itemType;
- (id)initWithUrn:(id)arg1 transcodings:(id)arg2 streamURL:(id)arg3 waveformURL:(id)arg4 artistUrn:(id)arg5 stationUrn:(id)arg6 artistName:(id)arg7 title:(id)arg8 playQueueTitle:(id)arg9 playableDuration:(double)arg10 fullDuration:(double)arg11 monetizable:(_Bool)arg12 shareable:(_Bool)arg13 blocked:(_Bool)arg14 snipped:(_Bool)arg15 syncable:(_Bool)arg16 subMidTier:(_Bool)arg17 subHighTier:(_Bool)arg18 policy:(id)arg19 monetizationModel:(id)arg20 analyticsBag:(id)arg21 imageUrlTemplate:(id)arg22;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features12PaywallTrack_-Protocol.h"
#import "_TtP8Features13PlayQueueItem_-Protocol.h"
#import "_TtP8Features16PresentableTrack_-Protocol.h"
#import "_TtP8Features22ActionSheetPresentable_-Protocol.h"

@class NSDate, NSString, NSURL, Urn;
@protocol AnalyticsPromotablePlayableStateRepresentable;

@interface UserContentTrack : NSObject <_TtP8Features16PresentableTrack_, _TtP8Features22ActionSheetPresentable_, _TtP8Features13PlayQueueItem_, _TtP8Features12PaywallTrack_>
{
    _Bool _isPrivate;
    _Bool _isLiked;
    _Bool _isRepostedByYou;
    _Bool _isOwnedByLoggedInUser;
    _Bool _snipped;
    _Bool _blocked;
    _Bool _syncable;
    _Bool _subMidTier;
    _Bool _subHighTier;
    _Bool _displayStats;
    _Bool _isMonetizable;
    NSURL *_permalinkURL;
    NSString *_artworkTemplateURL;
    id _primaryKey;
    Urn *_urn;
    NSString *_authorName;
    NSString *_posterName;
    NSString *_title;
    double _playableDuration;
    double _fullDuration;
    unsigned long long _playbackCount;
    NSString *_monetizationModel;
    NSString *_policy;
    Urn *_stationUrn;
    NSDate *_createdAt;
    Urn *_authorUrn;
}

@property(readonly, nonatomic) _Bool isMonetizable; // @synthesize isMonetizable=_isMonetizable;
@property(readonly, copy, nonatomic) Urn *authorUrn; // @synthesize authorUrn=_authorUrn;
@property(readonly, nonatomic) _Bool displayStats; // @synthesize displayStats=_displayStats;
@property(readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) Urn *stationUrn; // @synthesize stationUrn=_stationUrn;
@property(readonly, copy, nonatomic) NSString *policy; // @synthesize policy=_policy;
@property(readonly, copy, nonatomic) NSString *monetizationModel; // @synthesize monetizationModel=_monetizationModel;
@property(readonly, nonatomic) _Bool subHighTier; // @synthesize subHighTier=_subHighTier;
@property(readonly, nonatomic) _Bool subMidTier; // @synthesize subMidTier=_subMidTier;
@property(readonly, nonatomic) _Bool syncable; // @synthesize syncable=_syncable;
@property(readonly, nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(readonly, nonatomic) _Bool snipped; // @synthesize snipped=_snipped;
@property(readonly, nonatomic) _Bool isOwnedByLoggedInUser; // @synthesize isOwnedByLoggedInUser=_isOwnedByLoggedInUser;
@property(readonly, nonatomic) _Bool isRepostedByYou; // @synthesize isRepostedByYou=_isRepostedByYou;
@property(readonly, nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(readonly, nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, nonatomic) unsigned long long playbackCount; // @synthesize playbackCount=_playbackCount;
@property(readonly, nonatomic) double fullDuration; // @synthesize fullDuration=_fullDuration;
@property(readonly, nonatomic) double playableDuration; // @synthesize playableDuration=_playableDuration;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *posterName; // @synthesize posterName=_posterName;
@property(readonly, copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(readonly, copy, nonatomic) Urn *urn; // @synthesize urn=_urn;
@property(readonly, nonatomic) id primaryKey; // @synthesize primaryKey=_primaryKey;
@property(readonly, copy, nonatomic) NSString *artworkTemplateURL; // @synthesize artworkTemplateURL=_artworkTemplateURL;
@property(readonly, copy, nonatomic) NSURL *permalinkURL; // @synthesize permalinkURL=_permalinkURL;
- (void).cxx_destruct;
- (_Bool)monetizable;
@property(readonly, copy, nonatomic) NSString *playQueueTitle;
@property(readonly, copy, nonatomic) NSURL *artworkURL;
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) Urn *artworkUrn;
@property(readonly, nonatomic) long long itemType;
@property(readonly, nonatomic) _Bool isPermalinkInstagramShareable;
@property(readonly, copy, nonatomic) Urn *profileLinkUrn;
@property(readonly, nonatomic) id <AnalyticsPromotablePlayableStateRepresentable> promotedPlayableState;
@property(readonly, nonatomic) unsigned long long trackCount;
@property(readonly, nonatomic) _Bool isLikedByYou;
@property(readonly, nonatomic) _Bool isOwnedByYou;
@property(readonly, copy, nonatomic) Urn *userPlaylistUrn;
@property(readonly, nonatomic) _Bool isReposted;
- (id)initWithPrimaryKey:(id)arg1 urn:(id)arg2 stationUrn:(id)arg3 authorName:(id)arg4 posterName:(id)arg5 title:(id)arg6 playableDuration:(double)arg7 fullDuration:(double)arg8 playbackCount:(unsigned long long)arg9 isPrivate:(_Bool)arg10 isLiked:(_Bool)arg11 isRepostedByYou:(_Bool)arg12 isOwnedByLoggedInUser:(_Bool)arg13 snipped:(_Bool)arg14 blocked:(_Bool)arg15 syncable:(_Bool)arg16 subMidTier:(_Bool)arg17 subHighTier:(_Bool)arg18 monetizationModel:(id)arg19 policy:(id)arg20 displayStats:(_Bool)arg21 authorUrn:(id)arg22 permalinkURL:(id)arg23 artworkTemplateURL:(id)arg24 isMonetizable:(_Bool)arg25;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


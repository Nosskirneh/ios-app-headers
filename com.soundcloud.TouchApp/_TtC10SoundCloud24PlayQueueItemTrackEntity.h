//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, Urn;
@protocol _TtP8Features25AnalyticsAttributeStoring_;

@interface _TtC10SoundCloud24PlayQueueItemTrackEntity : NSObject
{
    // Error parsing type: , name: urn
    // Error parsing type: , name: title
    // Error parsing type: , name: artistName
    // Error parsing type: , name: artworkUrn
    // Error parsing type: , name: itemType
    // Error parsing type: , name: playQueueTitle
    // Error parsing type: , name: playableDuration
    // Error parsing type: , name: fullDuration
    // Error parsing type: , name: snipped
    // Error parsing type: , name: blocked
    // Error parsing type: , name: syncable
    // Error parsing type: , name: subMidTier
    // Error parsing type: , name: subHighTier
    // Error parsing type: , name: monetizationModel
    // Error parsing type: , name: policy
    // Error parsing type: , name: stationUrn
    // Error parsing type: , name: artistUrn
    // Error parsing type: , name: transcodings
    // Error parsing type: , name: streamURL
    // Error parsing type: , name: waveformURL
    // Error parsing type: , name: isShareable
    // Error parsing type: , name: isMonetizable
    // Error parsing type: , name: analyticsBag
    // Error parsing type: , name: secretToken
    // Error parsing type: , name: imageUrlTemplate
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) Urn *imageFallbackUrn;
@property(nonatomic, readonly) NSURL *artworkURL;
- (id)initWithUrn:(id)arg1 transcodings:(id)arg2 streamURL:(id)arg3 waveformURL:(id)arg4 artistUrn:(id)arg5 stationUrn:(id)arg6 artistName:(id)arg7 title:(id)arg8 playQueueTitle:(id)arg9 playableDurationInMs:(unsigned long long)arg10 fullDurationInMs:(unsigned long long)arg11 monetizable:(_Bool)arg12 shareable:(_Bool)arg13 blocked:(_Bool)arg14 snipped:(_Bool)arg15 syncable:(_Bool)arg16 subMidTier:(_Bool)arg17 subHighTier:(_Bool)arg18 monetizationModel:(id)arg19 policy:(id)arg20 analyticsBag:(id)arg21 artworkUrn:(id)arg22 itemType:(long long)arg23 imageUrlTemplate:(id)arg24 secretToken:(id)arg25;
@property(nonatomic, readonly) NSString *imageUrlTemplate; // @synthesize imageUrlTemplate;
@property(nonatomic, readonly) NSString *secretToken; // @synthesize secretToken;
@property(nonatomic, retain) id <_TtP8Features25AnalyticsAttributeStoring_> analyticsBag; // @synthesize analyticsBag;
@property(nonatomic, readonly) _Bool isMonetizable; // @synthesize isMonetizable;
@property(nonatomic, readonly) _Bool isShareable; // @synthesize isShareable;
@property(nonatomic, readonly) NSURL *waveformURL; // @synthesize waveformURL;
@property(nonatomic, readonly) NSURL *streamURL; // @synthesize streamURL;
@property(nonatomic, readonly) NSArray *transcodings; // @synthesize transcodings;
@property(nonatomic, readonly) Urn *artistUrn; // @synthesize artistUrn;
@property(nonatomic, readonly) Urn *stationUrn; // @synthesize stationUrn;
@property(nonatomic, readonly) NSString *policy; // @synthesize policy;
@property(nonatomic, readonly) NSString *monetizationModel; // @synthesize monetizationModel;
@property(nonatomic, readonly) _Bool subHighTier; // @synthesize subHighTier;
@property(nonatomic, readonly) _Bool subMidTier; // @synthesize subMidTier;
@property(nonatomic, readonly) _Bool syncable; // @synthesize syncable;
@property(nonatomic, readonly) _Bool blocked; // @synthesize blocked;
@property(nonatomic, readonly) _Bool snipped; // @synthesize snipped;
@property(nonatomic, readonly) double fullDuration; // @synthesize fullDuration;
@property(nonatomic, readonly) double playableDuration; // @synthesize playableDuration;
@property(nonatomic, readonly) NSString *playQueueTitle; // @synthesize playQueueTitle;
@property(nonatomic, readonly) long long itemType; // @synthesize itemType;
@property(nonatomic, readonly) Urn *artworkUrn; // @synthesize artworkUrn;
@property(nonatomic, readonly) NSString *artistName; // @synthesize artistName;
@property(nonatomic, readonly) NSString *title; // @synthesize title;
@property(nonatomic, readonly) Urn *urn; // @synthesize urn;

@end


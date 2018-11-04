//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoPlaybackRequest.h"

@class NSDictionary, NSString, NSURL;

@interface SPTVideoPlaybackRequestImpl : NSObject <SPTVideoPlaybackRequest>
{
    _Bool _isAd;
    _Bool _playWhenReady;
    _Bool _royaltyVideo;
    _Bool _backgroundable;
    double _initialPosition;
    NSString *_manifestID;
    NSString *_mediaManifest;
    NSDictionary *_metadata;
    NSURL *_syncWithAudioTrackURI;
}

@property(nonatomic, getter=isBackgroundable) _Bool backgroundable; // @synthesize backgroundable=_backgroundable;
@property(nonatomic, getter=isRoyaltyVideo) _Bool royaltyVideo; // @synthesize royaltyVideo=_royaltyVideo;
@property(copy, nonatomic, getter=audioTrackURI) NSURL *syncWithAudioTrackURI; // @synthesize syncWithAudioTrackURI=_syncWithAudioTrackURI;
@property(nonatomic) _Bool playWhenReady; // @synthesize playWhenReady=_playWhenReady;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *mediaManifest; // @synthesize mediaManifest=_mediaManifest;
@property(retain, nonatomic) NSString *manifestID; // @synthesize manifestID=_manifestID;
@property(nonatomic) double initialPosition; // @synthesize initialPosition=_initialPosition;
@property(nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRoyaltyVideo:(_Bool)arg1 backgroundable:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


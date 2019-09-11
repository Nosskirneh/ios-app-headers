//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SPTVideoManifestProfile;

@interface SPTVideoManifest : NSObject
{
    _Bool _isAiring;
    NSArray *_profiles;
    SPTVideoManifestProfile *_profileForBackgrounding;
    unsigned long long _segmentLength;
    NSArray *_baseURLs;
    NSArray *_subtitleBaseURLs;
    NSString *_segmentTemplate;
    NSString *_subtitleTemplate;
    NSArray *_subtitles;
    NSArray *_videoProfiles;
    SPTVideoManifestProfile *_audioProfile;
    NSDictionary *_profileLookup;
    double _startTime;
    double _endTime;
}

@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSDictionary *profileLookup; // @synthesize profileLookup=_profileLookup;
@property(retain, nonatomic) SPTVideoManifestProfile *audioProfile; // @synthesize audioProfile=_audioProfile;
@property(copy, nonatomic) NSArray *videoProfiles; // @synthesize videoProfiles=_videoProfiles;
@property(readonly, nonatomic) NSArray *subtitles; // @synthesize subtitles=_subtitles;
@property(readonly, nonatomic) NSString *subtitleTemplate; // @synthesize subtitleTemplate=_subtitleTemplate;
@property(readonly, nonatomic) NSString *segmentTemplate; // @synthesize segmentTemplate=_segmentTemplate;
@property(readonly, nonatomic) NSArray *subtitleBaseURLs; // @synthesize subtitleBaseURLs=_subtitleBaseURLs;
@property(readonly, nonatomic) NSArray *baseURLs; // @synthesize baseURLs=_baseURLs;
@property(readonly, nonatomic) unsigned long long segmentLength; // @synthesize segmentLength=_segmentLength;
@property(readonly, nonatomic) _Bool isAiring; // @synthesize isAiring=_isAiring;
@property(readonly, nonatomic) SPTVideoManifestProfile *profileForBackgrounding; // @synthesize profileForBackgrounding=_profileForBackgrounding;
@property(readonly, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
- (void).cxx_destruct;
- (id)profileWithID:(unsigned long long)arg1;
@property(readonly, nonatomic) double duration;
- (id)initWithProfiles:(id)arg1 audioProfile:(id)arg2 videoProfiles:(id)arg3 profileForBackgrounding:(id)arg4 isAiring:(_Bool)arg5 segmentLength:(unsigned long long)arg6 startTime:(double)arg7 endTime:(double)arg8 baseURLs:(id)arg9 segmentTemplate:(id)arg10 subtitleTemplate:(id)arg11 subtitleBaseURLs:(id)arg12 subtitles:(id)arg13;

@end


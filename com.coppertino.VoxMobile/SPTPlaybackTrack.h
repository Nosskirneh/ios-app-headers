//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SPTPlaybackTrack : NSObject
{
    NSString *_name;
    NSString *_uri;
    NSString *_playbackSourceUri;
    NSString *_playbackSourceName;
    NSString *_artistName;
    NSString *_artistUri;
    NSString *_albumName;
    NSString *_albumUri;
    NSString *_albumCoverArtURL;
    double _duration;
    unsigned long long _indexInContext;
}

@property(readonly) unsigned long long indexInContext; // @synthesize indexInContext=_indexInContext;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *albumCoverArtURL; // @synthesize albumCoverArtURL=_albumCoverArtURL;
@property(readonly) NSString *albumUri; // @synthesize albumUri=_albumUri;
@property(readonly) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly) NSString *artistUri; // @synthesize artistUri=_artistUri;
@property(readonly) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly) NSString *playbackSourceName; // @synthesize playbackSourceName=_playbackSourceName;
@property(readonly) NSString *playbackSourceUri; // @synthesize playbackSourceUri=_playbackSourceUri;
@property(readonly) NSString *uri; // @synthesize uri=_uri;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 uri:(id)arg2 playbackSourceUri:(id)arg3 playbackSourceName:(id)arg4 artistName:(id)arg5 artistUri:(id)arg6 albumName:(id)arg7 albumUri:(id)arg8 albumCoverArtURL:(id)arg9 duration:(double)arg10 indexInContext:(unsigned long long)arg11;

@end

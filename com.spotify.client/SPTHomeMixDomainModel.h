//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface SPTHomeMixDomainModel : NSObject <NSCopying>
{
    _Bool _playing;
    _Bool _playingHomeMixContext;
    NSURL *_homeMixURI;
    NSURL *_currentlyPlayingTrackURI;
}

+ (id)defaultModelWithHomeMixURI:(id)arg1;
@property(readonly, nonatomic, getter=isPlayingHomeMixContext) _Bool playingHomeMixContext; // @synthesize playingHomeMixContext=_playingHomeMixContext;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(readonly, nonatomic) NSURL *currentlyPlayingTrackURI; // @synthesize currentlyPlayingTrackURI=_currentlyPlayingTrackURI;
@property(readonly, nonatomic) NSURL *homeMixURI; // @synthesize homeMixURI=_homeMixURI;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToModel:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toBuilder;
- (id)initWithHomeMixURI:(id)arg1 currentlyPlayingTrackURI:(id)arg2 playing:(_Bool)arg3 playingHomeMixContext:(_Bool)arg4;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVURLAsset.h>

#import "GPMPlayerItem-Protocol.h"

@class NSDate, NSError, NSString, NSURL, Track;

@interface PlayerAsset : AVURLAsset <GPMPlayerItem>
{
    _Bool _explicitPlay;
    _Bool _willLoadFromNetwork;
    long long _state;
    Track *_track;
    NSString *_cloudQueueID;
    unsigned long long _trackIndex;
    unsigned long long _playbackReason;
    NSURL *_resourceURL;
    NSDate *_woodstockTimeoutBase;
    NSError *_error;
}

+ (id)playerAssetForTrack:(id)arg1 resourceURL:(id)arg2 cloudQueueID:(id)arg3 trackIndex:(unsigned long long)arg4 explicitPlay:(_Bool)arg5 playbackReason:(unsigned long long)arg6 dispatchQueue:(id)arg7;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *woodstockTimeoutBase; // @synthesize woodstockTimeoutBase=_woodstockTimeoutBase;
@property(readonly, nonatomic) _Bool willLoadFromNetwork; // @synthesize willLoadFromNetwork=_willLoadFromNetwork;
@property(readonly, nonatomic) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(readonly, nonatomic) unsigned long long playbackReason; // @synthesize playbackReason=_playbackReason;
@property(nonatomic) unsigned long long trackIndex; // @synthesize trackIndex=_trackIndex;
@property(readonly, nonatomic) NSString *cloudQueueID; // @synthesize cloudQueueID=_cloudQueueID;
@property(readonly, nonatomic) _Bool explicitPlay; // @synthesize explicitPlay=_explicitPlay;
@property(readonly, nonatomic) Track *track; // @synthesize track=_track;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)loadAssetWithLoadingHandler:(CDUnknownBlockType)arg1;
- (id)initWithCustomURL:(id)arg1 resourceURL:(id)arg2 cloudQueueID:(id)arg3 options:(id)arg4 track:(id)arg5 trackIndex:(long long)arg6 explicitPlay:(_Bool)arg7 playbackReason:(unsigned long long)arg8;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


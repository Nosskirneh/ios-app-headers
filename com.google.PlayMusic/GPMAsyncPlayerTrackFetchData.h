//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMAsyncPlayerTrackFetchData : NSObject
{
    _Bool _cached;
    unsigned long long _audioFormat;
    unsigned long long _transcodeState;
    long long _networkType;
    unsigned long long _requestedBitrate;
}

+ (id)stringForTranscodeState:(unsigned long long)arg1;
+ (id)stringForNetworkType:(long long)arg1;
+ (id)stringForAudioFormat:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long requestedBitrate; // @synthesize requestedBitrate=_requestedBitrate;
@property(readonly, nonatomic) long long networkType; // @synthesize networkType=_networkType;
@property(readonly, nonatomic, getter=isCached) _Bool cached; // @synthesize cached=_cached;
@property(readonly, nonatomic) unsigned long long transcodeState; // @synthesize transcodeState=_transcodeState;
@property(readonly, nonatomic) unsigned long long audioFormat; // @synthesize audioFormat=_audioFormat;
- (id)description;
- (id)initWithAudioFormat:(unsigned long long)arg1 transcodeState:(unsigned long long)arg2 cached:(_Bool)arg3 networkType:(long long)arg4 requestedBitrate:(unsigned long long)arg5;
- (id)init;

@end

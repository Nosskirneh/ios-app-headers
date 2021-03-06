//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLRemoteStream.h"

@class NSDictionary, NSString, NSURL;

@interface MLHLSRemotePlaylist : MLRemoteStream
{
    NSURL *_baseURL;
    NSString *_audioGroupID;
    NSString *_videoGroupID;
    NSString *_subtitlesGroupID;
    NSDictionary *_attributes;
}

+ (id)HLSMimeTypeWithCodecs:(id)arg1;
+ (id)playlistWithVideoStream:(id)arg1 audioStream:(id)arg2 subtitlesGroupID:(id)arg3;
+ (id)playlistWithVideoStream:(id)arg1 audioStream:(id)arg2;
+ (id)playlistWithVideoStream:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) NSString *subtitlesGroupID; // @synthesize subtitlesGroupID=_subtitlesGroupID;
@property(readonly, nonatomic) NSString *videoGroupID; // @synthesize videoGroupID=_videoGroupID;
@property(readonly, nonatomic) NSString *audioGroupID; // @synthesize audioGroupID=_audioGroupID;
- (void).cxx_destruct;
- (id)copyWithAudioGroupID:(id)arg1 videoGroupID:(id)arg2 subtitlesGroupID:(id)arg3;
- (id)copyWithAudioTrackIsDefault:(_Bool)arg1;
- (id)copyWithURL:(id)arg1;
@property(readonly, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (id)initWithURL:(id)arg1 formatStream:(id)arg2;
- (id)initWithURL:(id)arg1 formatStream:(id)arg2 audioGroupID:(id)arg3 videoGroupID:(id)arg4 subtitlesGroupID:(id)arg5 attributes:(id)arg6;

@end


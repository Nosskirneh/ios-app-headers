//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC4WiMP12MediaService : NSObject
{
    // Error parsing type: , name: playbackSessionId
    // Error parsing type: , name: provider
}

- (CDUnknownBlockType).cxx_destruct;
- (void)obtainTrackPrivilegesUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 quality:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)obtainAudioCacheUrlForUuid:(id)arg1 type:(long long)arg2 originatingPlaylist:(id)arg3 quality:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)obtainVideoOfflineUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 quality:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)obtainVideoPlayUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)obtainCutOfflineUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 quality:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)obtainCutPlayUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 quality:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)obtainTrackOfflineUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 quality:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)obtainTrackPlayUrlForUuid:(id)arg1 originatingPlaylist:(id)arg2 quality:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
@property(nonatomic, copy) NSString *playbackSessionId; // @synthesize playbackSessionId;

@end


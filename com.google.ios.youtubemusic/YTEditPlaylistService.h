//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class YTApiaryResourceParser;

@interface YTEditPlaylistService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (void)makePlaylistEditRequestWithPlaylistID:(id)arg1 actions:(id)arg2 params:(id)arg3 clickTrackingParams:(id)arg4 responseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)makeAddVideoRequestWithPlaylistID:(id)arg1 videoID:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

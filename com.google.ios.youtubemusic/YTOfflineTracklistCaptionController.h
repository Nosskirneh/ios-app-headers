//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLOfflineTracklistCaptionProvider-Protocol.h"
#import "YTRetryTaskConfig-Protocol.h"

@class GIMMe, MLCaptionService, NSString;

@interface YTOfflineTracklistCaptionController : NSObject <YTRetryTaskConfig, MLOfflineTracklistCaptionProvider>
{
    MLCaptionService *_captionService;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)retryTimeSequence;
- (void)fetchCaptionsForURL:(id)arg1 format:(int)arg2 videoID:(id)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)fetchTrackNeedingCaptionsWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)downloadAndSaveCaptionsForTrack:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


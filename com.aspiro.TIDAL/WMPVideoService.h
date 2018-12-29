//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMPVideoServiceDAL;

@interface WMPVideoService : NSObject
{
    WMPVideoServiceDAL *_videoDAL;
}

@property(retain, nonatomic) WMPVideoServiceDAL *videoDAL; // @synthesize videoDAL=_videoDAL;
- (void).cxx_destruct;
- (void)obtainCreditsForVideoWithUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainSuggestedVideosForVideoUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleFavoriteVideoId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeVideoFromFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addVideoToFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchVideoAvailableQualities:(id)arg1;
- (id)getVideoByUuid:(id)arg1;
- (id)getVideoById:(id)arg1;
- (void)obtainArtistVideosByArtistId:(id)arg1 sortAndRangeParameters:(id)arg2;
- (void)obtainVideosByCategoryIdentifier:(id)arg1 sortAndRangeParameters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)obtainVideosByCategoryIdentifier:(id)arg1 sortAndRangeParameters:(id)arg2;
- (void)obtainFavoriteVideosById:(id)arg1 sortAndRangeParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)obtainFavoriteVideosById:(id)arg1 sortAndRangeParameters:(id)arg2;
- (void)obtainVideoByUuid:(id)arg1 completion:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)obtainVideoByUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainVideoByUuid:(id)arg1;
- (id)init;

@end


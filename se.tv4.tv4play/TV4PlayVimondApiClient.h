//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue;

@interface TV4PlayVimondApiClient : NSObject
{
    NSOperationQueue *_apiRequestQueue;
    NSOperationQueue *_imageResizeRequestQueue;
}

+ (id)imageError:(id)arg1;
+ (id)JSONFormatError:(id)arg1;
+ (id)logArea;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSOperationQueue *imageResizeRequestQueue; // @synthesize imageResizeRequestQueue=_imageResizeRequestQueue;
@property(retain, nonatomic) NSOperationQueue *apiRequestQueue; // @synthesize apiRequestQueue=_apiRequestQueue;
- (void).cxx_destruct;
- (id)buildNidsString:(id)arg1;
- (id)suggestedEpisodeBaseURLString;
- (id)tvDataBaseURLString;
- (id)baseURLString;
- (id)baseUrl;
- (id)imageResizeURLString;
- (id)sendJSONRequest:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getNextContentForProgramId:(id)arg1 userId:(id)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)getScheduleForChannel:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getScheduleOnCompletion:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *newsPageNids;
- (id)getPanels:(id)arg1 platform:(id)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)getPanels:(id)arg1 platform:(id)arg2 resolveCarouselProgramNames:(_Bool)arg3 onCompletion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (id)getMostViewedVideoAssets:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getVideoAssetsWithURL:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getVideoAssetsMatchingString:(id)arg1 withParams:(id)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)getVideoAsset:(id)arg1 platform:(id)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)getVideoAssets:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getVideoAssetForId:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getSuggestedEpisode:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getProgramsMatchingString:(id)arg1 forPlatform:(id)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)getProgramsForNids:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getProgram:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getPrograms:(id)arg1 isV2:(_Bool)arg2 onCompletion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (id)getPrograms:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)getCategories:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (id)getChannels:(CDUnknownBlockType)arg1 onError:(CDUnknownBlockType)arg2;
- (id)getChannelCountWithCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)getChannelsWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)resizeUrl:(id)arg1 scale:(double)arg2 size:(struct CGSize)arg3 branding:(id)arg4 format:(id)arg5 crop:(_Bool)arg6;
- (id)resizeUrl:(id)arg1 scale:(double)arg2 size:(struct CGSize)arg3;
- (void)getImage:(id)arg1 scale:(double)arg2 withSize:(struct CGSize)arg3 branding:(id)arg4 format:(id)arg5 crop:(_Bool)arg6 onCompletion:(CDUnknownBlockType)arg7 onError:(CDUnknownBlockType)arg8;
- (void)getImage:(id)arg1 scale:(double)arg2 withSize:(struct CGSize)arg3 branding:(id)arg4 format:(id)arg5 onCompletion:(CDUnknownBlockType)arg6 onError:(CDUnknownBlockType)arg7;
- (void)getImage:(id)arg1 scale:(double)arg2 withSize:(struct CGSize)arg3 format:(id)arg4 onCompletion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)init;

@end


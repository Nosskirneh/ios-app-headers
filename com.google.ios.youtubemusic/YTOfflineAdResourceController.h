//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, YTOfflineAdParser, YTVideoAdsService;

@interface YTOfflineAdResourceController : NSObject
{
    YTOfflineAdParser *_offlineAdParser;
    YTVideoAdsService *_videoAdsService;
    NSHashTable *_observers;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)notifyDidFailToDownloadAdWithError:(id)arg1;
- (void)notifyDidDownloadAdWithURL:(id)arg1;
- (void)fetchAllResourceURLsWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)createOfflineAdResourceEntityWithURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)downloadAdResourceWithURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchRemoteAdURLNeedingDataWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)fetchAdWithURL:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)removeOfflineAdResourceControllerObserver:(id)arg1;
- (void)addOfflineAdResourceControllerObserver:(id)arg1;
- (id)init;

@end


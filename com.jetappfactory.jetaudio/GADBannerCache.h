//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, UIViewController;
@protocol OS_dispatch_queue;

@interface GADBannerCache : NSObject
{
    NSMutableDictionary *_previousBannerCache;
    NSMutableDictionary *_currentBannerCache;
    NSMutableArray *_recentlyAccessedKeysInCurrentCache;
    UIViewController *_currentRootViewController;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateCacheWithBannerView:(id)arg1 newKey:(id)arg2;
- (void)addBannerEntryToCurrentCache:(id)arg1 key:(id)arg2;
- (id)bannerEntryFromPreviousCache:(id)arg1;
- (void)loadRequest:(id)arg1 bannerView:(id)arg2;
- (id)cacheEntryForBannerView:(id)arg1 key:(id)arg2;
- (id)cacheEntryForBannerView:(id)arg1 request:(id)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ANGNativeAdDelegate-Protocol.h"
#import "GADBannerViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface ANGNativeAdCache : NSObject <ANGNativeAdDelegate, GADBannerViewDelegate>
{
    NSMutableDictionary *_cacheDictionary;
    NSObject *_diskCacheLock;
    NSObject *_memCacheLock;
    NSMutableDictionary *_dfpDict;
    NSMutableArray *_loadingDfp;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *loadingDfp; // @synthesize loadingDfp=_loadingDfp;
@property(retain, nonatomic) NSMutableDictionary *dfpDict; // @synthesize dfpDict=_dfpDict;
@property(retain, nonatomic) NSObject *memCacheLock; // @synthesize memCacheLock=_memCacheLock;
@property(retain, nonatomic) NSObject *diskCacheLock; // @synthesize diskCacheLock=_diskCacheLock;
@property(retain, nonatomic) NSMutableDictionary *cacheDictionary; // @synthesize cacheDictionary=_cacheDictionary;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (id)getBannerViewFromAd:(id)arg1;
- (void)loadDFPBannerViewFromSectionAd:(id)arg1;
- (void)nativeAdInfoUpdated:(_Bool)arg1 forNativeAd:(id)arg2;
- (void)loadAd:(id)arg1 forDisplayType:(unsigned long long)arg2;
- (id)plistPath;
- (void)removeCachedAd:(id)arg1;
- (void)clearCache;
- (id)readObjectsFromDisk;
- (void)_saveToDisk;
- (void)saveToDisk;
- (id)_getCachedAd:(id)arg1;
- (id)getCachedAd:(id)arg1;
- (_Bool)_cacheAd:(id)arg1;
- (void)makeSureCacheLoaded;
- (void)cacheAd:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


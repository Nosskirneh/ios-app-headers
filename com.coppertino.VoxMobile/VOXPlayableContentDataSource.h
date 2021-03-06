//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MPPlayableContentDataSource-Protocol.h"
#import "VOXOfflineModeProtocol-Protocol.h"

@class HNKCacheFormat, NSIndexPath, NSMutableDictionary, NSString, VOXCarPlayDataProvider, VOXCarPlaySourceForIndexPath;

@interface VOXPlayableContentDataSource : NSObject <VOXOfflineModeProtocol, MPPlayableContentDataSource>
{
    VOXCarPlaySourceForIndexPath *_sourceForCurrentIndexPath;
    NSIndexPath *_currentIndexPath;
    NSMutableDictionary *_sourcesCache;
    double _sourcesCacheLastUpdatedTime;
    HNKCacheFormat *_carplayFormat;
    VOXCarPlayDataProvider *_dataProvider;
}

+ (id)sharedInstance;
@property(retain) VOXCarPlayDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) HNKCacheFormat *carplayFormat; // @synthesize carplayFormat=_carplayFormat;
@property(nonatomic) double sourcesCacheLastUpdatedTime; // @synthesize sourcesCacheLastUpdatedTime=_sourcesCacheLastUpdatedTime;
@property(retain) NSMutableDictionary *sourcesCache; // @synthesize sourcesCache=_sourcesCache;
@property(copy, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath=_currentIndexPath;
@property(retain, nonatomic) VOXCarPlaySourceForIndexPath *sourceForCurrentIndexPath; // @synthesize sourceForCurrentIndexPath=_sourceForCurrentIndexPath;
- (void).cxx_destruct;
- (void)configureOfflineMode;
- (void)configureOnlineMode;
- (id)placeholder;
- (id)cachedSourceForIndexPath:(id)arg1;
- (void)addCachedSource:(id)arg1 forIndexPath:(id)arg2;
- (void)fetchImageForIndex:(unsigned long long)arg1 inQueue:(id)arg2 indexPath:(id)arg3;
- (void)startAsyncImageFetchingForCollection:(id)arg1 indexpath:(id)arg2;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


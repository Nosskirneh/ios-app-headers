//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFDataLoader-Protocol.h"

@class FNFAssetResourceLoader, FNFAssetResourceLoadingRequest, FNFDataBlockDistributor, NSURL;
@protocol FNFDataLoaderDelegate, OS_dispatch_queue;

@interface FNFMp4DataLoader : NSObject <FNFDataLoader>
{
    id <FNFDataLoaderDelegate> _delegate;
    FNFAssetResourceLoader *_resourceLoader;
    FNFDataBlockDistributor *_dataBlockDistributor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    FNFAssetResourceLoadingRequest *_currentResourceLoaderRequest;
    unsigned long long _requestOffset;
    unsigned long long _receiveOffset;
    _Bool _fullyLoaded;
    unsigned long long _bitrate;
    NSURL *_url;
    unsigned long long _fileSize;
    _Bool _async;
}

- (void).cxx_destruct;
- (void)_forTestingOverrideResourceLoader:(id)arg1;
- (void)_dataFinished:(id)arg1 dataRequest:(id)arg2 contentInfo:(id)arg3 loadingRequest:(id)arg4 forTrack:(long long)arg5;
- (void)_dataCallback:(id)arg1 offset:(unsigned long long)arg2 dataRequest:(id)arg3 forTrack:(long long)arg4;
- (void)_fetchStartingAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2 forTrack:(long long)arg3;
- (id)resourceLoader;
- (_Bool)isFullyDownloaded:(long long)arg1;
- (unsigned long long)currentRequestOffsetForTrack:(long long)arg1;
- (unsigned long long)currentReceiveOffsetForTrack:(long long)arg1;
- (_Bool)fetchInProgressForTrack:(long long)arg1;
- (void)cancelRequests;
- (void)resetWithNewDataBlockDistributor:(id)arg1;
- (void)seekForwardToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
- (void)fetchToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
- (void)fetchFirstRequestForSeconds:(unsigned int)arg1 initializationAtomSize:(unsigned long long)arg2 track:(long long)arg3;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)initWithUrl:(id)arg1 bitrate:(unsigned long long)arg2 dataBlockDistributor:(id)arg3 resourceLoader:(id)arg4 dispatchQueue:(id)arg5 async:(_Bool)arg6;
- (id)initWithUrl:(id)arg1 bitrate:(unsigned long long)arg2 dataBlockDistributor:(id)arg3 dispatchQueue:(id)arg4 async:(_Bool)arg5;

@end


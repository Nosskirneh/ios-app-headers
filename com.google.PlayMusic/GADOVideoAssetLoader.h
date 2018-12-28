//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOClearcutLogger, GADOResourceCache, GADOVideoConfiguration, NSString, NSURL;

@interface GADOVideoAssetLoader : NSObject
{
    NSURL *_sourceURL;
    GADOResourceCache *_mainResourceCache;
    GADOVideoConfiguration *_videoConfiguration;
    GADOResourceCache *_resourceCache;
    long long _resourceCacheStartingByteOffset;
    unsigned long long _downloadedBytes;
    unsigned long long _videoSizeInBytes;
    NSString *_contentType;
    GADOClearcutLogger *_logger;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)finishedUsingResourceCache:(id)arg1;
- (_Bool)getResourceCache:(id *)arg1 startingByteOffset:(long long *)arg2 loadingByteOffset:(long long)arg3 error:(id *)arg4;
- (void)resetEventLogger;
- (void)dealloc;
- (id)initWithVideoURL:(id)arg1 resourceCache:(id)arg2 videoConfiguration:(id)arg3;

@end


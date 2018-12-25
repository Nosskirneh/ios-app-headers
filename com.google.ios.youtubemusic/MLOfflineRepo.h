//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MLOfflineRepo : NSObject
{
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableSet *_videoListCache;
    unsigned long long _repoPurgeCounter;
    NSCountedSet *_videoPurgeCounters;
    NSString *_ID;
}

+ (id)queue;
+ (void)purgeAllReposAndVideos:(CDUnknownBlockType)arg1;
+ (id)sharedRepoForID:(id)arg1;
+ (id)globalRepoURL;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (void)purgeBrokenStreamsFromVideo:(id)arg1;
- (void)purgeStream:(id)arg1 fromVideo:(id)arg2;
- (_Bool)importStreamFromURL:(id)arg1 formatStream:(id)arg2 video:(id)arg3 error:(id *)arg4;
- (id)streamsForVideo:(id)arg1;
- (long long)bytesOnDiskForVideo:(id)arg1;
- (_Bool)hasVideo:(id)arg1;
- (void)purgeVideo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)purgeAllVideos:(CDUnknownBlockType)arg1;
- (id)initWithID:(id)arg1;

@end


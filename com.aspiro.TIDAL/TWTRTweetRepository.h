//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol TWTRTweetCache;

@interface TWTRTweetRepository : NSObject
{
    id <TWTRTweetCache> _cache;
}

+ (id)cacheDirectoryPath;
+ (id)sortedArrayWithArray:(id)arg1 withIDsArray:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) id <TWTRTweetCache> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)lookupRequestForTweetIDs:(id)arg1 APIClient:(id)arg2 error:(id *)arg3;
- (void)loadCachedTweetsWithIDs:(id)arg1 perspective:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cacheTweet:(id)arg1 perspective:(id)arg2;
- (void)cacheTweet:(id)arg1;
- (void)loadTweetsWithIDs:(id)arg1 APIClient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCache:(id)arg1;

@end


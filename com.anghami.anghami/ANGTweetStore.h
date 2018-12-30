//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ANGTweetStore : NSObject
{
    NSObject<OS_dispatch_queue> *tweetQueue;
    NSMutableDictionary *tweetCache;
    NSMutableDictionary *tweetsLastUpdated;
    NSMutableDictionary *tweetViewCache;
    NSArray *restrictedStrings;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearCachedTweetViews;
- (void)clearCachedTweets;
- (id)tweetViewForTweet:(id)arg1 andSize:(struct CGSize)arg2;
- (void)lengethenedURLsforTweets:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void)lengthenedUrlForshortUrl:(id)arg1 atIndex:(unsigned long long)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (void)tweetsForScreenName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)init;

@end

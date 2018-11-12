//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPodcastRequest;
@protocol SPTPodcastDataLoaderRequestToken;

@protocol SPTPodcastDataLoader <NSObject>
- (id <SPTPodcastDataLoaderRequestToken>)makeCancelablePodcastRequest:(SPTPodcastRequest *)arg1 onSuccess:(void (^)(NSData *))arg2 onError:(void (^)(NSError *))arg3;
- (void)makePodcastRequest:(SPTPodcastRequest *)arg1 onSuccess:(void (^)(NSData *))arg2 onError:(void (^)(NSError *))arg3;
@end


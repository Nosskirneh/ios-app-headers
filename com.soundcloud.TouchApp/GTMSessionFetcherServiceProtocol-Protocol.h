//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GTMSessionFetcher, NSDate, NSObject, NSOperationQueue, NSURLRequest, NSURLSession;
@protocol NSURLSessionDelegate, OS_dispatch_queue;

@protocol GTMSessionFetcherServiceProtocol <NSObject>
@property(readonly) NSOperationQueue *delegateQueue;
@property _Bool reuseSession;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue;
- (NSDate *)stoppedAllFetchersDate;
- (id <NSURLSessionDelegate>)sessionDelegate;
- (NSURLSession *)sessionForFetcherCreation;
- (NSURLSession *)session;
- (_Bool)isDelayingFetcher:(GTMSessionFetcher *)arg1;
- (GTMSessionFetcher *)fetcherWithRequest:(NSURLRequest *)arg1;
- (void)fetcherDidStop:(GTMSessionFetcher *)arg1;
- (void)fetcherDidBeginFetching:(GTMSessionFetcher *)arg1;
- (void)fetcherDidCreateSession:(GTMSessionFetcher *)arg1;
- (_Bool)fetcherShouldBeginFetching:(GTMSessionFetcher *)arg1;
@end


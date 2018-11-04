//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSURL, NSURLSession, NSURLSessionDataTask;

@interface IDRhmiDownloadOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    NSURL *_URL;
    NSURLSession *_URLSession;
    CDUnknownBlockType _completionHandler;
    NSURLSessionDataTask *_dataTask;
}

+ (id)new;
@property(retain) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)processResponse:(id)arg1 withData:(id)arg2;
- (void)handleConnectionError:(id)arg1;
- (void)completeOperation;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (id)init;
- (id)initWithURLSession:(id)arg1 URL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSError, NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSNumber, NSString, NSURL, NSURLSession, NSURLSessionTask;
@protocol GCKNHTTPRequestDelegate;

@interface GCKNHTTPRequest : NSObject
{
    NSURLSession *_session;
    unsigned long long _identifier;
    NSURLSessionTask *_sessionTask;
    NSMutableURLRequest *_request;
    NSMutableDictionary *_requestHeaders;
    NSURL *_originalURL;
    CDUnknownBlockType _startBlock;
    NSURL *_targetURL;
    NSDate *_lastModifiedTime;
    _Bool _truncated;
    id <GCKNHTTPRequestDelegate> _delegate;
    NSURL *_finalURL;
    long long _statusCode;
    NSDictionary *_responseHeaders;
    NSMutableData *_responseData;
    NSString *_responseMimeType;
    NSNumber *_taskIdentifier;
    NSError *_downloadError;
}

@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(readonly, nonatomic) NSNumber *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(nonatomic) _Bool truncated; // @synthesize truncated=_truncated;
@property(copy, nonatomic) NSString *responseMimeType; // @synthesize responseMimeType=_responseMimeType;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSURL *finalURL; // @synthesize finalURL=_finalURL;
@property(nonatomic) __weak id <GCKNHTTPRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)notifyDidFailWithError:(id)arg1;
- (void)notifyDidCompleteWithStatus:(long long)arg1;
- (void)processResponseHeaders;
- (void)finishBackgroundDownloadWithURL:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)clearTask;
- (_Bool)cancel;
- (void)start;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (id)lastModifiedTime;
- (id)targetURL;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) unsigned long long identifier;
- (id)initWithSession:(id)arg1 identifier:(unsigned long long)arg2 URLRequest:(id)arg3 startBlock:(CDUnknownBlockType)arg4 targetURL:(id)arg5;

@end


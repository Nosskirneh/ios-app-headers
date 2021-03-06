//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features16RequestUploading_-Protocol.h"

@class NSFileManager, NSMutableSet, NSString, RequestQueue;
@protocol OS_dispatch_queue, _TtP4Core10TechLogger_;

@interface ReliableRequestUploader : NSObject <_TtP8Features16RequestUploading_>
{
    RequestQueue *_requestQueue;
    NSString *_cachePath;
    NSFileManager *_fileManager;
    NSMutableSet *_requestURLsInProgress;
    id <_TtP4Core10TechLogger_> _techLogger;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_label;
}

@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) NSMutableSet *requestURLsInProgress; // @synthesize requestURLsInProgress=_requestURLsInProgress;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) RequestQueue *requestQueue; // @synthesize requestQueue=_requestQueue;
- (void).cxx_destruct;
- (_Bool)requestUrlInProgressContainsUrl:(id)arg1;
- (unsigned long long)requestUrlInProgressCount;
- (_Bool)requestQueueIsNotFull;
- (_Bool)shouldSendBatchOfRequests;
- (void)ensureCacheDirExists;
- (id)serializedRequestURLs;
- (id)sortedSerializedRequestURLs;
- (id)trackingTimestampForFileWithURL:(id)arg1;
- (unsigned long long)retryCountForFileWithURL:(id)arg1;
- (void)recordMetric:(id)arg1 of:(id)arg2;
- (void)recordAbandonedUploadOf:(id)arg1;
- (void)recordSuccessfulUploadOf:(id)arg1;
- (void)incrementRetryCountForFileWithURL:(id)arg1;
- (id)nonCollidingHashFromRequest:(id)arg1;
- (id)filenameForRequest:(id)arg1;
- (id)pathForRequest:(id)arg1;
- (void)serializeRequest:(id)arg1;
- (id)deserializeRequestAtFileURL:(id)arg1;
- (void)removeInProgessFileURL:(id)arg1;
- (void)addInProgessFileURL:(id)arg1;
- (void)sendRequestWithFileURL:(id)arg1;
- (void)sendBatchOfRequests;
- (id)suffix;
- (void)flush;
- (void)uploadFailedRequests;
- (void)uploadWithRequests:(id)arg1;
- (void)uploadRequest:(id)arg1;
- (id)initWithRequestQueue:(id)arg1 cachePath:(id)arg2 fileManager:(id)arg3 techLogger:(id)arg4 serialQueue:(id)arg5 label:(id)arg6;
- (id)initWithTechLogger:(id)arg1 requestQueue:(id)arg2 label:(id)arg3;
- (id)initWithTechLogger:(id)arg1 label:(id)arg2;

@end


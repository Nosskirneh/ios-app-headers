//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTTPConnection.h"

@class NSObject, RHAudiAsyncTasksFactory;
@protocol OS_dispatch_queue;

@interface NapsterServerConnection : HTTPConnection
{
    RHAudiAsyncTasksFactory *_asyncTaskFactory;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_queue> *_bgTaskQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bgTaskQueue; // @synthesize bgTaskQueue=_bgTaskQueue;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) RHAudiAsyncTasksFactory *asyncTaskFactory; // @synthesize asyncTaskFactory=_asyncTaskFactory;
- (void).cxx_destruct;
- (id)dataForConnectionWithPathComponents:(id)arg1;
- (id)dataForStatusWithPathComponents:(id)arg1;
- (id)dataForPlaybackWithPathComponents:(id)arg1;
- (id)dataForSearchWithPathComponents:(id)arg1 queryParams:(id)arg2;
- (void)handleSearchFailedWithResponse:(id)arg1;
- (void)handleSearchResults:(id)arg1 withResponse:(id)arg2;
- (id)dataForMetadataWithPathComponents:(id)arg1;
- (id)dataForLibraryWithPathComponents:(id)arg1;
- (id)dataForDownloadsWithPathComponents:(id)arg1;
- (id)dataResponseWithPromise:(id)arg1;
- (id)jsonDataFromObject:(id)arg1 andPromise:(id)arg2;
- (id)jsonDataWithPromise:(id)arg1;
- (id)jsonDataFromResults:(id)arg1 andPromise:(id)arg2;
- (id)jsonDataFromResults:(id)arg1;
- (id)userStatus;
- (id)serverStatus;
- (void)startConnection;
- (id)httpResponseForMethod:(id)arg1 URI:(id)arg2;
- (void)die;
- (void)endBackgroundTask;
- (void)addBackgroundTask;
- (void)performOnBgTaskQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAsyncSocket:(id)arg1 configuration:(id)arg2;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class DownloadTrack, NSString, NSURLSession, NSURLSessionDownloadTask, NSURLSessionFactory, _TtC9SCOffline22DownloadRequestCreator;
@protocol TrackDownloaderDelegate;

@interface TrackDownloader : NSObject <NSURLSessionDownloadDelegate>
{
    NSURLSession *_urlSession;
    _Bool _isInititalDataProgressCallback;
    DownloadTrack *_downloadTrack;
    NSURLSessionFactory *_urlSessionFactory;
    _TtC9SCOffline22DownloadRequestCreator *_requestFactory;
    id <TrackDownloaderDelegate> _delegate;
    NSURLSessionDownloadTask *_downloadTask;
}

@property(nonatomic) _Bool isInititalDataProgressCallback; // @synthesize isInititalDataProgressCallback=_isInititalDataProgressCallback;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) __weak id <TrackDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _TtC9SCOffline22DownloadRequestCreator *requestFactory; // @synthesize requestFactory=_requestFactory;
@property(readonly, nonatomic) NSURLSessionFactory *urlSessionFactory; // @synthesize urlSessionFactory=_urlSessionFactory;
@property(readonly, nonatomic) DownloadTrack *downloadTrack; // @synthesize downloadTrack=_downloadTrack;
- (void).cxx_destruct;
- (id)errorFromResponse:(id)arg1;
- (_Bool)taskCanBeTreatedAsSuccessful:(id)arg1;
@property(readonly, nonatomic) NSURLSession *urlSession;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)cancel;
- (void)download;
- (id)initWithDownloadTrack:(id)arg1 urlSessionFactory:(id)arg2 requestFactory:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

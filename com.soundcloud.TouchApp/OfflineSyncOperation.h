//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "TrackDownloaderDelegate-Protocol.h"

@class CryptoService, DownloadRequestCreator, DownloadTrack, NSString, NSURLSessionFactory, SecureStorage, TrackDownloader, TrackDownloaderFactory;
@protocol OfflineSyncOperationDelegate;

@interface OfflineSyncOperation : NSOperation <TrackDownloaderDelegate>
{
    _Bool _operationIsFinished;
    _Bool _operationIsExecuting;
    DownloadTrack *_downloadTrack;
    SecureStorage *_secureStorage;
    CryptoService *_cryptoService;
    TrackDownloaderFactory *_trackDownloaderFactory;
    TrackDownloader *_trackDownloader;
    id <OfflineSyncOperationDelegate> _delegate;
    DownloadRequestCreator *_requestFactory;
    NSURLSessionFactory *_sessionFactory;
}

@property(readonly, nonatomic) NSURLSessionFactory *sessionFactory; // @synthesize sessionFactory=_sessionFactory;
@property(readonly, nonatomic) DownloadRequestCreator *requestFactory; // @synthesize requestFactory=_requestFactory;
@property(nonatomic) _Bool operationIsExecuting; // @synthesize operationIsExecuting=_operationIsExecuting;
@property(nonatomic) _Bool operationIsFinished; // @synthesize operationIsFinished=_operationIsFinished;
@property(nonatomic) __weak id <OfflineSyncOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TrackDownloader *trackDownloader; // @synthesize trackDownloader=_trackDownloader;
@property(readonly, nonatomic) TrackDownloaderFactory *trackDownloaderFactory; // @synthesize trackDownloaderFactory=_trackDownloaderFactory;
@property(readonly, nonatomic) CryptoService *cryptoService; // @synthesize cryptoService=_cryptoService;
@property(readonly, nonatomic) SecureStorage *secureStorage; // @synthesize secureStorage=_secureStorage;
@property(readonly, nonatomic) DownloadTrack *downloadTrack; // @synthesize downloadTrack=_downloadTrack;
- (void).cxx_destruct;
- (id)createTrackDownloader;
- (void)moveAndRecryptTrackAsynchronouslyForUrn:(id)arg1;
- (void)moveFileWithinSameRunloopForUrn:(id)arg1 fromEphemeralDownloadLocation:(id)arg2;
- (void)markOperationExecuting;
- (void)markOperationCompleted;
- (void)didFailDownloadingTrackForUrn:(id)arg1 withError:(id)arg2;
- (void)didFinishDownloadingTrackForUrn:(id)arg1 toLocation:(id)arg2;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isAsynchronous;
- (void)cancel;
- (void)start;
- (id)initWithSecureStorage:(id)arg1 downloadTrack:(id)arg2 sessionFactory:(id)arg3 requestFactory:(id)arg4 delegate:(id)arg5 cryptoService:(id)arg6 trackDownloaderFactory:(id)arg7;
- (id)initWithConfigurationProvider:(id)arg1 downloadTrack:(id)arg2 sessionFactory:(id)arg3 requestFactory:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


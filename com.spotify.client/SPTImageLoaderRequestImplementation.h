//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTImageLoaderRemoteCallback.h"
#import "SPTImageLoaderRequest.h"

@class NSDate, NSString, NSURL, SPTDataLoader;

@interface SPTImageLoaderRequestImplementation : NSObject <SPTImageLoaderRequest, SPTImageLoaderRemoteCallback>
{
    _Bool _cancelCalled;
    _Bool _preventInMemoryCaching;
    _Bool _preventPersistentCaching;
    _Bool _allowUpscaling;
    id <SPTImageLoaderRequestDelegate> _delegate;
    NSString *_persistenceKey;
    NSString *_sourceIdentifier;
    id <SPTImageLoaderRemote> _baseImageLoader;
    NSURL *_URL;
    NSDate *_creationDate;
    id _context;
    id <SPTImageLoaderRemoteCallback> _callback;
    SPTDataLoader *_dataLoader;
    id <SPTDataLoaderCancellationToken> _cancelToken;
    struct CGSize _downloadSize;
    struct CGSize _requestedSize;
}

@property(retain) id <SPTDataLoaderCancellationToken> cancelToken; // @synthesize cancelToken=_cancelToken;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
@property(nonatomic) __weak id <SPTImageLoaderRemoteCallback> callback; // @synthesize callback=_callback;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=_requestedSize;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) _Bool preventPersistentCaching; // @synthesize preventPersistentCaching=_preventPersistentCaching;
@property(nonatomic) _Bool preventInMemoryCaching; // @synthesize preventInMemoryCaching=_preventInMemoryCaching;
@property _Bool cancelCalled; // @synthesize cancelCalled=_cancelCalled;
@property(nonatomic) __weak id <SPTImageLoaderRemote> baseImageLoader; // @synthesize baseImageLoader=_baseImageLoader;
@property(readonly, nonatomic) struct CGSize downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)cancelled;
- (void)cancel;
- (void)load;
- (id)init;
- (void)imageLoaded:(id)arg1 withDataKey:(id)arg2 forURL:(id)arg3 startTime:(id)arg4 forEntity:(id)arg5;
- (void)imageLoadError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)imageLoaded:(id)arg1 forURL:(id)arg2 startTime:(id)arg3 context:(id)arg4;
- (void)dispatchError:(id)arg1;
- (void)dispatchSuccess:(id)arg1;
- (void)loadRemoteImageWithURL:(id)arg1;
- (void)handleCallback;
- (id)initWithURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 dataLoader:(id)arg7 delegate:(id)arg8 callback:(id)arg9 baseImageLoader:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


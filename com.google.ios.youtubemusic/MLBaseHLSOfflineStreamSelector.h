//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLStreamSelector.h"

#import "MLHLSProxyDelegate-Protocol.h"

@class GIMMe, MLHLSProxy, MLRemoteStream, NSString;

@interface MLBaseHLSOfflineStreamSelector : MLStreamSelector <MLHLSProxyDelegate>
{
    MLHLSProxy *_proxy;
    MLRemoteStream *_audioRemoteStream;
    MLRemoteStream *_videoRemoteStream;
    _Bool _playingVideoStream;
    _Bool _preparedProxy;
}

- (void).cxx_destruct;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (void)proxyDidRestart;
- (void)proxyFailedWithError:(id)arg1;
- (void)loadMasterPlaylistWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)playbackWillStart;
- (id)selectedAudioFormat;
- (_Bool)isUsingLocalStreams;
- (_Bool)selectStreamWithReason:(long long)arg1 forceSelection:(_Bool)arg2;
- (void)terminate;
- (id)resourceLoaderDelegate;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *condensedURLPrefix;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


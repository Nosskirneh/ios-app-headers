//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseComponent.h"

#import "HAMChunkLoader-Protocol.h"

@class MLOnesieVideoData, MLPlayerEventCenter, NSMutableDictionary, NSString;
@protocol HAMClock, HAMDataLoader, MLABRPolicy;

@interface MLChunkLoader : HAMBaseComponent <HAMChunkLoader>
{
    _Bool _usePOST;
    _Bool _enableFallbackHost;
    int _maxFailureAttemptsBeforeFallback;
    int _primaryProbingDelay;
    id <HAMDataLoader> _dataLoader;
    id <MLABRPolicy> _ABRPolicy;
    MLOnesieVideoData *_onesieVideoData;
    id <HAMClock> _clock;
    MLPlayerEventCenter *_eventCenter;
    NSMutableDictionary *_formatToData;
    NSMutableDictionary *_hostStatsMap;
}

- (void).cxx_destruct;
- (void)didCompleteProbingWithURL:(id)arg1 error:(id)arg2;
- (void)probePrimaryURL:(id)arg1 requestURL:(id)arg2;
- (_Bool)shouldFallbackFrom:(id)arg1 toFallbackURL:(id)arg2;
- (id)createRequest:(id)arg1 range:(id)arg2 format:(id)arg3;
- (id)maybeStartOnesieTaskWithFormat:(id)arg1 range:(id)arg2 chunks:(id)arg3 delegate:(id)arg4;
- (id)hostStatsForHost:(id)arg1;
- (void)handleRedirectForFormat:(id)arg1 oldURL:(id)arg2 oldURLRelativePath:(id)arg3 newURL:(id)arg4;
- (id)startTaskWithChunks:(id)arg1 userInfo:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)initWithContext:(id)arg1 config:(id)arg2 dataLoader:(id)arg3 ABRPolicy:(id)arg4 onesieVideoData:(id)arg5 clock:(id)arg6 eventCenter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


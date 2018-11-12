//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRMixTrackFetcher-Protocol.h"

@class DZRMusicLibrarySynchronizer, DeezerUser, NSString;

@interface DZROfflineMixTrackFetcher : NSObject <DZRMixTrackFetcher>
{
    DeezerUser *_deezerUser;
    DZRMusicLibrarySynchronizer *_synchronizer;
    unsigned long long _trackBatchSize;
}

@property(nonatomic) unsigned long long trackBatchSize; // @synthesize trackBatchSize=_trackBatchSize;
@property(retain, nonatomic) DZRMusicLibrarySynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
@property(retain, nonatomic) DeezerUser *deezerUser; // @synthesize deezerUser=_deezerUser;
- (void).cxx_destruct;
- (_Bool)availableOffline;
- (void)fetchTracksForExternalPlayerAndListeningOrigin:(unsigned long long)arg1 contextID:(id)arg2 configuration:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)fetchTracksForListeningOrigin:(unsigned long long)arg1 contextID:(id)arg2 configuration:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithSynchronizer:(id)arg1 trackBatchSize:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

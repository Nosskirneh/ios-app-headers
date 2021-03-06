//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LoaderDelegate-Protocol.h"

@class NSString, NativeHomeLoader, ServerPlaylistsSyncer;

@interface ANGBackgroundSyncManager : NSObject <LoaderDelegate>
{
    unsigned long long ongoingRequestCount;
    unsigned long long succeededRequestCount;
    unsigned long long failedRequestCount;
    NativeHomeLoader *homeLoader;
    ServerPlaylistsSyncer *playlistsLoader;
    CDUnknownBlockType completion;
    unsigned long long _mode;
}

@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)loadingFinished:(id)arg1;
- (void)loadingFailed:(id)arg1 withError:(id)arg2;
- (void)maybeCallCompletion;
- (void)resetCounters;
- (void)initLockObjects;
@property(readonly, nonatomic) unsigned long long finishedRequestCount;
@property(readonly, nonatomic) unsigned long long failedRequestCount;
@property(readonly, nonatomic) unsigned long long succeededRequestCount;
@property(readonly, nonatomic) unsigned long long ongoingRequestCount;
@property(readonly, nonatomic) _Bool syncInProgress;
- (void)cancelSync;
- (void)startSync;
- (id)initWithMode:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRWDeviceState, GRWExperimentsStore, GRWUserAccounts;
@protocol GRWExperimentsFetcher, OS_dispatch_queue;

@interface GRWExperimentsDataSource : NSObject
{
    GRWExperimentsStore *_store;
    id <GRWExperimentsFetcher> _fetcher;
    GRWUserAccounts *_userAccounts;
    GRWDeviceState *_deviceState;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CDUnknownBlockType _syncCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType syncCompletion; // @synthesize syncCompletion=_syncCompletion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) GRWDeviceState *deviceState; // @synthesize deviceState=_deviceState;
@property(retain, nonatomic) GRWUserAccounts *userAccounts; // @synthesize userAccounts=_userAccounts;
@property(retain, nonatomic) id <GRWExperimentsFetcher> fetcher; // @synthesize fetcher=_fetcher;
@property(readonly, nonatomic) GRWExperimentsStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)updateLastSyncWithDate:(id)arg1;
- (_Bool)shouldSyncWithServer;
- (void)executeCompletionAsync:(CDUnknownBlockType)arg1;
- (void)fetchExperimentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchExperimentsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (id)experimentFlagsForUserID:(id)arg1;
- (void)forceSyncWithServer:(CDUnknownBlockType)arg1;
- (void)loadData;
- (id)initWithUserAccounts:(id)arg1 fetcher:(id)arg2 deviceState:(id)arg3 syncCompletion:(CDUnknownBlockType)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OfflineStateCollectionInteracting-Protocol.h"

@class NSLock, NSSet, NSString, OfflineStateReachabilityMapper;
@protocol OfflineStateCollectionInteractorDelegate, OfflineStateReposing, OfflineUserConfigDataSourcing, _TtP8Features24OfflineUserConfiguration_, _TtP9SCOffline28InteractorTechLoggingHelping_;

@interface OfflineStateCollectionInteractor : NSObject <OfflineStateCollectionInteracting>
{
    id <OfflineStateCollectionInteractorDelegate> _delegate;
    OfflineStateReachabilityMapper *_offlineSyncStateReachabilityMapper;
    id <_TtP8Features24OfflineUserConfiguration_> _currentConfig;
    NSSet *_currentStates;
    id <OfflineStateReposing> _offlineStateRepository;
    id <OfflineUserConfigDataSourcing> _offlineUserConfigDataSource;
    id _identifier;
    id _statesDisposable;
    id _configDisposable;
    NSLock *_lock;
    id <_TtP9SCOffline28InteractorTechLoggingHelping_> _interactorTechLoggingHelper;
}

@property(readonly, nonatomic) id <_TtP9SCOffline28InteractorTechLoggingHelping_> interactorTechLoggingHelper; // @synthesize interactorTechLoggingHelper=_interactorTechLoggingHelper;
@property(readonly, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) id configDisposable; // @synthesize configDisposable=_configDisposable;
@property(retain, nonatomic) id statesDisposable; // @synthesize statesDisposable=_statesDisposable;
@property(retain, nonatomic) id identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) id <OfflineUserConfigDataSourcing> offlineUserConfigDataSource; // @synthesize offlineUserConfigDataSource=_offlineUserConfigDataSource;
@property(readonly, nonatomic) id <OfflineStateReposing> offlineStateRepository; // @synthesize offlineStateRepository=_offlineStateRepository;
@property(retain) NSSet *currentStates; // @synthesize currentStates=_currentStates;
@property(retain) id <_TtP8Features24OfflineUserConfiguration_> currentConfig; // @synthesize currentConfig=_currentConfig;
@property(readonly, nonatomic) OfflineStateReachabilityMapper *offlineSyncStateReachabilityMapper; // @synthesize offlineSyncStateReachabilityMapper=_offlineSyncStateReachabilityMapper;
@property(nonatomic) __weak id <OfflineStateCollectionInteractorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)statesDidChange;
- (void)observeUserConfigChanges;
- (void)deactivate;
- (void)updateForLikes;
- (void)updateWithUrn:(id)arg1;
- (id)initWithOfflineStateRepository:(id)arg1 offlineUserConfigDataSource:(id)arg2 offlineSyncStateReachabilityMapper:(id)arg3 interactorTechLoggingHelper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


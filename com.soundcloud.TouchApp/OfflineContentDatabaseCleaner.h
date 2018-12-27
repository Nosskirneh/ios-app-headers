//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OfflineContentDatabaseCleanerDelegate, OfflineStateReposing, OfflineUserConfigDataSourcing;

@interface OfflineContentDatabaseCleaner : NSObject
{
    id <OfflineContentDatabaseCleanerDelegate> _delegate;
    id <OfflineUserConfigDataSourcing> _userConfigDataSource;
    id <OfflineStateReposing> _stateRepository;
}

@property(readonly, nonatomic) id <OfflineStateReposing> stateRepository; // @synthesize stateRepository=_stateRepository;
@property(readonly, nonatomic) id <OfflineUserConfigDataSourcing> userConfigDataSource; // @synthesize userConfigDataSource=_userConfigDataSource;
@property(nonatomic) __weak id <OfflineContentDatabaseCleanerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)resetConfigurationSignal;
- (id)cleanAfterFeatureDisabled;
- (void)cleanAfterFeatureDisabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteUnreachableAudioFilesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUserConfigDataSource:(id)arg1 stateRepository:(id)arg2;

@end


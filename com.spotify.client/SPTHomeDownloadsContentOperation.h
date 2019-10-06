//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTOfflineContentModelDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTOfflineContentModel, SPTOfflineContentModelEntity, SPTOfflineModeState;

@interface SPTHomeDownloadsContentOperation : NSObject <SPTOfflineContentModelDelegate, SPTOfflineModeStateObserver, HUBContentOperation>
{
    _Bool _currentlyOffline;
    id <HUBContentOperationDelegate> delegate;
    id <SPTOfflineModeState> _offlineState;
    id <SPTOfflineContentModel> _offlineMusicModel;
    id <SPTOfflineContentModel> _offlinePodcastModel;
    id <SPTOfflineContentModelEntity> _offlineMusicEntity;
    id <SPTOfflineContentModelEntity> _offlinePodcastEntity;
}

@property(retain, nonatomic) id <SPTOfflineContentModelEntity> offlinePodcastEntity; // @synthesize offlinePodcastEntity=_offlinePodcastEntity;
@property(retain, nonatomic) id <SPTOfflineContentModelEntity> offlineMusicEntity; // @synthesize offlineMusicEntity=_offlineMusicEntity;
@property(nonatomic, getter=isCurrentlyOffline) _Bool currentlyOffline; // @synthesize currentlyOffline=_currentlyOffline;
@property(readonly, nonatomic) id <SPTOfflineContentModel> offlinePodcastModel; // @synthesize offlinePodcastModel=_offlinePodcastModel;
@property(readonly, nonatomic) id <SPTOfflineContentModel> offlineMusicModel; // @synthesize offlineMusicModel=_offlineMusicModel;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)hasDownloadedMusic;
- (_Bool)hasDownloadedEpisodes;
- (void)updateOfflineModels;
- (void)offsetPreferredIndexForViewModelBuilder:(id)arg1;
- (long long)iconForEntityURL:(id)arg1;
- (void)configureHomeComponent:(id)arg1 name:(id)arg2 title:(id)arg3 position:(long long)arg4;
- (void)configureEpisodeItemComponent:(id)arg1 withModelItem:(id)arg2;
- (void)configureMusicItemComponent:(id)arg1 withModelItem:(id)arg2;
- (void)configureDownloadsSectionForViewModelBuilder:(id)arg1 offlineEntity:(id)arg2 sectionTitle:(id)arg3 sectionSuffixIdentifier:(id)arg4 positionOffset:(unsigned long long)arg5;
- (void)offlineModel:(id)arg1 error:(id)arg2;
- (void)offlineModelDidUpdate:(id)arg1 entity:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithOfflineModeState:(id)arg1 offlineMusicModel:(id)arg2 offlinePodcastModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


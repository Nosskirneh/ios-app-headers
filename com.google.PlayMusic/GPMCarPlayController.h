//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPPlayableContentDataSource-Protocol.h"
#import "MPPlayableContentDelegate-Protocol.h"

@class GPMInnerJamFetcher, GPMLaunchStateController, GPMMusicContentTree, GPMServiceConfiguration, MPPlayableContentManager, MusicModel, MusicPreferences, MusicQueueFeeder, MusicQueueManager, NSMutableDictionary, NSString;
@protocol GPMCarPlayLoggingDelegate;

@interface GPMCarPlayController : NSObject <MPPlayableContentDataSource, MPPlayableContentDelegate>
{
    GPMLaunchStateController *_launchStateController;
    GPMServiceConfiguration *_serviceConfiguration;
    MusicPreferences *_musicPreferences;
    GPMInnerJamFetcher *_innerJamFetcher;
    MusicModel *_musicModel;
    MusicQueueFeeder *_musicQueueFeeder;
    MusicQueueManager *_musicQueueManager;
    MPPlayableContentManager *_playableContentManager;
    GPMMusicContentTree *_musicContentTree;
    NSMutableDictionary *_modules;
    _Bool _isCarPlayConnected;
    id <GPMCarPlayLoggingDelegate> _loggingDelegate;
}

@property(readonly, nonatomic) _Bool isCarPlayConnected; // @synthesize isCarPlayConnected=_isCarPlayConnected;
@property(nonatomic) __weak id <GPMCarPlayLoggingDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
- (void).cxx_destruct;
- (id)emptyStateContentItemForLibraryIdentifier:(id)arg1;
- (struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModuleList *)filterUnplayableContentFromCeModuleList:(struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModuleList *)arg1;
- (struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModuleList *)fallbackModuleList;
- (void)onDeviceChanged:(id)arg1;
- (void)modelDidUpdate:(id)arg1;
- (void)loadMyLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)baseMusicContentItemForIdentifier:(id)arg1 titleKey:(id)arg2 fallbackTitle:(id)arg3;
- (void)loadChildrenOfMusicItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadBrowseStationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadItemsFromMusicModelSnapshot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadMyLibraryGenresWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMyLibraryAlbumsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMyLibraryArtistsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMyLibraryStationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMyLibraryPlaylistsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadRecentsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMainstageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadOfflineWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadMusicContentItemsForQuickPlayCEModule:(struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModule *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadQuickPlayCEModuleByToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadQuickPlayCEModuleList:(struct GTLRMusicPA_GoogleInternalPlayMusicInnerjamV1RenderersCeDeviceModuleList *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadQuickPlayResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)playableContentManager:(id)arg1 didUpdateContext:(id)arg2;
- (void)playableContentManager:(id)arg1 initiatePlaybackOfContentItemAtIndexPath:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contentItemAtIndexPath:(id)arg1;
- (long long)numberOfChildItemsAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithLaunchStateController:(id)arg1 serviceConfiguration:(id)arg2 musicPreferences:(id)arg3 innerJamFetcher:(id)arg4 musicModel:(id)arg5 musicQueueFeeder:(id)arg6 musicQueueManager:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


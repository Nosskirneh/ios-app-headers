//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationContentProvider-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationCollectionContentFactory;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformService, SPTExternalIntegrationContentService, SPTExternalIntegrationTestManagerService, SPTPlaylistPlatformPlaylistDataLoader, SPTPlaylistPlatformService, SPTPodcastUIService, SPTSessionService;

@interface SPTExternalIntegrationCollectionContentProviderService : NSObject <SPTService, SPTExternalIntegrationContentProvider>
{
    id <SPTExternalIntegrationContentService> _contentService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    id <SPTSessionService> _sessionService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTCollectionPlatformDataLoader> _dataLoader;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    SPTExternalIntegrationCollectionContentFactory *_contentFactory;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) SPTExternalIntegrationCollectionContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationContentService> contentService; // @synthesize contentService=_contentService;
- (void).cxx_destruct;
- (id)createPlaceholderContentItemForURI:(id)arg1;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForContentWithURI:(id)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


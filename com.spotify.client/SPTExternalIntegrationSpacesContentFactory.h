//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol SPTOfflineManager;

@interface SPTExternalIntegrationSpacesContentFactory : NSObject
{
    id <SPTOfflineManager> _offlineManager;
}

@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (_Bool)isSpacesBlockTrack:(id)arg1;
- (_Bool)isSpacesBlockHeader:(id)arg1;
- (_Bool)isSpacesBlockPlayable:(id)arg1;
- (id)rootItemTitleForURI:(id)arg1;
- (id)imageDictionaryForSpaceItem:(id)arg1;
- (long long)spotifyIconForSpaceItem:(id)arg1;
- (long long)spotifyRootIconForSpaceItem:(id)arg1;
- (id)imageURIForSpacesItem:(id)arg1;
- (id)spacesContentURIForSpacesItem:(id)arg1;
- (id)contentFromSpacesItem:(id)arg1 testManager:(id)arg2;
- (id)contentFromSpacesBlock:(id)arg1 identifier:(id)arg2 URI:(id)arg3 testManager:(id)arg4;
- (id)contentListFromSpacesBlock:(id)arg1 testManager:(id)arg2;
- (id)contentListFromSpacesList:(id)arg1 URI:(id)arg2 flattenBlocks:(_Bool)arg3 withTestManager:(id)arg4;
- (id)createPlaceholderSpacesContentForURI:(id)arg1;
- (id)createSpacesContentForURI:(id)arg1 fromSpacesList:(id)arg2 withTestManager:(id)arg3;
- (id)initWithOfflineManager:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineContentModelDelegate-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTInAppMessagePodcastExperimentsHandlerDelegate, SPTOfflineContentModel;

@interface SPTInAppMessagePodcastExperimentsHandler : NSObject <SPTOfflineContentModelDelegate>
{
    _Bool _initialFollowCountLoaded;
    _Bool _initialDownloadCountLoaded;
    id <SPTInAppMessagePodcastExperimentsHandlerDelegate> _delegate;
    id <SPTOfflineContentModel> _offlineContentModel;
    id <SPTCollectionPlatformDataLoaderRequestToken> _token;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataLoader;
    unsigned long long _podcastFollowCount;
    unsigned long long _podcastDownloadCount;
}

@property(nonatomic) unsigned long long podcastDownloadCount; // @synthesize podcastDownloadCount=_podcastDownloadCount;
@property(nonatomic) unsigned long long podcastFollowCount; // @synthesize podcastFollowCount=_podcastFollowCount;
@property(nonatomic) _Bool initialDownloadCountLoaded; // @synthesize initialDownloadCountLoaded=_initialDownloadCountLoaded;
@property(nonatomic) _Bool initialFollowCountLoaded; // @synthesize initialFollowCountLoaded=_initialFollowCountLoaded;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataLoader; // @synthesize collectionPlatformDataLoader=_collectionPlatformDataLoader;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> token; // @synthesize token=_token;
@property(retain, nonatomic) id <SPTOfflineContentModel> offlineContentModel; // @synthesize offlineContentModel=_offlineContentModel;
@property(nonatomic) __weak id <SPTInAppMessagePodcastExperimentsHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineModel:(id)arg1 error:(id)arg2;
- (void)offlineModelDidUpdate:(id)arg1 entity:(id)arg2;
- (id)parseResponseItems:(id)arg1;
- (void)subscribeToPodcastCollectionChanges;
- (void)loadOfflineContentModel;
- (void)dealloc;
- (id)initWithOfflineContentModel:(id)arg1 collectionPlatformDataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTSingleRequestViewModel.h"

@class NSArray, NSString, NSURL, SPTAlbumData;

@interface SPTFreeTierAlbumViewModel : SPTSingleRequestViewModel
{
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionAlbumSubscription;
    SPTAlbumData *_albumData;
    long long _albumTracksCount;
    NSURL *_URL;
    id <SPTCollectionPlatform> _collectionPlatform;
}

@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long albumTracksCount; // @synthesize albumTracksCount=_albumTracksCount;
@property(retain, nonatomic) SPTAlbumData *albumData; // @synthesize albumData=_albumData;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionAlbumSubscription; // @synthesize collectionAlbumSubscription=_collectionAlbumSubscription;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *albumURL;
@property(readonly, nonatomic) NSString *albumName;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSArray *albumTracks;
- (void)parseSuccessfulResponseDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataWithDictionary:(id)arg1;
- (id)initWithOfflineModeState:(id)arg1 productState:(id)arg2 dataLoader:(id)arg3 serviceName:(id)arg4 endpointPath:(id)arg5 albumURL:(id)arg6 collectionPlatform:(id)arg7;

@end

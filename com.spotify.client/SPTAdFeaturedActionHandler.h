//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTAdCosmosBridge, SPTAdFeatureFlagChecks, SPTDataLoader;

@interface SPTAdFeaturedActionHandler : NSObject <SPTDataLoaderDelegate>
{
    _Bool _emailSent;
    id <SPTCollectionPlatform> _collectionPlatform;
    SPTDataLoader *_dataLoader;
    id <SPTAdEventLogger> _eventLogger;
    id <SPTResolver> _adResolver;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTAdFeatureFlagChecks *_flagChecker;
    SPTAdCosmosBridge *_cosmosBridge;
    id <SPTPlayer> _player;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTFollowModelFactory> _followFactory;
}

@property(nonatomic) __weak id <SPTFollowModelFactory> followFactory; // @synthesize followFactory=_followFactory;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *flagChecker; // @synthesize flagChecker=_flagChecker;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTResolver> adResolver; // @synthesize adResolver=_adResolver;
@property(nonatomic) __weak id <SPTAdEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) _Bool emailSent; // @synthesize emailSent=_emailSent;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (_Bool)emailWithFeaturedActionURI:(id)arg1 adId:(id)arg2;
- (_Bool)playTrackURL:(id)arg1 adId:(id)arg2;
- (_Bool)playPlaylistURL:(id)arg1 adId:(id)arg2;
- (_Bool)followArtistURL:(id)arg1;
- (_Bool)followPlaylistURL:(id)arg1;
- (_Bool)saveURL:(id)arg1;
- (_Bool)performFeaturedAction:(id)arg1 withAdURI:(id)arg2 adId:(id)arg3 creativeId:(id)arg4;
- (id)initWithCollectionPlatform:(id)arg1 dataloader:(id)arg2 adEventLogger:(id)arg3 player:(id)arg4 playlistModel:(id)arg5 followFactory:(id)arg6 adResolver:(id)arg7 linkDispatcher:(id)arg8 flagChecker:(id)arg9 cosmosBridge:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


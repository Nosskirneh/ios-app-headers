//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"

@class NSDictionary, NSSet, NSURL;
@protocol HUBContentOperationDelegate, SPTCollectionPlatformDataLoaderRequestToken, SPTCollectionPlatformStateProvider, SPTCollectionPlatformTestManager, SPTHubComponentModelURIResolver;

@interface SPTFreeTierBannedTracksContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    id <SPTCollectionPlatformStateProvider> _collectionPlaformStateProvider;
    NSURL *_contextURL;
    id <SPTHubComponentModelURIResolver> _componentModelURIResolver;
    id <SPTCollectionPlatformTestManager> _collectionPlaformTestManager;
    id <SPTCollectionPlatformDataLoaderRequestToken> _requestToken;
    NSDictionary *_URLBanMap;
    NSSet *_subscribedURLs;
}

@property(copy, nonatomic) NSSet *subscribedURLs; // @synthesize subscribedURLs=_subscribedURLs;
@property(copy, nonatomic) NSDictionary *URLBanMap; // @synthesize URLBanMap=_URLBanMap;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> requestToken; // @synthesize requestToken=_requestToken;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlaformTestManager; // @synthesize collectionPlaformTestManager=_collectionPlaformTestManager;
@property(readonly, nonatomic) id <SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, nonatomic) NSURL *contextURL; // @synthesize contextURL=_contextURL;
@property(readonly, nonatomic) id <SPTCollectionPlatformStateProvider> collectionPlaformStateProvider; // @synthesize collectionPlaformStateProvider=_collectionPlaformStateProvider;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)subscribeCollectionStateChangesForURLS:(id)arg1;
- (id)initWithContextURL:(id)arg1 collectionPlaformStateProvider:(id)arg2 componentModelURIResolver:(id)arg3 collectionPlaformTestManager:(id)arg4;

@end


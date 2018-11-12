//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTHubLocalContentProviderDelegate-Protocol.h"
#import "SPTHubRemoteContentProviderDelegate-Protocol.h"

@class NSDate, NSString, SPTHubContentBuilder;
@protocol SPTHubContentLoaderDelegate, SPTHubDictionaryPathSet, SPTHubLocalContentProvider, SPTHubReloadPolicy, SPTHubRemoteContentProvider;

@interface SPTHubContentLoader : NSObject <SPTHubRemoteContentProviderDelegate, SPTHubLocalContentProviderDelegate>
{
    _Bool _loading;
    id <SPTHubContentLoaderDelegate> _delegate;
    id <SPTHubRemoteContentProvider> _remoteContentProvider;
    id <SPTHubDictionaryPathSet> _remoteContentDictionaryPathSet;
    id <SPTHubLocalContentProvider> _localContentProvider;
    id <SPTHubReloadPolicy> _reloadPolicy;
    SPTHubContentBuilder *_contentBuilder;
    NSDate *_lastReloadDate;
}

@property(retain, nonatomic) NSDate *lastReloadDate; // @synthesize lastReloadDate=_lastReloadDate;
@property(readonly, nonatomic) SPTHubContentBuilder *contentBuilder; // @synthesize contentBuilder=_contentBuilder;
@property(readonly, nonatomic) id <SPTHubReloadPolicy> reloadPolicy; // @synthesize reloadPolicy=_reloadPolicy;
@property(readonly, nonatomic) id <SPTHubLocalContentProvider> localContentProvider; // @synthesize localContentProvider=_localContentProvider;
@property(readonly, nonatomic) id <SPTHubDictionaryPathSet> remoteContentDictionaryPathSet; // @synthesize remoteContentDictionaryPathSet=_remoteContentDictionaryPathSet;
@property(readonly, nonatomic) id <SPTHubRemoteContentProvider> remoteContentProvider; // @synthesize remoteContentProvider=_remoteContentProvider;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <SPTHubContentLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadIfNeededForViewURI:(id)arg1 currentContentSet:(id)arg2;
- (void)contentLoadingComplete;
- (_Bool)addLocalContentForViewURI:(id)arg1;
- (void)didLoadRemoteContentDictionary:(id)arg1 blockDictionaries:(id)arg2 error:(id)arg3 forViewURI:(id)arg4;
- (void)hubLocalContentProvider:(id)arg1 didEncounterError:(id)arg2;
- (void)hubLocalContentProviderDidFinish:(id)arg1;
- (id)provideHubContentBuilderForLocalContentProvider:(id)arg1;
- (void)hubRemoteContentProvider:(id)arg1 didEncounterError:(id)arg2;
- (void)hubRemoteContentProvider:(id)arg1 didLoadRemoteBlockDictionaries:(id)arg2 forViewURI:(id)arg3;
- (void)hubRemoteContentProvider:(id)arg1 didLoadRemoteContentDictionary:(id)arg2 forViewURI:(id)arg3;
- (void)cancelAllContentOperationsForReload:(_Bool)arg1;
- (id)updatedContentSetForNewSelectedTabIndex:(unsigned long long)arg1;
- (_Bool)loadContentFromEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (_Bool)loadContentForViewURI:(id)arg1;
- (void)prepareForViewWithURI:(id)arg1 currentContentSet:(id)arg2;
- (id)initWithRemoteContentProvider:(id)arg1 remoteContentDictionaryPathSet:(id)arg2 localContentProvider:(id)arg3 reloadPolicy:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


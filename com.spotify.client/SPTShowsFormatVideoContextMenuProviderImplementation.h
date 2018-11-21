//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowsFormatVideoContextMenuProvider-Protocol.h"

@class NSString;
@protocol GLUETheme, SPContextMenuFeature, SPTCollectionPlatform, SPTContextMenuPresenter, SPTPodcastTestManager, SPTShowEntityService;

@interface SPTShowsFormatVideoContextMenuProviderImplementation : NSObject <SPTShowsFormatVideoContextMenuProvider>
{
    id <GLUETheme> _theme;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTShowEntityService> _showEntityService;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
}

@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(readonly, nonatomic) id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
@property(readonly, nonatomic) id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)presentContextMenuForEpisodeWithURI:(id)arg1 episode:(id)arg2 episodeMetadata:(id)arg3 viewController:(id)arg4 sourceView:(id)arg5 sourceURL:(id)arg6 displayContext:(long long)arg7 logContext:(id)arg8;
- (void)presentContextMenuForEpisodeWithURI:(id)arg1 episodeMetadata:(id)arg2 viewController:(id)arg3 sourceView:(id)arg4 sourceURL:(id)arg5 displayContext:(long long)arg6 logContext:(id)arg7;
- (id)initWithContextMenuFeature:(id)arg1 showEntityService:(id)arg2 theme:(id)arg3 podcastTestManager:(id)arg4 collectionPlatform:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


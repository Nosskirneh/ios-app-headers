//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTNowPlayingBaseInfoAreaViewController.h"

#import "SPTPodcastPreferencesObserver.h"

@class NSString, SPTProgressView;

@interface SPTNowPlayingPodcastInfoAreaViewController : SPTNowPlayingBaseInfoAreaViewController <SPTPodcastPreferencesObserver>
{
    id <SPContextMenuFeature> _contextMenu;
    id <SPTUIPresentationService> _presentationService;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTPodcastIconProvider> _podcastIconProvider;
    id <SPTPodmarksManager> _podmarksManager;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTProgressView *_progressView;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) id <SPTPodmarksManager> podmarksManager; // @synthesize podmarksManager=_podmarksManager;
@property(retain, nonatomic) id <SPTPodcastIconProvider> podcastIconProvider; // @synthesize podcastIconProvider=_podcastIconProvider;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
- (void).cxx_destruct;
- (void)podcastPlaybackSpeedDidUpdate:(id)arg1 oldSpeed:(id)arg2;
- (void)contextMenuPressed:(id)arg1;
- (void)showDidAddPodmarkBar:(id)arg1;
- (void)showPodcastPlaybackSpeedOptionsPressed:(id)arg1;
- (void)showAlbumButtonPressed:(id)arg1;
- (id)provideLeftAccessoryButton;
- (void)dealloc;
- (id)initWithModel:(id)arg1 theme:(id)arg2 contextMenuFeature:(id)arg3 podcastContextMenuProvider:(id)arg4 podcastSpeedControlManager:(id)arg5 podcastIconProvider:(id)arg6 podmarksManager:(id)arg7 nowPlayingManager:(id)arg8 presentationService:(id)arg9 logger:(id)arg10 linkDispatcher:(id)arg11 podcastTestManager:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

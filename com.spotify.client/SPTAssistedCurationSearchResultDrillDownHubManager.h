//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EXP_HUBComponentDefaults, EXP_HUBComponentRegistry, NSString, SPTAssistedCurationComponentModelURIResolver, SPTAssistedCurationGLUETheme;

@interface SPTAssistedCurationSearchResultDrillDownHubManager : NSObject
{
    NSString *_serviceIdentifier;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTHubRemoteContentURLResolver> _remoteContentURLResolver;
    SPTAssistedCurationGLUETheme *_theme;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewUIFactory> _audioPreviewUIFactory;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTSearchFancyRecentsDataSource> _recentDataSource;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    SPTAssistedCurationComponentModelURIResolver *_componentModelURIResolver;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    id <EXP_SPTHubContentOperationFactory> _contentOperationFactory;
    EXP_HUBComponentRegistry *_componentRegistry;
}

@property(readonly, nonatomic) EXP_HUBComponentRegistry *componentRegistry; // @synthesize componentRegistry=_componentRegistry;
@property(readonly, nonatomic) id <EXP_SPTHubContentOperationFactory> contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTAssistedCurationComponentModelURIResolver *componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <SPTSearchFancyRecentsDataSource> recentDataSource; // @synthesize recentDataSource=_recentDataSource;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTAudioPreviewUIFactory> audioPreviewUIFactory; // @synthesize audioPreviewUIFactory=_audioPreviewUIFactory;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(readonly, nonatomic) SPTAssistedCurationGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTHubRemoteContentURLResolver> remoteContentURLResolver; // @synthesize remoteContentURLResolver=_remoteContentURLResolver;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)provideCommandDispatcherWithViewURI:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3 commandRegistry:(id)arg4;
- (id)provideViewControllerForURI:(id)arg1 playlistURI:(id)arg2 addTrackHandler:(id)arg3 sourceIdentifier:(id)arg4 referrerIdentifier:(id)arg5;
- (id)initWithServiceIdentifier:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 remoteContentURLResolver:(id)arg4 theme:(id)arg5 audioPreviewModelFactory:(id)arg6 audioPreviewUIFactory:(id)arg7 explicitContentAccessManager:(id)arg8 glueImageLoader:(id)arg9 linkDispatcher:(id)arg10 recentDataSource:(id)arg11;

@end


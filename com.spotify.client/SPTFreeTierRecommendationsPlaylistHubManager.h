//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFreeTierRecommendationsPlaylistHubViewProvider-Protocol.h"

@class EXP_HUBCommandDispatcher, EXP_HUBComponentDefaults, NSString, SPTFreeTierRecommendationsPlaylistContentOperationsFactory;
@protocol EXP_SPTHubCommandHandlerFactory, EXP_SPTHubsRendererFactory, SPTHugsFactory;

@interface SPTFreeTierRecommendationsPlaylistHubManager : NSObject <SPTFreeTierRecommendationsPlaylistHubViewProvider>
{
    NSString *_serviceIdentifier;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTFreeTierRecommendationsPlaylistContentOperationsFactory *_contentOperationFactory;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    EXP_HUBCommandDispatcher *_commandDispatcher;
}

@property(retain, nonatomic) EXP_HUBCommandDispatcher *commandDispatcher; // @synthesize commandDispatcher=_commandDispatcher;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) SPTFreeTierRecommendationsPlaylistContentOperationsFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (void)setupCommandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)hubViewWithFrame:(struct CGRect)arg1;
- (id)viewModelProviderForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithServiceIdentifier:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 contentOperationFactory:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


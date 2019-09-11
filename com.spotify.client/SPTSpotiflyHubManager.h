//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBComponentDefaults, NSString;
@protocol GLUETheme, HUBIconImageResolver, SPTHubCommandHandlerFactory, SPTHubsRendererFactory, SPTHugsFactory;

@interface SPTSpotiflyHubManager : NSObject
{
    NSString *_serviceIdentifier;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <GLUETheme> _GLUETheme;
    HUBComponentDefaults *_componentDefaults;
    id <HUBIconImageResolver> _iconImageResolver;
    id <SPTHubCommandHandlerFactory> _commandHandlerFactory;
}

@property(readonly, nonatomic) id <SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)provideViewControllerForURL:(id)arg1 referrerIdentifier:(id)arg2;
- (id)createCommandDispatcherForURL:(id)arg1 referrerIdentifier:(id)arg2 interactionLogger:(id)arg3;
- (id)createViewModelProviderForURL:(id)arg1;
- (id)createContentOperationsForURL:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 GLUETheme:(id)arg4;

@end


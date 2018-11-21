//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EXP_HUBComponentDefaults, NSString, SPTTheme;
@protocol EXP_HUBIconImageResolver, EXP_SPTHubCommandHandlerFactory, EXP_SPTHubsRendererFactory, SPTHugsFactory, SPTShelves;

@interface SPTChartHubManager : NSObject
{
    NSString *_serviceIdentifier;
    id <EXP_SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    SPTTheme *_theme;
    id <EXP_SPTHubCommandHandlerFactory> _commandHandlerFactory;
    EXP_HUBComponentDefaults *_componentDefaults;
    id <EXP_HUBIconImageResolver> _iconImageResolver;
    id <SPTShelves> _shelves;
}

@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <EXP_HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) EXP_HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <EXP_SPTHubCommandHandlerFactory> commandHandlerFactory; // @synthesize commandHandlerFactory=_commandHandlerFactory;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(readonly, nonatomic) id <EXP_SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, copy, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (id)createContentOperationForURL:(id)arg1 referrerIdentifier:(id)arg2 decorationOperation:(id)arg3 cardAccessibilityContentOperation:(id)arg4;
- (id)viewControllerForURL:(id)arg1 pageIdentifier:(id)arg2 referrerIdentifier:(id)arg3 contentDecorator:(id)arg4 cardAccessibilityContentOperation:(id)arg5;
- (id)initWithServiceIdentifier:(id)arg1 hubsRendererFactory:(id)arg2 hugsFactory:(id)arg3 theme:(id)arg4 shelves:(id)arg5;

@end


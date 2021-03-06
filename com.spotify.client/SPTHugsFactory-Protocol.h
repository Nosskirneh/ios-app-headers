//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBComponentRegistry;
@protocol HUBComponentFallbackHandler, HUBComponentLayoutManager, HUBIconImageResolver, HUGSStyleOverrider, SPTHubComponentModelURIResolver;

@protocol SPTHugsFactory <NSObject>
- (id <HUBComponentFallbackHandler>)provideSimpleComponentFallbackHandler;
- (id <HUBComponentFallbackHandler>)provideComponentFallbackHandler;
- (id <HUBComponentLayoutManager>)provideComponentLayoutManager;
- (id <HUBIconImageResolver>)provideIconImageResolver;
- (id <HUGSStyleOverrider>)createStyleOverriderWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1;
- (HUBComponentRegistry *)createComponentRegistryWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1 fallbackHandler:(id <HUBComponentFallbackHandler>)arg2;
- (HUBComponentRegistry *)createComponentRegistryWithComponentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg1;
@end


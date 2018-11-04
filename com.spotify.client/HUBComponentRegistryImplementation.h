//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentRegistry.h"
#import "HUBComponentShowcaseManager.h"

@class HUBComponentDefaults, NSArray, NSMutableDictionary;

@interface HUBComponentRegistryImplementation : NSObject <HUBComponentRegistry, HUBComponentShowcaseManager>
{
    id <HUBComponentFallbackHandler> _fallbackHandler;
    HUBComponentDefaults *_componentDefaults;
    id <HUBJSONSchema> _JSONSchema;
    id <HUBIconImageResolver> _iconImageResolver;
    NSMutableDictionary *_componentFactories;
}

@property(readonly, nonatomic) NSMutableDictionary *componentFactories; // @synthesize componentFactories=_componentFactories;
@property(readonly, nonatomic) id <HUBIconImageResolver> iconImageResolver; // @synthesize iconImageResolver=_iconImageResolver;
@property(readonly, nonatomic) id <HUBJSONSchema> JSONSchema; // @synthesize JSONSchema=_JSONSchema;
@property(readonly, nonatomic) HUBComponentDefaults *componentDefaults; // @synthesize componentDefaults=_componentDefaults;
@property(readonly, nonatomic) id <HUBComponentFallbackHandler> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
- (void).cxx_destruct;
- (id)createShowcaseSnapshotComponentModelBuilder;
- (id)showcaseNameForComponentIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *showcaseableComponentIdentifiers;
- (void)unregisterComponentFactoryForNamespace:(id)arg1;
- (void)registerComponentFactory:(id)arg1 forNamespace:(id)arg2;
- (id)createComponentForModel:(id)arg1;
- (id)initWithFallbackHandler:(id)arg1 componentDefaults:(id)arg2 JSONSchema:(id)arg3 iconImageResolver:(id)arg4;

@end


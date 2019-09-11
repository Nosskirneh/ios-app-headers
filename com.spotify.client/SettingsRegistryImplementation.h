//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureSettingsPageRegistry-Protocol.h"
#import "SettingsRegistry-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol SPTAbbaFeatureFlags;

@interface SettingsRegistryImplementation : NSObject <SettingsRegistry, SPTFeatureSettingsPageRegistry>
{
    NSMutableDictionary *_providers;
    NSMutableDictionary *_rootSections;
    NSMutableDictionary *_rootSectionProviders;
    NSMutableDictionary *_settingsStructure;
    NSMutableArray *_mutableFeatureSettingsPages;
    NSMutableDictionary *_mutableTitles;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
}

@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(retain, nonatomic) NSMutableDictionary *mutableTitles; // @synthesize mutableTitles=_mutableTitles;
@property(retain, nonatomic) NSMutableArray *mutableFeatureSettingsPages; // @synthesize mutableFeatureSettingsPages=_mutableFeatureSettingsPages;
@property(readonly, nonatomic) NSMutableDictionary *rootSectionProviders; // @synthesize rootSectionProviders=_rootSectionProviders;
@property(readonly, nonatomic) NSMutableDictionary *rootSections; // @synthesize rootSections=_rootSections;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *settingsRootURL;
- (id)settingsSectionForURL:(id)arg1;
- (id)containerInTree:(id)arg1 withURI:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *settingsStructure;
@property(readonly, copy, nonatomic) NSDictionary *titles;
@property(readonly, nonatomic) NSMutableDictionary *providers;
- (void)registerTitle:(id)arg1 forURI:(id)arg2;
@property(readonly, nonatomic) __weak NSArray *featureSettingsPages;
- (void)unregisterFeatureSettingsPage:(id)arg1;
- (void)registerFeatureSettingsPage:(id)arg1;
- (void)registerSettingsSectionProvider:(id)arg1 withSelector:(SEL)arg2 forURI:(id)arg3;
- (void)registerRootSettingsSectionProvider:(id)arg1 withSelector:(SEL)arg2 forURI:(id)arg3;
- (void)registerRootSettingsURI:(id)arg1 title:(id)arg2 viewControllerClass:(Class)arg3;
- (id)initWithABBAFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


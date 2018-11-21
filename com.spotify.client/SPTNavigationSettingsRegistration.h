//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTFeatureSettingsPage;
@protocol SPTFeatureSettingsItemFactory, SPTLocalSettings;

@interface SPTNavigationSettingsRegistration : NSObject
{
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTFeatureSettingsPage *_settingsPage;
}

@property(retain, nonatomic) SPTFeatureSettingsPage *settingsPage; // @synthesize settingsPage=_settingsPage;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (_Bool)shouldHideNavigationTitlesLocalSetting;
- (id)navigationListIdentifier;
- (void)registerValues:(id)arg1 defaultValue:(id)arg2;
- (id)multipleChoiceSettingsOptionsFromValues:(id)arg1;
- (void)registerSwitchControlForHidingNavigationTitlesWithTitle:(id)arg1 hint:(id)arg2;
- (void)registerNavigationListIdentifiers:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 featureSettingsItemFactory:(id)arg2;

@end


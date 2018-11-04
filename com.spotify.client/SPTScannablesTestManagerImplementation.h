//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTScannablesTestManager.h"

@class NSString, SPTFeatureSettingsPage;

@interface SPTScannablesTestManagerImplementation : NSObject <SPTScannablesTestManager>
{
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTAlertController> _alertController;
    SPTFeatureSettingsPage *_settingsPage;
}

@property(retain, nonatomic) SPTFeatureSettingsPage *settingsPage; // @synthesize settingsPage=_settingsPage;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)initWithFeatureSettingsItemFactory:(id)arg1 localSettings:(id)arg2 alertController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


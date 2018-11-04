//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTFeatureSettingsPage;

@interface SPTArtistSettingsManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTFeatureSettingsPage *_settingsPage;
}

@property(retain, nonatomic) SPTFeatureSettingsPage *settingsPage; // @synthesize settingsPage=_settingsPage;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (_Bool)shouldUseBeta;
- (void)registerSettings;
- (void)registerBetaSetting;
- (id)initWithLocalSettings:(id)arg1 featureSettingsItemFactory:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSString, YTIButtonRenderer, YTICommand, YTIMusicAppMetadataRenderer, YTIMusicAppNavigationDrawerPromoRenderer, YTUserDefaults;

@interface YTMMusicAppMetadata : NSObject
{
    YTIMusicAppMetadataRenderer *_metadataRenderer;
    NSHashTable *_observers;
    YTUserDefaults *_userDefaults;
    _Bool _settingsUnlimitedButtonVisibilityReported;
    _Bool _settingsVisibilityReported;
    _Bool _sidePanelPromoVisibilityReporder;
    _Bool _accountChangeInFlight;
    YTICommand *_homeNavigationEndpoint;
    YTICommand *_guideNavigationEndpoint;
}

@property(nonatomic, getter=isAccountChangeInFlight) _Bool accountChangeInFlight; // @synthesize accountChangeInFlight=_accountChangeInFlight;
@property(retain, nonatomic) YTICommand *guideNavigationEndpoint; // @synthesize guideNavigationEndpoint=_guideNavigationEndpoint;
@property(retain, nonatomic) YTICommand *homeNavigationEndpoint; // @synthesize homeNavigationEndpoint=_homeNavigationEndpoint;
- (void).cxx_destruct;
- (void)notifyConfigDidChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) NSArray *homeScreenQuickActions;
@property(readonly, nonatomic) NSArray *settings;
@property(readonly, nonatomic) YTIButtonRenderer *impressumSettingsButton;
@property(readonly, nonatomic) YTIButtonRenderer *unlimitedSettingsButton;
@property(readonly, nonatomic) YTIMusicAppNavigationDrawerPromoRenderer *sidePanelPromo;
@property(readonly, nonatomic) NSString *subscriptionStatusText;
@property(readonly, nonatomic) _Bool isVoicePromptSupported;
@property(readonly, nonatomic) _Bool isStreamingOverWiFiOnlySettingVisible;
@property(readonly, nonatomic) _Bool isNotificationsPromptEnabled;
@property(readonly, nonatomic) _Bool isRestrictedPlayerLayout;
@property(readonly, nonatomic) _Bool isRedSubscriber;
@property(readonly, nonatomic) _Bool isSearchButtonHidden;
@property(readonly, nonatomic) _Bool isOfflineEntryVisible;
@property(readonly, nonatomic) _Bool isAudioCastEnabled;
@property(readonly, nonatomic) _Bool isAudioOnlyButtonVisible;
- (void)reportSettingsVisibility:(id)arg1;
- (void)reportSettingsUnlimitedLinkVisibility:(id)arg1;
- (void)reportSidePanelPromoVisibility:(id)arg1;
- (void)updateFromUserDefaults;
- (void)updateWithMetadataRenderer:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;

@end


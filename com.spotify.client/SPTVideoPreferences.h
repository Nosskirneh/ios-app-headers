//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAbbaFeatureFlagsObserver.h"

@class NSString, SPTDataLoaderKeymasterAuthoriser;

@interface SPTVideoPreferences : NSObject <SPTAbbaFeatureFlagsObserver>
{
    _Bool _identifySurfacesVisually;
    _Bool _abThumbnailSeek;
    _Bool _abSubtitles;
    _Bool _abBackgroundPlayPlus;
    _Bool _rolloutCDNFallbackBasedOnAVplayerErrorLog;
    _Bool _rolloutSubtitleBottomPositioning;
    _Bool _rolloutVideoPlaybackSessionLogging;
    _Bool _rolloutEndVideoLoggingUsingEventApi;
    unsigned long long _videoCDNSampling;
    id <SPTResolver> _resolver;
    id <SPTLocalSettings> _localSettings;
    id <SettingsRegistry> _settingsRegistry;
    id <SPTAbbaFeatureFlags> _featureFlags;
    SPTDataLoaderKeymasterAuthoriser *_keymasterAuthoriser;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    NSString *_keyframeURLTemplate;
    NSString *_manifestURLTemplate;
    unsigned long long _startBitrate;
    unsigned long long _startBitrateWifi;
}

@property(nonatomic) unsigned long long startBitrateWifi; // @synthesize startBitrateWifi=_startBitrateWifi;
@property(nonatomic) unsigned long long startBitrate; // @synthesize startBitrate=_startBitrate;
@property(retain, nonatomic) NSString *manifestURLTemplate; // @synthesize manifestURLTemplate=_manifestURLTemplate;
@property(retain, nonatomic) NSString *keyframeURLTemplate; // @synthesize keyframeURLTemplate=_keyframeURLTemplate;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) SPTDataLoaderKeymasterAuthoriser *keymasterAuthoriser; // @synthesize keymasterAuthoriser=_keymasterAuthoriser;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SettingsRegistry> settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) _Bool rolloutEndVideoLoggingUsingEventApi; // @synthesize rolloutEndVideoLoggingUsingEventApi=_rolloutEndVideoLoggingUsingEventApi;
@property(readonly, nonatomic) _Bool rolloutVideoPlaybackSessionLogging; // @synthesize rolloutVideoPlaybackSessionLogging=_rolloutVideoPlaybackSessionLogging;
@property(readonly, nonatomic) _Bool rolloutSubtitleBottomPositioning; // @synthesize rolloutSubtitleBottomPositioning=_rolloutSubtitleBottomPositioning;
@property(readonly, nonatomic) _Bool rolloutCDNFallbackBasedOnAVplayerErrorLog; // @synthesize rolloutCDNFallbackBasedOnAVplayerErrorLog=_rolloutCDNFallbackBasedOnAVplayerErrorLog;
@property(readonly, nonatomic) _Bool abBackgroundPlayPlus; // @synthesize abBackgroundPlayPlus=_abBackgroundPlayPlus;
@property(nonatomic) _Bool abSubtitles; // @synthesize abSubtitles=_abSubtitles;
@property(nonatomic) _Bool abThumbnailSeek; // @synthesize abThumbnailSeek=_abThumbnailSeek;
@property(nonatomic) unsigned long long videoCDNSampling; // @synthesize videoCDNSampling=_videoCDNSampling;
@property(nonatomic) _Bool identifySurfacesVisually; // @synthesize identifySurfacesVisually=_identifySurfacesVisually;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)setPreferredSubtitle:(id)arg1;
- (id)videoKeyframeImageURLForSourceID:(id)arg1 height:(unsigned long long)arg2 timestampMS:(unsigned long long)arg3;
- (id)remoteManifestURLForVideoSourceID:(id)arg1;
- (void)registerSettingsPage;
- (void)featureFlagsDidChange:(id)arg1;
- (void)updateRolloutEndVideoLoggingUsingEventApi;
- (void)updateRolloutVideoPlaybackSessionLogging;
- (void)updateRolloutSubtitleBottomPositioning;
- (void)updateRolloutCDNFallbackBasedOnAVplayerErrorLog;
- (void)updateABBackgroundPlayPlus;
- (void)updateABSubtitles;
- (void)updateABThumbnailSeek;
- (void)updateVideoCDNSampling;
- (void)updateFeatureFlagsTemplates;
- (void)dealloc;
- (void)updateFeatureFlags;
- (id)initWithLocalSettings:(id)arg1 settingsRegistry:(id)arg2 featureFlags:(id)arg3 keymasterAuthoriser:(id)arg4 featureSettingsItemFactory:(id)arg5 resolver:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


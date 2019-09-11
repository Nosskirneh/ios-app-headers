//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistTestManager-Protocol.h"

@class NSString, SPTFreeTierPlaylistFeatureProperties;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFreeTierPreCurationTestManager, SPTProductState, SPTRemoteConfigurationResolver;

@interface SPTFreeTierPlaylistTestManagerImplementation : NSObject <SPTFreeTierPlaylistTestManager>
{
    _Bool _weigthedShufflePlayDisabled;
    _Bool _premiumLabelEnabled;
    _Bool _freeTierEnabled;
    _Bool _editAnnotationEnabled;
    _Bool _contextAwareEditorialTrackSharingEnabled;
    _Bool _episodesInPlaylistDisabled;
    _Bool _accessibilityHeaderEnabled;
    _Bool _scrollPerformanceTrackingEnabled;
    _Bool _updatedFilterUXPremiumEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFreeTierPreCurationTestManager> _preCurationTestManager;
    id <SPTFeatureFlagSignal> _weigthedShufflePlaySignal;
    id <SPTFeatureFlagSignal> _windowedTrackTestSignal;
    id <SPTFeatureFlagSignal> _editAnnotationSignal;
    id <SPTFeatureFlagSignal> _contextAwareEditorialTrackSharingSignal;
    id <SPTFeatureFlagSignal> _ignoreProductStateForEpisodesAvailableSignal;
    id <SPTFeatureFlagSignal> _accessibilityHeaderSignal;
    id <SPTFeatureFlagSignal> _scrollPerformanceSignal;
    id <SPTFeatureFlagSignal> _updatedFilterUXPremiumSignal;
    SPTFreeTierPlaylistFeatureProperties *_properties;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
}

@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(retain, nonatomic) SPTFreeTierPlaylistFeatureProperties *properties; // @synthesize properties=_properties;
@property(nonatomic, getter=isUpdatedFilterUXPremiumEnabled) _Bool updatedFilterUXPremiumEnabled; // @synthesize updatedFilterUXPremiumEnabled=_updatedFilterUXPremiumEnabled;
@property(nonatomic, getter=isScrollPerformanceTrackingEnabled) _Bool scrollPerformanceTrackingEnabled; // @synthesize scrollPerformanceTrackingEnabled=_scrollPerformanceTrackingEnabled;
@property(nonatomic, getter=isAccessibilityHeaderEnabled) _Bool accessibilityHeaderEnabled; // @synthesize accessibilityHeaderEnabled=_accessibilityHeaderEnabled;
@property(nonatomic, getter=isEpisodesInPlaylistDisabled) _Bool episodesInPlaylistDisabled; // @synthesize episodesInPlaylistDisabled=_episodesInPlaylistDisabled;
@property(nonatomic, getter=isContextAwareEditorialTrackSharingEnabled) _Bool contextAwareEditorialTrackSharingEnabled; // @synthesize contextAwareEditorialTrackSharingEnabled=_contextAwareEditorialTrackSharingEnabled;
@property(nonatomic, getter=isEditAnnotationEnabled) _Bool editAnnotationEnabled; // @synthesize editAnnotationEnabled=_editAnnotationEnabled;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled; // @synthesize premiumLabelEnabled=_premiumLabelEnabled;
@property(nonatomic, getter=isWeigthedShufflePlayDisabled) _Bool weigthedShufflePlayDisabled; // @synthesize weigthedShufflePlayDisabled=_weigthedShufflePlayDisabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> updatedFilterUXPremiumSignal; // @synthesize updatedFilterUXPremiumSignal=_updatedFilterUXPremiumSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> scrollPerformanceSignal; // @synthesize scrollPerformanceSignal=_scrollPerformanceSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> accessibilityHeaderSignal; // @synthesize accessibilityHeaderSignal=_accessibilityHeaderSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> ignoreProductStateForEpisodesAvailableSignal; // @synthesize ignoreProductStateForEpisodesAvailableSignal=_ignoreProductStateForEpisodesAvailableSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> contextAwareEditorialTrackSharingSignal; // @synthesize contextAwareEditorialTrackSharingSignal=_contextAwareEditorialTrackSharingSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> editAnnotationSignal; // @synthesize editAnnotationSignal=_editAnnotationSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> windowedTrackTestSignal; // @synthesize windowedTrackTestSignal=_windowedTrackTestSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> weigthedShufflePlaySignal; // @synthesize weigthedShufflePlaySignal=_weigthedShufflePlaySignal;
@property(readonly, nonatomic) id <SPTFreeTierPreCurationTestManager> preCurationTestManager; // @synthesize preCurationTestManager=_preCurationTestManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (id)createSignalForAnyFiveSignalsWithAbbaKey:(id)arg1 pageTitle:(id)arg2 itemTitle:(id)arg3 itemDescription:(id)arg4;
- (void)setupRemoteConfigurationProperties;
@property(readonly, nonatomic, getter=isAssistedCurationPremiumEnabled) _Bool assistedCurationPremiumEnabled;
@property(readonly, nonatomic, getter=isConsolidatedExperienceEnabled) _Bool consolidatedExperienceEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupUpdatedFilterUXPremiumSignal;
- (void)setupEpisodesAvailable;
@property(readonly, nonatomic, getter=isTrackItemQuickActionsEnabled) _Bool trackItemQuickActionsEnabled;
- (void)setupScrollPerformanceSignal;
- (void)setupAccessibilityHeaderSignal;
- (id)editAnnotationAbbaSignal;
- (id)editAnnotationRolloutSignal;
- (void)setupContextAwareEditorialTrackSharingSignal;
- (void)setupEditAnnotationSignal;
- (void)setupIsPremiumOnlySignal;
- (void)setupWeightedShufflePlay;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 freeTierEnabledSignal:(id)arg3 preCurationTestManager:(id)arg4 remoteConfigurationResolver:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


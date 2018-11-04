//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTFreeTierTestManager.h"

@class NSString;

@interface SPTFreeTierTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTFreeTierTestManager>
{
    _Bool _heartsInTracksEnabled;
    _Bool _heartsInEntityHeadersEnabled;
    _Bool _heartsEverywhereEnabled;
    _Bool _consolidatedArtistEnabled;
    _Bool _followHeaderEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _shadowNewExperienceEnabledSignal;
    id <SPTFeatureFlagSignal> _actualNewExperienceEnabledSignal;
    id <SPTFeatureFlagSignal> _heartsEverywhereEnabledSignal;
    id <SPTFeatureFlagSignal> _heartsEverywhereEnabledTracksSignal;
    id <SPTFeatureFlagSignal> _heartsEverywhereEnabledEntitiesSignal;
    id <SPTFeatureFlagSignal> _heartsEverywhereEnabledTracksAndEntitiesSignal;
    id <SPTFeatureFlagSignal> _followHeaderSignal;
    id <SPTFeatureFlagSignal> _consolidatedArtistFollowHeaderSignal;
}

@property(nonatomic) _Bool followHeaderEnabled; // @synthesize followHeaderEnabled=_followHeaderEnabled;
@property(nonatomic) _Bool consolidatedArtistEnabled; // @synthesize consolidatedArtistEnabled=_consolidatedArtistEnabled;
@property(nonatomic) _Bool heartsEverywhereEnabled; // @synthesize heartsEverywhereEnabled=_heartsEverywhereEnabled;
@property(nonatomic) _Bool heartsInEntityHeadersEnabled; // @synthesize heartsInEntityHeadersEnabled=_heartsInEntityHeadersEnabled;
@property(nonatomic) _Bool heartsInTracksEnabled; // @synthesize heartsInTracksEnabled=_heartsInTracksEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> consolidatedArtistFollowHeaderSignal; // @synthesize consolidatedArtistFollowHeaderSignal=_consolidatedArtistFollowHeaderSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> followHeaderSignal; // @synthesize followHeaderSignal=_followHeaderSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> heartsEverywhereEnabledTracksAndEntitiesSignal; // @synthesize heartsEverywhereEnabledTracksAndEntitiesSignal=_heartsEverywhereEnabledTracksAndEntitiesSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> heartsEverywhereEnabledEntitiesSignal; // @synthesize heartsEverywhereEnabledEntitiesSignal=_heartsEverywhereEnabledEntitiesSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> heartsEverywhereEnabledTracksSignal; // @synthesize heartsEverywhereEnabledTracksSignal=_heartsEverywhereEnabledTracksSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> heartsEverywhereEnabledSignal; // @synthesize heartsEverywhereEnabledSignal=_heartsEverywhereEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> actualNewExperienceEnabledSignal; // @synthesize actualNewExperienceEnabledSignal=_actualNewExperienceEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> shadowNewExperienceEnabledSignal; // @synthesize shadowNewExperienceEnabledSignal=_shadowNewExperienceEnabledSignal;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool theNewExperienceEnabled;
- (id)provideConsolidatedArtistFollowHeaderSignal;
- (id)provideHeartsEverywhereEnabledSignal;
- (id)provideLiveNewExperienceEnabledSignal;
- (id)provideShadowNewExperienceEnabledSignal;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupFollowHeaderFlag:(id)arg1;
- (void)setUpHeartsFlag:(id)arg1;
- (id)setUpPremiumFlag:(id)arg1;
- (id)setUpFreeFlag:(id)arg1;
- (void)setupIPadFlagsWithFactory:(id)arg1;
- (void)setupIPhoneFlagsWithFactory:(id)arg1;
- (void)setupFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


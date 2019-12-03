//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTYourLibraryMusicTestManager-Protocol.h"

@class NSString, SPTYourLibraryMusicFeatureProperties;
@protocol SPTCollectionPlatformTestManager, SPTEncoreTestManager, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFreeTierCollectionTestManager, SPTProductState, SPTRemoteConfigurationResolver;

@interface SPTYourLibraryMusicTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTYourLibraryMusicTestManager>
{
    _Bool _premiumLabelEnabled;
    _Bool _doubleTabYourLibraryEnabled;
    _Bool _consolidatedExperienceEnabled;
    _Bool _groupsInLikedSongsEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTYourLibraryMusicFeatureProperties *_remoteConfigurationProperties;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    id <SPTFreeTierCollectionTestManager> _freeTierCollectionTestManager;
    id <SPTEncoreTestManager> _encoreTestManager;
    id <SPTFeatureFlagSignal> _yourLibrarySignal;
    id <SPTFeatureFlagSignal> _windowedTrackTestSignal;
    id <SPTFeatureFlagSignal> _consolidatedExperienceSignal;
    id <SPTFeatureFlagSignal> _groupsInLikedSongsSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> groupsInLikedSongsSignal; // @synthesize groupsInLikedSongsSignal=_groupsInLikedSongsSignal;
@property(nonatomic, getter=isGroupsInLikedSongsEnabled) _Bool groupsInLikedSongsEnabled; // @synthesize groupsInLikedSongsEnabled=_groupsInLikedSongsEnabled;
@property(nonatomic, getter=isConsolidatedExperienceEnabled) _Bool consolidatedExperienceEnabled; // @synthesize consolidatedExperienceEnabled=_consolidatedExperienceEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> consolidatedExperienceSignal; // @synthesize consolidatedExperienceSignal=_consolidatedExperienceSignal;
@property(nonatomic, getter=isDoubleTabYourLibraryEnabled) _Bool doubleTabYourLibraryEnabled; // @synthesize doubleTabYourLibraryEnabled=_doubleTabYourLibraryEnabled;
@property(nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled; // @synthesize premiumLabelEnabled=_premiumLabelEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> windowedTrackTestSignal; // @synthesize windowedTrackTestSignal=_windowedTrackTestSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> yourLibrarySignal; // @synthesize yourLibrarySignal=_yourLibrarySignal;
@property(readonly, nonatomic) id <SPTEncoreTestManager> encoreTestManager; // @synthesize encoreTestManager=_encoreTestManager;
@property(readonly, nonatomic) id <SPTFreeTierCollectionTestManager> freeTierCollectionTestManager; // @synthesize freeTierCollectionTestManager=_freeTierCollectionTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(retain, nonatomic) SPTYourLibraryMusicFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isAssistedCurationInLikedSongsEnabled) _Bool assistedCurationInLikedSongsEnabled;
@property(readonly, nonatomic, getter=isFrecencySortOrderDefaultInPlaylistsEnabled) _Bool frecencySortOrderDefaultInPlaylistsEnabled;
@property(readonly, nonatomic, getter=isBookmarkModelEnabled) _Bool bookmarkModelEnabled;
@property(readonly, nonatomic) unsigned long long likedSongsTagMechanism;
@property(readonly, nonatomic, getter=isSearchFieldInLikedSongsVisible) _Bool searchFieldInLikedSongsVisible;
@property(readonly, nonatomic, getter=isEncoreTrackRowsEnabled) _Bool encoreTrackRowsEnabled;
@property(readonly, nonatomic, getter=isQuickScrollInYourLibraryEnabled) _Bool quickScrollInYourLibraryEnabled;
@property(readonly, nonatomic, getter=isArtistRecommendationsFromBackendEnabled) _Bool artistRecommendationsFromBackendEnabled;
@property(readonly, nonatomic, getter=isShowAlbumArtistRecommendationsEnabled) _Bool showAlbumArtistRecommendationsEnabled;
- (void)setupRemoteConfigurationProperties;
- (void)setupGroupsInLikedSongsSignal;
- (void)handleWindowedTrackSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupIsPremiumOnlySignal;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 remoteConfigurationResolver:(id)arg3 collectionPlatformTestManager:(id)arg4 freeTierCollectionTestManager:(id)arg5 yourLibrarySignal:(id)arg6 consolidatedExperienceSignal:(id)arg7 encoreTestManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


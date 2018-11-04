//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTFreeTierPlaylistTestManager.h"

@class NSString;

@interface SPTFreeTierPlaylistTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTFreeTierPlaylistTestManager>
{
    _Bool _weigthedShufflePlayDisabled;
    _Bool _editPlaylistEnabled;
    _Bool _premiumLabelEnabled;
    _Bool _consolidatedViewEnabled;
    _Bool _customPlaylistHeaderSignalEnabled;
    _Bool _addSongsDisabled;
    _Bool _madeForSignalEnabled;
    _Bool _madeForEmployeeSignalEnabled;
    _Bool _freeTierEnabled;
    _Bool _ntfSortingAndFilteringEnabled;
    _Bool _editAnnotationEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTHeartsService> _heartsService;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFreeTierPreCurationTestManager> _preCurationTestManager;
    id <SPTFeatureFlagSignal> _weigthedShufflePlaySignal;
    id <SPTFeatureFlagSignal> _editPlaylistSignal;
    id <SPTFeatureFlagSignal> _windowedTrackTestSignal;
    id <SPTFeatureFlagSignal> _consolidatedViewEnabledSignal;
    id <SPTFeatureFlagSignal> _customHeaderSignal;
    id <SPTFeatureFlagSignal> _addSongsDisabledSignal;
    id <SPTFeatureFlagSignal> _nftSortingAndFilteringSignal;
    id <SPTFeatureFlagSignal> _editAnnotationSignal;
    id <SPTFeatureFlagSignal> _madeForSignal;
    id <SPTFeatureFlagSignal> _madeForEmployeeSignal;
}

@property(nonatomic, getter=isEditAnnotationEnabled) _Bool editAnnotationEnabled; // @synthesize editAnnotationEnabled=_editAnnotationEnabled;
@property(nonatomic, getter=isNFTSortingAndFilteringEnabled) _Bool ntfSortingAndFilteringEnabled; // @synthesize ntfSortingAndFilteringEnabled=_ntfSortingAndFilteringEnabled;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(nonatomic, getter=isMadeForEmployeeSignalEnabled) _Bool madeForEmployeeSignalEnabled; // @synthesize madeForEmployeeSignalEnabled=_madeForEmployeeSignalEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForEmployeeSignal; // @synthesize madeForEmployeeSignal=_madeForEmployeeSignal;
@property(nonatomic, getter=isMadeForSignalEnabled) _Bool madeForSignalEnabled; // @synthesize madeForSignalEnabled=_madeForSignalEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForSignal; // @synthesize madeForSignal=_madeForSignal;
@property(nonatomic, getter=isAddSongsDisabled) _Bool addSongsDisabled; // @synthesize addSongsDisabled=_addSongsDisabled;
@property(nonatomic, getter=isCustomPlaylistHeaderSignalEnabled) _Bool customPlaylistHeaderSignalEnabled; // @synthesize customPlaylistHeaderSignalEnabled=_customPlaylistHeaderSignalEnabled;
@property(nonatomic, getter=isConsolidatedViewEnabled) _Bool consolidatedViewEnabled; // @synthesize consolidatedViewEnabled=_consolidatedViewEnabled;
@property(nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled; // @synthesize premiumLabelEnabled=_premiumLabelEnabled;
@property(nonatomic, getter=isEditPlaylistEnabled) _Bool editPlaylistEnabled; // @synthesize editPlaylistEnabled=_editPlaylistEnabled;
@property(nonatomic, getter=isWeigthedShufflePlayDisabled) _Bool weigthedShufflePlayDisabled; // @synthesize weigthedShufflePlayDisabled=_weigthedShufflePlayDisabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> editAnnotationSignal; // @synthesize editAnnotationSignal=_editAnnotationSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> nftSortingAndFilteringSignal; // @synthesize nftSortingAndFilteringSignal=_nftSortingAndFilteringSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> addSongsDisabledSignal; // @synthesize addSongsDisabledSignal=_addSongsDisabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> customHeaderSignal; // @synthesize customHeaderSignal=_customHeaderSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> consolidatedViewEnabledSignal; // @synthesize consolidatedViewEnabledSignal=_consolidatedViewEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> windowedTrackTestSignal; // @synthesize windowedTrackTestSignal=_windowedTrackTestSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> editPlaylistSignal; // @synthesize editPlaylistSignal=_editPlaylistSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> weigthedShufflePlaySignal; // @synthesize weigthedShufflePlaySignal=_weigthedShufflePlaySignal;
@property(readonly, nonatomic) id <SPTFreeTierPreCurationTestManager> preCurationTestManager; // @synthesize preCurationTestManager=_preCurationTestManager;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) __weak id <SPTHeartsService> heartsService; // @synthesize heartsService=_heartsService;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)setupMadeForSignals;
@property(readonly, nonatomic, getter=isMadeForSubtitleEnabled) _Bool madeForSubtitleEnabled;
- (_Bool)isNPTUser;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
@property(readonly, nonatomic, getter=isPreCurationOnDemandEnabled) _Bool preCurationOnDemandEnabled;
@property(readonly, nonatomic, getter=isPreCurationTrackCloudEnabled) _Bool preCurationTrackCloudEnabled;
@property(readonly, nonatomic, getter=isCustomPlaylistHeaderEnabled) _Bool customPlaylistHeaderEnabled;
@property(readonly, nonatomic, getter=isNewSortingAndFilteringEnabled) _Bool newSortingAndFilteringEnabled;
@property(readonly, nonatomic, getter=isHeartsDialogEnabled) _Bool heartsDialogEnabled;
- (id)editAnnotationAbbaSignal;
- (id)editAnnotationRolloutSignal;
- (void)setupEditAnnotationSignal;
- (void)setupSortingAndFiltering;
- (void)setupAddSongs;
- (id)customHeaderRolloutSignalForiOS10;
- (id)customHeaderRolloutSignal;
- (id)customPlaylistHeaderSignal;
- (void)setupCustomPlaylistHeader;
- (void)setupEditPlaylist;
- (void)setupConsolidatedViewEnabledSignal;
- (void)setupIsPremiumOnlySignal;
- (void)setupWeightedShufflePlay;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 heartsService:(id)arg3 freeTierEnabledSignal:(id)arg4 preCurationTestManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


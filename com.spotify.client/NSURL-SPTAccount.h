//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface NSURL (SPTAccount)
+ (id)spt_holidayCampaignURL;
+ (id)spt_holidayCampaignExternalURL;
+ (id)spt_campaignURL;
+ (id)spt_accountUpsellURL;
+ (id)spt_previewURLWithVersion:(id)arg1 type:(long long)arg2 identifier:(id)arg3;
+ (id)spt_ArtistAboutViewURLForArtistURI:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_aboutURLForArtistURL:(id)arg1;
+ (id)spt_URLwithAssistedCuratedPlaylistURL:(id)arg1;
+ (id)spt_URLWithAssistedCurationPage;
+ (id)spt_assistedCurationPrefixComponents;
+ (id)spt_SpotifyInternalURIWithFinalComponent:(id)arg1;
+ (id)spt_assistedCurationSearchResultDrillDownURI;
+ (id)spt_audioPreviewCDNURLFromTrackIdentifier:(id)arg1 productState:(id)arg2;
+ (id)spt_audioPreviewViewURI;
+ (id)bm_sanitizedURLWithString:(id)arg1;
+ (id)spt_genreURLWithGenre:(id)arg1;
+ (id)spt_browseRootURL;
+ (id)spt_canvasPlaylistURI;
+ (id)spt_chartTestURL;
+ (id)spt_chartURL;
+ (id)spt_chartsOverviewURL;
+ (id)spt_collectionURLForUsername:(id)arg1;
+ (id)whitelistedNonEntityConcertsPageIdentifiers;
+ (id)spt_concertEntityURLWithIdentifier:(id)arg1;
+ (id)spt_ConcertsSeeAllURLWithArtist:(id)arg1 location:(id)arg2;
+ (id)spt_concertEntityServiceURLWithIdentifier:(id)arg1 location:(id)arg2 transport:(long long)arg3;
+ (id)spt_ConcertsLocationSearchURLWithQuery:(id)arg1 transport:(long long)arg2;
+ (id)spt_ConcertsURLWithLocation:(id)arg1 transport:(long long)arg2;
+ (id)spt_dailyMixServiceDailyMixURIs;
+ (id)spt_dailymixApolloClusters;
+ (id)spt_dailymixApolloDailyMixNegativeArtistFeedbackForTrack:(id)arg1 station:(id)arg2;
+ (id)spt_dailymixApolloDailyMixNegativeSongFeedbackForTrack:(id)arg1 station:(id)arg2;
+ (id)spt_dailymixApolloDailyMixPositiveSongFeedbackForTrack:(id)arg1 station:(id)arg2;
+ (id)spt_feedbackURIForFeedbackTypeComponent:(id)arg1 entityTypeComponent:(id)arg2 track:(id)arg3 station:(id)arg4;
+ (id)spt_radioApolloMixesFeedbackAll;
+ (id)spt_radioApolloEntityForEntityURI:(id)arg1;
+ (id)spt_entitySeeAllSongsViewURIWithEmbeddedURI:(id)arg1;
+ (id)spt_externalIntegrationRecentlyPlayedURI;
+ (id)spt_abbaMakeURLWithFormatForPath:(id)arg1;
+ (id)spt_abbaMakeURLForPathComponents:(id)arg1;
+ (id)spt_abbaMakeURLForPathComponents:(id)arg1 format:(id)arg2;
+ (id)spt_abbaFormatDictionary;
+ (id)spt_abbaConfigurationURI;
+ (id)spt_abbaResolveURI;
+ (id)spt_removeFeedbackURLWithEntityURI:(id)arg1 contextURI:(id)arg2 subcontextURI:(id)arg3 viewURI:(id)arg4 reason:(id)arg5 backendURL:(id)arg6 feature:(id)arg7 actions:(id)arg8;
+ (id)spt_dislikeFeedbackURLWithEntityURI:(id)arg1 contextURI:(id)arg2 subcontextURI:(id)arg3 viewURI:(id)arg4 reason:(id)arg5 backendURL:(id)arg6 feature:(id)arg7 actions:(id)arg8;
+ (id)spt_likeFeedbackURLWithEntityURI:(id)arg1 contextURI:(id)arg2 subcontextURI:(id)arg3 viewURI:(id)arg4 reason:(id)arg5 backendURL:(id)arg6 feature:(id)arg7 actions:(id)arg8;
+ (id)spt_FindFriendsViewAllFriendsURLWithTransport:(long long)arg1;
+ (id)spt_FollowModelRemoveBanArtistURL;
+ (id)spt_FollowModelBanArtistURL;
+ (id)spt_FollowModelUnfollowEntityURLWithTransport:(long long)arg1;
+ (id)spt_FollowModelFollowEntityURLWithTransport:(long long)arg1;
+ (id)spt_FollowModelFollowCountsURLWithTransport:(long long)arg1;
+ (id)spt_FollowModelIsFollowingURLWithTransport:(long long)arg1;
+ (id)spt_freeTierAlbumContentURLForAlbumIdentifier:(id)arg1 podcastEnabled:(_Bool)arg2 videoEnabled:(_Bool)arg3 onDemandTrialEnabled:(_Bool)arg4;
+ (id)spt_allSongsViewURIWithEmbeddedURI:(id)arg1;
+ (id)spt_freeTierArtistURLForViewURL:(id)arg1;
+ (id)createQueryParameterWithOnDemandURLs:(id)arg1;
+ (id)spt_freeTierArtistContentURLForArtistIdentifier:(id)arg1 withOnDemandURLs:(id)arg2 includeReleasesSubpage:(_Bool)arg3 podcastEnabled:(_Bool)arg4 videoEnabled:(_Bool)arg5 onDemandTrialEnabled:(_Bool)arg6;
+ (id)spt_FreeTierArtistReleasesURLForArtistIdentifier:(id)arg1;
+ (id)spt_freeTierArtistContentURLForArtistIdentifier:(id)arg1 withOnDemandURLs:(id)arg2 podcastEnabled:(_Bool)arg3 videoEnabled:(_Bool)arg4 onDemandTrialEnabled:(_Bool)arg5;
+ (id)spt_artist_concertEntityViewURIFromConcertID:(id)arg1;
+ (id)spt_artist_partnerURLFromSpotifyURI:(id)arg1;
+ (id)spt_freeTierRenamePlaylistURI;
+ (id)spt_freeTierCreatePlaylistURI;
+ (id)spt_freeTierFindURI;
+ (id)spt_freeTierTasteOnboardingUpdateURI;
+ (id)spt_freeTierTasteOnboardingURI;
+ (id)spt_freeTierTasteOnboardingConvertHermesURIToHttp:(id)arg1 timestamp:(id)arg2;
+ (id)spt_freeTierTasteOnboardingLoadMoreSearchResultsURI:(id)arg1 timestamp:(id)arg2;
+ (id)spt_freeTierTasteOnboardingCurateURL:(id)arg1 sessionId:(id)arg2;
+ (id)spt_freeTierTasteOnboardingSearchURL:(id)arg1 searchSessionId:(id)arg2 sessionId:(id)arg3 timestamp:(id)arg4;
+ (id)spt_freeTierTasteOnboardingRelatedURL:(id)arg1 sessionId:(id)arg2;
+ (id)spt_freeTierTasteOnboardingQuestionnaireURL:(id)arg1 sessionId:(id)arg2;
+ (id)spt_freeTierTasteOnboardingSkipDialogURI;
+ (id)spt_freeTierTasteOnboardingUpdateTasteViewURI;
+ (id)spt_freeTierTasteOnboardingArtistSearchViewURI;
+ (id)spt_freeTierTasteOnboardingArtistPickerViewURI;
+ (id)spt_freeTierTrackContentURLForTrackIdentifier:(id)arg1;
+ (id)spt_feedOnboardingURL;
+ (id)spt_followFeedURL;
+ (id)spt_feedURL;
+ (id)spt_hiddenContentURI;
+ (id)spt_urlForFetchingCreativeUsingDevEnabled:(_Bool)arg1 creativeID:(id)arg2 triggerType:(id)arg3 triggerURI:(id)arg4;
+ (id)spt_qaToolURL;
+ (id)spt_fetchUploadFormForRejectedCreative;
+ (id)spt_rejectCreativeWithID:(id)arg1 usingDevEnabled:(_Bool)arg2;
+ (id)spt_approveCreativeWithID:(id)arg1 usingDevEnabled:(_Bool)arg2;
+ (id)spt_urlForFetchingLocales:(_Bool)arg1;
+ (id)spt_urlForFetchingCreativesUsingDevEnabled:(_Bool)arg1 withCampaignID:(id)arg2 status:(long long)arg3 type:(id)arg4 andLocale:(id)arg5;
+ (void)createQueryParameterWithTriggerPatterns:(id)arg1 triggerType:(id)arg2 forUrlString:(id)arg3;
+ (id)spt_inAppMessageFeatureFetchNoteMessagesURLForTriggerPatterns:(id)arg1 triggerType:(id)arg2 usingDevEnabled:(_Bool)arg3 V3Enabled:(_Bool)arg4;
+ (id)spt_inAppMessageFeatureFetchBannerMessagesURLForTriggerPatterns:(id)arg1 triggerType:(id)arg2 usingDevEnabled:(_Bool)arg3 V3Enabled:(_Bool)arg4;
+ (id)spt_inAppMessageFeatureFetchCardMessagesURLForTriggerPatterns:(id)arg1 triggerType:(id)arg2 usingDevEnabled:(_Bool)arg3 V3Enabled:(_Bool)arg4;
+ (id)spt_inAppMessageFeatureFetchTriggersURLUsingDevEnabled:(_Bool)arg1;
+ (id)spt_inAppMessageFeatureBaseURLComponentsForEndpoint:(id)arg1 devEnabled:(_Bool)arg2;
+ (id)spt_PaymentIAPVerifyURLWithAppVersion:(id)arg1 transport:(long long)arg2;
+ (id)spt_PaymentIAPOffersURLWithTransport:(long long)arg1;
+ (id)spt_languageOnboardingErrorDialogURI;
+ (id)spt_languageOnboardingSettingsErrorDialogURI;
+ (id)spt_languageOnboardingSettingsViewURI;
+ (id)spt_languageOnboardingViewURI;
+ (id)languageOnboardingAPIURLWithPathComponents:(id)arg1;
+ (id)spt_selectedLanguagesURL;
+ (id)spt_availableLanguagesURL;
+ (id)spt_loginContinueWithEmailURIPrefixComponents;
+ (id)spt_continueWithEmailURI;
+ (id)spt_loginMagicLinkDoRequestURIPrefixComponents;
+ (id)spt_loginMagicLinkDoRequestViewURIWithEmail:(id)arg1 errorMessage:(id)arg2;
+ (id)spt_loginMagicLinkDoRequestViewURI;
+ (id)spt_loginMagicLinkSentConfirmationURIPrefixComponents;
+ (id)spt_loginMagicLinkSentConfirmationViewURIWithEmail:(id)arg1;
+ (id)spt_loginMagicLinkSentConfirmationViewURI;
+ (id)spt_loginSplitSignupGenderInputURIPrefixComponents;
+ (id)spt_loginSplitSignupAgeInputURIPrefixComponents;
+ (id)spt_loginSplitSignupPasswordInputURIPrefixComponents;
+ (id)spt_loginSplitSignupEmailInputURIPrefixComponents;
+ (id)spt_loginSplitSignupGenderInputViewURI;
+ (id)spt_loginSplitSignupAgeInputViewURI;
+ (id)spt_loginSplitSignupPasswordInputViewURI;
+ (id)spt_loginSplitSignupEmailInputViewURI;
+ (id)spt_loginURIPrefixComponents;
+ (id)spt_signupFacebookConfirmationPrefixComponents;
+ (id)spt_recoverAccountResetPasswordPageURIWithError:(id)arg1;
+ (id)spt_recoverAccountResetPasswordPageURI;
+ (id)spt_signupFacebookConfirmationURI:(id)arg1;
+ (id)spt_signupFacebookConfirmationPageURI;
+ (id)spt_signupDisplayNameURI;
+ (id)spt_loginRecoverAccountURIPrefixComponents;
+ (id)spt_recoverAccountSupportPageURI;
+ (id)spt_signupURIWithIdentifierToken:(id)arg1;
+ (id)spt_recoverAccountResetPasswordErrorURIWithError:(id)arg1;
+ (id)spt_recoverAccountResetPasswordLoadingURI;
+ (id)spt_recoverAccountResetPasswordErrorURI;
+ (id)spt_recoverAccountResetPasswordConfirmationURI;
+ (id)spt_loginURIWithEmail:(id)arg1 errorDescription:(id)arg2;
+ (id)spt_loginURIWithEmail:(id)arg1;
+ (id)spt_loginURI;
+ (id)spt_loginWelcomeURI;
+ (id)spt_setPasswordURLFromVersion:(id)arg1;
+ (id)spt_setPasswordURLV2;
+ (id)spt_setPasswordURLV1;
+ (id)spt_encodedParamsWithDictionary:(id)arg1;
+ (id)spt_signupPrivacyPolicyURI;
+ (id)spt_signupTermsAndConditionsURI;
+ (id)spt_backendAgeValidationURLForBirthdayDay:(unsigned long long)arg1 birthdayMonth:(unsigned long long)arg2 birthdayYear:(unsigned long long)arg3;
+ (id)spt_backendAgeValidationURLForBirthdayDate:(id)arg1 calendar:(id)arg2;
+ (id)spt_backendSignupConfigurationURL;
+ (id)spt_backendUsernameValidationURLForUsername:(id)arg1;
+ (id)spt_backendPasswordValidationURLForPassword:(id)arg1;
+ (id)spt_backendEmailValidationURLForEmail:(id)arg1;
+ (id)spt_backendDisplayNameSuggestionForEmail:(id)arg1;
+ (id)spt_backendCreateFacebookUserURL;
+ (id)spt_backendCreateUserURL;
+ (id)spt_backendServiceURL;
+ (id)spt_vocalRemovalEventsURL;
+ (id)spt_vocalRemovalVolumeURL;
+ (id)spt_vocalRemovalStatusURL;
+ (id)spt_moderationServicePingURL;
+ (id)spt_moderationServiceURL;
+ (id)spt_KeymasterTokensURL;
+ (id)spt_NRFURL;
+ (id)spt_unsubscribeUserFromNotificationAPIURL:(id)arg1 channel:(long long)arg2;
+ (id)spt_subscribeUserToNotificationAPIURL:(id)arg1 channel:(long long)arg2;
+ (id)spt_fetchNotificationPreferencesAPIURL;
+ (id)spt_notificationViewControllerURI;
+ (id)spt_nowPlayingSideBarURI;
+ (id)spt_nowPlayingBarURI;
+ (id)spt_nowPlayingViewContentsURI;
+ (id)spt_nowPlayingViewURI;
+ (id)spt_onboardingCoordinationFeatureURL;
+ (id)spt_PaymentCancelURL;
+ (id)spt_artistDismissRecommendationURLForDimissUri:(id)arg1;
+ (id)spt_artistFollowRecommendationsURL;
+ (id)spt_personalisedSetsPrefixComponents;
+ (id)spt_personalisedSetURLWithPlaylistURL:(id)arg1;
+ (id)spt_phoneNumberSignupPhoneNumberEntryViewURI;
+ (id)spt_phoneNumberSignupValidateOtpViewURI;
+ (id)spt_phoneNumberSignupCallingCodeViewURI;
+ (id)spt_freeTierAddToPlaylistURIWithEntityURI:(id)arg1;
+ (id)spt_freeTierAddToPlaylistURI;
+ (id)spt_playlistRootlistURI;
+ (id)spt_podcastUtteranceSurveyURL;
+ (id)spt_componentsByAppendingComponents:(id)arg1 withContext:(id)arg2;
+ (id)spt_experimentationServiceURLWithContext:(id)arg1;
+ (id)spt_preSignupExperimentationURLWithContext:(id)arg1;
+ (id)spt_localPremiumDestinationHubsResponseFileURLWithLocaleIdentifier:(id)arg1;
+ (id)spt_localPremiumDestinationHubsResponseFileURL;
+ (id)spt_premiumDestinationHubsServiceURLWithPathComponents:(id)arg1 usingDevEnabled:(_Bool)arg2;
+ (id)spt_premiumDestinationHubsDevV3ServiceURL;
+ (id)spt_premiumDestinationHubsV3ServiceURL;
+ (id)spt_premiumDestinationHubsDevV2ServiceURL;
+ (id)spt_premiumDestinationHubsV2ServiceURL;
+ (id)spt_premiumDestinationPreviewToolNavURL;
+ (id)spt_premiumDestinationPreviewURL;
+ (id)spt_profileFollowingURLForUsername:(id)arg1;
+ (id)spt_profileFollowersURLForUsername:(id)arg1;
+ (id)spt_profileAllArtistsURLForUsername:(id)arg1;
+ (id)spt_profileAllPlaylistsURLForUsername:(id)arg1;
+ (id)spt_profileURIForUsername:(id)arg1;
+ (id)spt_ProfileViewFollowingURLForUsername:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_ProfileViewFollowersURLForUsername:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_ProfileViewRecentlyPlayedArtistsURLForUsername:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_ProfileViewPlaylistsURLForUsername:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_ProfileViewVolatileURLForUsername:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_ProfileViewURLForUsername:(id)arg1 withTransport:(long long)arg2;
+ (id)spt_encodeUsername:(id)arg1;
+ (id)spt_profileFollowingEndpointWithUsername:(id)arg1;
+ (id)spt_profileFollowersEndpointWithUsername:(id)arg1;
+ (id)spt_profileRecentlyPlayedArtistsEndpointWithUsername:(id)arg1;
+ (id)spt_profilePlaylistsEndpointWithUsername:(id)arg1;
+ (id)spt_profileVolatileEndpointWithUsername:(id)arg1;
+ (id)spt_profileEndpointWithUsername:(id)arg1;
+ (id)spt_profileServiceName;
+ (id)spt_trackEventAPIURL;
+ (id)spt_newRegisterTokenAPIURL;
+ (id)spt_registerTokenAPIURL;
+ (id)spt_queueURI;
+ (id)spt_radioHubURI;
+ (id)spt_stationURLWithSeed:(id)arg1;
+ (id)spt_URL:(id)arg1 componentsFromBase:(id)arg2;
+ (id)spt_CDNURLForImageIDs:(id)arg1;
+ (id)spt_imageIDsFromImageLink:(id)arg1;
+ (id)spt_HTTPURLForImageWithSpotifyLink:(id)arg1 size:(unsigned long long)arg2 baseCDNURL:(id)arg3;
+ (id)spt_HTTPURLForImageWithSpotifyLink:(id)arg1;
+ (unsigned long long)spt_optimalCDNImageSizeForSideInPoints:(double)arg1;
+ (unsigned long long)spt_optimalCDNImageSizeForSideInPixels:(double)arg1;
+ (id)spt_availableSPTCDNImageSizes;
+ (void)createQueryParametersWithTriggerPatterns:(id)arg1 triggerType:(id)arg2 forUrlString:(id)arg3;
+ (id)spt_inAppMessageFetchNoteMessagesURLForTriggerPatterns:(id)arg1 triggerType:(id)arg2 usingDevEnabled:(_Bool)arg3;
+ (id)spt_inAppMessageFetchBannerMessagesURLForTriggerPatterns:(id)arg1 triggerType:(id)arg2 usingDevEnabled:(_Bool)arg3;
+ (id)spt_inAppMessageFetchCardMessagesURLForTriggerPatterns:(id)arg1 triggerType:(id)arg2 usingDevEnabled:(_Bool)arg3;
+ (id)spt_inAppMessageFetchTriggersURLUsingDevEnabled:(_Bool)arg1;
+ (id)spt_inAppMessageBaseURLComponentsWhenDevEnabled:(_Bool)arg1;
+ (id)spt_jsonFormatQueryItem;
+ (id)spt_plainScannablesURLWithFormat:(unsigned long long)arg1 backgroundColor:(id)arg2 barColor:(unsigned long long)arg3 pixelWidth:(unsigned long long)arg4 uri:(id)arg5;
+ (id)spt_plainScannablesForEntityURL:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)spt_scannablesGeneratorURLForEntityURL:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)spt_scannablesImageURLForEntityURL:(id)arg1 imageURL:(id)arg2;
+ (id)spt_scannablesUrlForID:(id)arg1;
+ (id)spt_scannablesSearchViewURL;
+ (id)spt_scannablesViewURL;
+ (id)spt_searchDrilldownURIWithSectionIdentifier:(id)arg1 query:(id)arg2;
+ (id)spt_searchURIWithQuery:(id)arg1;
+ (unsigned long long)spt_categoryPositionToScrollFromQueryParameters:(id)arg1;
+ (id)spt_settingsFeatureURLWithScrollToCategoryPosition:(unsigned long long)arg1 forConfigURLString:(id)arg2;
+ (id)spt_settingsFeatureURL;
+ (id)spt_snapchatDeeplink;
+ (id)spt_facebookStoriesDeeplink;
+ (id)spt_instagramStoriesDeeplink;
+ (id)spt_shareablesEndpointForPath:(id)arg1 entityURL:(id)arg2;
+ (id)spt_appendSnapchatUTMTagsForURI:(id)arg1;
+ (id)createURLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queries:(id)arg4;
+ (id)spt_participantListURL;
+ (id)spt_speakerCompanionPageURLWithRequestIdentifier:(id)arg1;
+ (id)spt_speakerCompanionEntityFeedbackURLWithRequestIdentifier:(id)arg1;
+ (id)spt_iapImageURLForIcon:(long long)arg1;
+ (id)spt_URLWithComponents:(id)arg1;
+ (id)spt_URLWithImageID:(id)arg1;
+ (id)sp_helpURL;
+ (id)sp_signupURL;
+ (id)sp_licenseURL;
+ (id)spt_URLWithUserName:(id)arg1;
+ (id)spt_URLMosaicWithImageURLs:(id)arg1;
+ (id)spt_URLWithSpotifyLink:(const struct SpotifyLink *)arg1;
+ (id)spt_URLWithDecodedComponents:(id)arg1 queryParameters:(id)arg2;
+ (id)spt_URLWithDecodedComponents:(id)arg1;
+ (id)spt_storylinesURL:(id)arg1;
+ (id)spt_storylinesEnabledTracksURL;
+ (id)spt_trackCreditsViewControllerURIFromUID:(id)arg1;
+ (id)spt_trackCreditsViewControllerURI;
+ (id)spt_trackCreditsViewControllerURI:(id)arg1;
+ (id)spt_trackCreditServiceURL:(id)arg1;
+ (id)spt_videoPlayerURLWithEndpoint:(id)arg1;
+ (id)spt_audioPlayerPosition;
+ (id)spt_videoPlayerPreferredSubtitle;
+ (id)spt_videoPlayerError;
+ (id)spt_videoPlayerState;
+ (id)spt_videoPlayerAdvance;
+ (id)spt_videoPlayerCommands;
+ (id)spt_voiceSpeakerDynamicSuggestionURL;
+ (id)spt_voiceDynamicSuggestionURL;
+ (id)spt_voiceAvailableLanguagesURL;
- (_Bool)spt_isSpotifyAccountWebsite;
- (_Bool)spt_isWebViewExitURL;
- (_Bool)spt_isCampaignURL;
- (_Bool)spt_isHolidayCampaignURL;
- (_Bool)spt_isAccountUpsellURL;
- (_Bool)spt_isArtistAboutURL;
- (id)spt_assistedCurationSearchArtistDrillDownArtistURL;
- (id)spt_assistedCurationSearchArtistDrillDownURLEndpoint;
- (_Bool)spt_isAssistedCurationSearchArtistDrillDownURL;
- (id)spt_assistedCurationSearchDrillDownURLQuery;
- (id)spt_assistedCurationSearchDrillDownURLEntityType;
- (_Bool)spt_isAssistedCurationSearchDrillDownURL;
- (id)spt_assistedCuratedPlaylistURL;
@property(readonly, nonatomic, getter=spt_hasAssistedCurationPrefixComponents) _Bool hasAssistedCurationPrefixComponents;
- (_Bool)spt_isAssistedCurationURL;
@property(readonly, nonatomic, getter=spt_decodedViewURI) NSURL *decodedViewURI;
@property(readonly, nonatomic) _Bool spt_isAssistedCurationSearchResultDrillDownURI;
@property(readonly, nonatomic, getter=spt_isAuthAction) _Bool sp_authAction;
@property(readonly, nonatomic, getter=spt_isPairAction) _Bool spt_PairAction;
- (id)spt_browseGenre;
- (_Bool)spt_isBrowseDeprecatedURL;
- (_Bool)spt_isBrowseGenreURL;
- (_Bool)spt_isBrowseRootURL;
- (_Bool)spt_isBrowseURL;
- (_Bool)spt_isCanvasPlaylistURI;
- (id)spt_underlyingPlaylistURI;
@property(readonly, nonatomic, getter=spt_isChartsBlockURL) _Bool spt_chartsBlockURL;
@property(readonly, nonatomic, getter=spt_isChartsOverviewURL) _Bool spt_chartsOverviewURL;
@property(readonly, nonatomic, getter=spt_isChartsRootURL) _Bool spt_chartsRootURL;
@property(readonly, copy, nonatomic) NSString *spt_chartShowAllIdentifier;
@property(readonly, copy, nonatomic) NSString *spt_chartID;
@property(readonly, nonatomic, getter=spt_isCollectionSongsSourceURL) _Bool isCollectionSongsSourceURL;
- (id)spt_collectionEntityURLWithUsername:(id)arg1;
@property(readonly, nonatomic, getter=spt_isInternalCollectionTracksHeartImageURL) _Bool isInternalCollectionTracksHeartImageURL;
@property(readonly, nonatomic, getter=spt_isInternalCollectionPodcastURL) _Bool isInternalCollectionPodcastURL;
@property(readonly, nonatomic, getter=spt_isVariousArtistsURL) _Bool isVariousArtistsURL;
@property(readonly, nonatomic, getter=spt_isInternalCollectionTracksURL) _Bool isInternalCollectionTracksURL;
@property(readonly, nonatomic, getter=spt_isInternalCollectionAlbumsURL) _Bool isInternalCollectionAlbumsURL;
@property(readonly, nonatomic, getter=spt_isInternalCollectionArtistsURL) _Bool isInternalCollectionArtistsURL;
@property(readonly, nonatomic, getter=spt_isInternalCollectionOverviewURL) _Bool isInternalCollectionOverviewURL;
@property(readonly, copy, nonatomic) NSString *spt_concertsIdentifier;
- (id)spt_concertsArtistIdentifier;
- (_Bool)spt_isConcertsForArtistViewURI;
@property(readonly, nonatomic, getter=spt_isDailyMixHub) _Bool dailyMixHub;
@property(readonly, nonatomic, getter=spt_isDailyMixURL) _Bool dailyMixURL;
@property(readonly, nonatomic, getter=spt_isClusterStationURL) _Bool clusterStationURL;
@property(readonly, nonatomic) NSString *spt_dailyMixId;
- (id)spt_dailyMixURIComponentsPrefix;
@property(readonly, nonatomic, getter=spt_isRadioApolloEntity) _Bool radioApolloEntity;
- (_Bool)spt_isEqualIgnoringPlaylistVersions:(id)arg1;
@property(readonly, nonatomic, getter=spt_entitySeeAllSongsEmbeddedViewURI) NSURL *entitySeeAllSongsEmbeddedViewURI;
@property(readonly, nonatomic, getter=spt_isEntitySeeAllSongsViewURI) _Bool isEntitySeeAllSongsViewURI;
@property(readonly, nonatomic, getter=spt_isNaturalLanguageQueryURI) _Bool isNaturalLanguageQueryURI;
@property(readonly, nonatomic) _Bool spt_isExternalIntegrationRecentlyPlayedURI;
- (id)spt_externalIntegrationURIWithoutSpacesBlockIdentifier;
- (id)spt_externalIntegrationURIWithSpacesBlockIdentifier:(id)arg1;
@property(readonly, copy, nonatomic) NSString *spt_externalIntegrationSpacesBlockIdentifier;
@property(readonly, nonatomic) _Bool spt_isExternalIntegrationGenreURI;
@property(readonly, nonatomic) _Bool spt_isExternalIntegrationSpacesURI;
- (id)spt_albumID;
- (id)spt_freeTierCollectionAlbumRedirectURI;
@property(readonly, nonatomic) NSString *spt_freeTierAlbumIdentifier;
@property(readonly, nonatomic) _Bool spt_isFreeTierCollectionAlbumViewURI;
@property(readonly, nonatomic) _Bool spt_isFreeTierAlbumViewURI;
@property(readonly, nonatomic, getter=spt_allSongsEmbeddedViewURI) NSURL *allSongsEmbeddedViewURI;
@property(readonly, nonatomic, getter=spt_isAllSongsViewURI) _Bool allSongsViewURI;
- (id)spt_freeTierCollectionArtistRedirectURI;
@property(readonly, nonatomic) NSString *spt_freeTierArtistIdentifier;
@property(readonly, nonatomic) _Bool spt_isFreeTierArtistReleasesViewURI;
@property(readonly, nonatomic) _Bool spt_isFreeTierCollectionArtistViewURI;
@property(readonly, nonatomic) _Bool spt_URIContainsFreeTierArtist;
@property(readonly, nonatomic) _Bool spt_isFreeTierArtistViewURI;
- (_Bool)spt_isFreeTierRenamePlaylistURI;
- (_Bool)spt_isFreeTierCreatePlaylistURI;
- (_Bool)spt_isFreeTierFindURI;
- (_Bool)spt_freeTierTasteOnboardingIsMediumPaidSocial;
@property(readonly, nonatomic) NSString *spt_freeTierTrackIdentifier;
@property(readonly, nonatomic) _Bool spt_isFreeTierTrackViewURI;
@property(readonly, nonatomic) long long spt_glueHubComponentEntityStyle;
@property(readonly, nonatomic, getter=spt_isDevicePickerURL) _Bool isDevicePickerURL;
- (_Bool)spt_isHiddenContentURI;
- (_Bool)spt_isLoginContinueWithEmailViewURI;
- (_Bool)spt_isLoginMagicLinkDoRequestViewURI;
- (_Bool)spt_isLoginMagicLinkSentConfirmationViewURI;
- (_Bool)spt_isLoginSplitSignupGenderInputViewURI;
- (_Bool)spt_isLoginSplitSignupAgeInputViewURI;
- (_Bool)spt_isLoginSplitSignupPasswordInputViewURI;
- (_Bool)spt_isLoginSplitSignupEmailInputViewURI;
- (_Bool)spt_isSignupFacebookConfirmationURI;
- (_Bool)spt_isRecoverAccountResetPasswordConfirmationURI;
- (_Bool)spt_isLoginRecoverAccountURI;
- (_Bool)spt_isLoginWelcomeURI;
- (_Bool)spt_isLoginURI;
@property(readonly, nonatomic) _Bool spt_isMadeForYouHub;
- (id)spt_imageIdentifier;
- (_Bool)spt_isKeymasterTokenURL;
- (id)spt_URLByAppendingSpotifyToken:(id)arg1;
- (_Bool)spt_isNotificationViewControllerURI;
- (_Bool)spt_isRadioURI;
- (_Bool)spt_isPodcastURI;
- (_Bool)spt_isDailyMixURI;
@property(readonly, nonatomic, getter=spt_isNowPlayingSideBarURI) _Bool isNowPlayingSideBarURI;
@property(readonly, nonatomic, getter=spt_isNowPlayingBarURI) _Bool isNowPlayingBarURI;
@property(readonly, nonatomic, getter=spt_isNowPlayingViewContentsURI) _Bool isNowPlayingViewContentsURI;
@property(readonly, nonatomic, getter=spt_isNowPlayingViewURI) _Bool isNowPlayingViewURI;
@property(readonly, nonatomic, getter=spt_isOnDemandDecoratableURL) _Bool isOnDemandDecoratableURL;
- (_Bool)spt_isOnboardingCoordinationFeatureURI;
@property(readonly, nonatomic, getter=spt_personalisedSetEmbeddedPlaylistURL) NSURL *personalisedSetEmbeddedPlaylistURL;
@property(readonly, nonatomic, getter=spt_isPersonalisedSetURL) _Bool personalisedSetURL;
- (_Bool)spt_isPhoneNumberEntryViewURI;
- (_Bool)spt_isFreeTierAddToPlaylistURI;
- (id)spt_playlistV2URI;
@property(readonly, nonatomic, getter=spt_isPlaylistRootlistURL) _Bool isPlaylistRootlistURL;
- (id)playlistFolderURL;
- (id)allTracksPlaylistURL;
@property(readonly, nonatomic, getter=spt_isInternalPlaylistsURL) _Bool isInternalPlaylistsURL;
@property(readonly, nonatomic, getter=spt_isDiscoverWeeklyPlaylist) _Bool discoverWeeklyPlaylist;
@property(readonly, nonatomic, getter=spt_playlistFolderIdentifier) NSString *playlistFolderIdentifier;
@property(readonly, nonatomic, getter=spt_playlistIdentifier) NSString *playlistIdentifier;
- (_Bool)spt_podcastEpisodeDescriptionURLIsWebURL;
- (_Bool)spt_podcastEpisodeDescriptionURLIsSpotifyURL;
- (_Bool)spt_podcastEpisodeDescriptionURLIsEmailURL;
- (double)spt_podcastTimestampInMillisecondsFromURL;
- (double)spt_podcastTimestampInSecondsFromURL;
@property(readonly, nonatomic, getter=spt_URLIsWebURL) _Bool isWebURL;
@property(readonly, nonatomic, getter=spt_URLIsSpotifyURL) _Bool isSpotifyURL;
@property(readonly, nonatomic, getter=spt_URLIsEmailURL) _Bool isEmailURL;
@property(readonly, nonatomic, getter=spt_displayTimeFromURL) NSString *displayTimeFromURL;
@property(readonly, nonatomic, getter=spt_timestampFromURL) NSNumber *timestampFromURL;
@property(readonly, nonatomic, getter=spt_internalVideoURLFromShowURL) NSURL *internalVideoURLFromShowURL;
@property(readonly, nonatomic, getter=spt_internalPodcastURLFromShowURL) NSURL *internalPodcastURLFromShowURL;
@property(readonly, nonatomic, getter=spt_internalPodcastEpisodeURLFromPodcastEpisodeURL) NSURL *internalPodcastEpisodeURLFromPodcastEpisodeURL;
- (id)spt_urlFromPodmarksURL;
@property(readonly, nonatomic, getter=spt_isVideoShowsHubViewURI) _Bool isVideoShowsHubViewURI;
@property(readonly, nonatomic, getter=spt_isEpisodesCollectionURL) _Bool spt_episodesCollectionURL;
@property(readonly, nonatomic, getter=spt_isPodcastUnplayedEpisodesCollectionURL) _Bool isPodcastUnplayedEpisodesCollectionURL;
@property(readonly, nonatomic, getter=spt_isPodcastCollectionURL) _Bool isPodcastCollectionURL;
- (_Bool)isPodcastURLComponents;
- (_Bool)isLegacyPodcastURLComponents;
- (_Bool)isInternalVideoURLComponents;
- (_Bool)isInternalPodcastURLComponents;
- (_Bool)isInternalPodcastEpisodeURLComponents;
- (_Bool)isPodcastEpisodeURLComponents;
- (_Bool)isPodmarksEpisodeURLComponent;
- (_Bool)isLegacyPodcastEpisodeURLComponents;
@property(readonly, nonatomic, getter=spt_internalPodcastEpisodeID) NSString *internalPodcastEpisodeID;
@property(readonly, nonatomic, getter=spt_podcastEpisodeID) NSString *podcastEpisodeID;
@property(readonly, nonatomic, getter=spt_podcastID) NSString *podcastID;
@property(readonly, nonatomic, getter=spt_isCollectionDownloadsURL) _Bool isCollectionDownloadsURL;
@property(readonly, nonatomic, getter=spt_isCollectionEpisodesURL) _Bool isCollectionEpisodesURL;
@property(readonly, nonatomic, getter=spt_isInternalVideoURL) _Bool isInternalVideoURL;
@property(readonly, nonatomic, getter=spt_isInternalPodcastURL) _Bool isInternalPodcastURL;
@property(readonly, nonatomic, getter=spt_isInternalPodcastEpisodeURL) _Bool isInternalPodcastEpisodeURL;
@property(readonly, nonatomic, getter=spt_isPodcastEpisodeURL) _Bool isPodcastEpisodeURL;
@property(readonly, nonatomic, getter=spt_isPodcastURL) _Bool isPodcastURL;
- (_Bool)spt_isPremiumDestinationPreviewURL;
@property(readonly, nonatomic, getter=spt_isProfileSocialRelationsURL) _Bool isProfileSocialRelationsURL;
@property(readonly, nonatomic, getter=spt_isProfileViewAllURL) _Bool isProfileViewAllURL;
@property(readonly, nonatomic, getter=spt_isProfilePageURL) _Bool isProfilePageURL;
@property(readonly, nonatomic, getter=spt_isProfileOverviewURL) _Bool spt_isProfilePageURL;
- (id)spt_URIByNormalizingRadioStation;
- (id)spt_GDPRSafeStationURI;
- (id)spt_radioStationSeedURI;
@property(readonly, nonatomic, getter=spt_canSeedRadioStation) _Bool canSeedRadioStation;
@property(readonly, nonatomic, getter=spt_isFormatListStation) _Bool isFormatListStation;
@property(readonly, nonatomic, getter=spt_isSongSeededRadioStationURL) _Bool songSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isPlaylistSeededRadioStationURL) _Bool playlistSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isAlbumSeededRadioStationURL) _Bool albumSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isArtistSeededRadioStationURL) _Bool artistSeededRadioStationURL;
@property(readonly, nonatomic, getter=spt_isRadioStationURL) _Bool radioStationURL;
- (_Bool)spt_isZeldaStationURL;
@property(readonly, nonatomic, getter=spt_isStationURL) _Bool stationURL;
- (id)spt_scannablesImageURL;
- (id)spt_scannablesEntityURL;
@property(readonly, nonatomic, getter=spt_isSpotifyURL) _Bool spotifyURL;
- (id)spt_sourceForScannablesURL;
- (id)spt_scannablesURLWithSource:(id)arg1;
- (_Bool)spt_isScannablesImageURL;
@property(readonly, nonatomic, getter=spt_isScannablesViewURL) _Bool scannablesViewURL;
- (_Bool)spt_searchGetDrilldownURISectionIdentifier:(id *)arg1 query:(id *)arg2;
- (_Bool)spt_searchGetURIQuery:(id *)arg1;
@property(readonly, nonatomic, getter=spt_isSearchDrilldownURI) _Bool isSearchDrilldownURI;
@property(readonly, nonatomic, getter=spt_isSearchURI) _Bool isSearchURI;
@property(readonly, copy, nonatomic, getter=spt_searchSectionIdentifier) NSString *searchSectionIdentifier;
@property(readonly, copy, nonatomic, getter=spt_searchDrilldownQuery) NSString *searchDrilldownQuery;
@property(readonly, copy, nonatomic, getter=spt_searchQuery) NSString *searchQuery;
- (id)spt_shareableURL;
- (_Bool)spt_isCustomURI;
@property(readonly, nonatomic, getter=spt_isSocialListeningSourceSessionViewURL) _Bool socialListeningSourceSessionViewURL;
- (id)spt_joinSessionTokenFromURL;
@property(readonly, nonatomic, getter=spt_isSocialListeningJoinSessionURL) _Bool socialListeningJoinSessionURL;
- (long long)spt_iapIcon;
- (unsigned long long)spt_URIComponentCount;
- (id)spt_URIComponentAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=spt_isSpotifyURI) _Bool isSpotifyURI;
@property(readonly, nonatomic, getter=spt_spotifyURIComponents) NSArray *spotifyURIComponents;
- (_Bool)spt_isBadSpotifyURI;
- (id)spt_valueForComponentKey:(id)arg1;
@property(readonly, nonatomic, getter=spt_trackIdentifier) NSString *trackIdentifier;
@property(readonly, nonatomic, getter=spt_webURL) __weak NSURL *webURL;
@property(readonly, nonatomic, getter=spt_username) NSString *username;
@property(readonly, nonatomic, getter=spt_localFileImagePath) NSString *localFileImagePath;
- (id)spt_imageIDsFromPathComponent:(id)arg1;
@property(readonly, nonatomic, getter=spt_internalURLComponents) NSArray *internalURLComponents;
@property(readonly, nonatomic, getter=spt_isNowPlayingURL) _Bool isNowPlayingURL;
@property(readonly, nonatomic, getter=spt_isSpotifyLink) _Bool isSpotifyLink;
@property(readonly, nonatomic, getter=spt_isInternalURL) _Bool isInternalURL;
@property(readonly, nonatomic, getter=spt_isProfileURL) _Bool isProfileURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionArtistAllTracksURL) _Bool isCollectionUnionArtistAllTracksURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionAlbumURL) _Bool isCollectionUnionAlbumURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionArtistURL) _Bool isCollectionUnionArtistURL;
@property(readonly, nonatomic, getter=spt_isCollectionUnionURL) _Bool isCollectionUnionURL;
@property(readonly, nonatomic, getter=spt_isCollectionURL) _Bool isCollectionURL;
@property(readonly, nonatomic, getter=spt_isPlaylistRootTreeURL) _Bool isPlaylistRootTreeURL;
@property(readonly, nonatomic, getter=spt_isPlaylistRootURL) _Bool isPlaylistRootURL;
@property(readonly, nonatomic, getter=spt_signupURLContent) NSDictionary *signupURLContent;
@property(readonly, nonatomic, getter=spt_isSignupURL) _Bool isSignupURL;
@property(readonly, nonatomic, getter=spt_isAllTracksInPlaylistFolderURL) _Bool isAllTracksInPlaylistFolderURL;
@property(readonly, nonatomic, getter=spt_isPlaylistFolderURL) _Bool isPlaylistFolderURL;
@property(readonly, nonatomic, getter=spt_isConcertEntityURL) _Bool isConcertEntityURL;
@property(readonly, nonatomic, getter=spt_toplistIdentifier) NSString *toplistIdentifier;
@property(readonly, nonatomic, getter=spt_isToplistURL) _Bool isToplistURL;
@property(readonly, nonatomic, getter=spt_isToplistTracksURL) _Bool isToplistTracksURL;
@property(readonly, nonatomic, getter=spt_isLocalFilesPlaylistURL) _Bool isLocalFilesPlaylistURL;
@property(readonly, nonatomic, getter=spt_isPlaylistURL) _Bool isPlaylistURL;
@property(readonly, nonatomic, getter=spt_isValidAlbumURL) _Bool isValidAlbumURL;
@property(readonly, nonatomic, getter=spt_isAlbumURL) _Bool isAlbumURL;
@property(readonly, nonatomic, getter=spt_isValidArtistURL) _Bool isValidArtistURL;
@property(readonly, nonatomic, getter=spt_isArtistURL) _Bool isArtistURL;
@property(readonly, nonatomic, getter=spt_isSearchViewURL) _Bool isSearchViewURL;
@property(readonly, nonatomic, getter=spt_imageURLs) NSArray *imageURLs;
@property(readonly, nonatomic, getter=spt_imageIDs) NSArray *imageIDs;
@property(readonly, nonatomic, getter=spt_isHTTPImageURL) _Bool isHttpImageURL;
@property(readonly, nonatomic, getter=spt_isLocalFileImageURL) _Bool isLocalFileImageURL;
@property(readonly, nonatomic, getter=spt_isMosaicURL) _Bool isMosaicURL;
@property(readonly, nonatomic, getter=spt_isImageURL) _Bool isImageURL;
@property(readonly, nonatomic, getter=spt_isLocalTrackURL) _Bool isLocalTrackURL;
@property(readonly, nonatomic, getter=spt_isShowURL) _Bool isShowURL;
@property(readonly, nonatomic, getter=spt_isEpisodeURL) _Bool isEpisodeURL;
@property(readonly, nonatomic, getter=spt_isTrackURL) _Bool isTrackURL;
@property(readonly, nonatomic, getter=spt_isAdURL) _Bool isAdURL;
@property(readonly, nonatomic, getter=spt_isActivateURL) _Bool isActivateURL;
- (id)spt_urlByReplacingUsernameWithString:(id)arg1;
@property(readonly, nonatomic, getter=spt_cppLink) struct SpotifyLink link;
@property(readonly, nonatomic, getter=spt_censoredURIString) NSString *censoredURIString;
@property(readonly, nonatomic, getter=spt_sharingContext) NSURL *sharingContext;
- (id)spt_URLWithSharingContext:(id)arg1;
- (id)canonicalURIforPartnerAccountsURI:(id)arg1;
- (id)canonicalURIForAccountsURI:(id)arg1;
- (_Bool)isSupportedAccountsURI:(id)arg1;
- (_Bool)isSupportedPlayURIPath:(id)arg1;
- (id)canonicalURIForPlayURI:(id)arg1;
- (id)spotifyURIWithSlashSeparatedPath:(id)arg1 query:(id)arg2;
- (id)canonicalURIForOpenURI:(id)arg1;
- (id)canonicalURIForMainURI:(id)arg1;
- (id)canonicalURIForSpotifyURI:(id)arg1;
@property(readonly, nonatomic, getter=spt_normalizedSpotifyURI) NSURL *normalizedSpotifyURI;
@property(readonly, nonatomic, getter=spt_normalizedURI) NSURL *normalizedURI;
@property(readonly, nonatomic, getter=spt_decodedSpotifyURIComponents) NSArray *decodedSpotifyURIComponents;
- (id)spt_URLByMergingQueryParameters:(id)arg1;
- (id)spt_URLByReplacingQueryParameters:(id)arg1;
- (id)spt_URLByRemovingQuery;
- (id)spt_queryParameters;
- (id)spt_query;
- (_Bool)spt_isTrackCreditsViewControllerURI;
- (id)spt_UIDFromTrackURI;
@property(readonly, nonatomic, getter=spt_isVoiceURL) _Bool isVoiceURL;
@end


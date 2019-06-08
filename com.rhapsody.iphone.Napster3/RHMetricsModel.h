//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHCoreDataModel.h"

@interface RHMetricsModel : RHCoreDataModel
{
}

- (_Bool)isAnyoneEverSignedIn;
- (void)setIsFirstLaunch:(_Bool)arg1;
- (_Bool)isFirstLaunch;
- (void)resetModel;
- (id)isPlaylistPrivacyPreferencePublicForUser:(id)arg1;
- (void)setPlaylistPrivacyPreferencePublic:(_Bool)arg1 forUser:(id)arg2;
- (_Bool)isOptPromptBlockedForUser:(id)arg1;
- (void)setBlockOptPromptForUser:(id)arg1;
- (id)getDateFirstNotificationsOptPromptShownToUser:(id)arg1;
- (void)setShownFirstNotificationsOptPromptToUser:(id)arg1 date:(id)arg2;
- (id)dateOfLastTrackedPlaybackWithEarprintForUser:(id)arg1;
- (void)setDateOfPlaybackWithEarprintForUser:(id)arg1;
- (_Bool)wasPlaylistRadioFSPVarietyToastShownToUser:(id)arg1;
- (void)addUserWhoSawPlaylistRadioFSPVarietyToast:(id)arg1;
- (_Bool)wasPlaylistRadioFeatureAwarenessToastShownToUser:(id)arg1;
- (void)addUserWhoSawPlaylistRadioFeatureAwarenessToast:(id)arg1;
- (_Bool)wasEvenEarprintOnToastShownToUser:(id)arg1;
- (void)evenEarprintOnToastShownToUser:(id)arg1;
- (_Bool)didUserSeeBookmarkToast:(id)arg1;
- (void)addUserWhoSawBookmarkToast:(id)arg1;
- (_Bool)didUserSeeMiniPlayerEndlessToast:(id)arg1;
- (void)addUserWhoSawMiniPlayerEndlessToast:(id)arg1;
- (_Bool)didUserSeeFSPEndlessToast:(id)arg1;
- (void)addUserWhoSawFSPEndlessToast:(id)arg1;
- (_Bool)didUserSeeDisableGifSuggestionPrompt:(id)arg1;
- (void)addUserWhoSawDisableGifSuggestionPrompt:(id)arg1;
- (void)removeUserWhoDisabledGifSuggestions:(id)arg1;
- (void)addUserWhoDisabledGifSuggestions:(id)arg1;
- (_Bool)didUserDisableGifSuggestions:(id)arg1;
- (_Bool)didUserSeePlaylistWizardButton:(id)arg1;
- (void)addUserWhoSawPlaylistWizardButton:(id)arg1;
- (_Bool)didUserSeePlaylistBuilder:(id)arg1;
- (void)addUserWhoSawPlaylistBuilder:(id)arg1;
- (_Bool)userDidSeeOnboarding:(id)arg1;
- (id)usersWhoSawOnboarding;
- (void)addUserWhoSawOnboarding:(id)arg1;
- (id)eligibleForFrictionlessUserGuids;
- (void)removeEligibleForFrictionlessUserWithGuid:(id)arg1;
- (void)addEligibleForFrictionlessUserWithGuid:(id)arg1;
- (id)frictionlessTrialUserGuids;
- (void)removeFrictionlessTrialUserWithGuid:(id)arg1;
- (void)addFrictionlessTrialUserWithGuid:(id)arg1;
- (id)trialUserGuids;
- (void)removeTrialUserWithGuid:(id)arg1;
- (void)addTrialUserWithGuid:(id)arg1;
- (id)successfullySignedInRadioUsers;
- (void)addSuccessfullySignedInRadioUser:(id)arg1;
- (id)successfullySignedInUsers;
- (void)addSuccessfullySignedInUser:(id)arg1;
- (void)removeUserId:(id)arg1 key:(id)arg2;
- (id)userIdsForKey:(id)arg1;
- (void)addUserId:(id)arg1 key:(id)arg2;
- (id)successfullySignedInUsersForKey:(id)arg1;
- (void)addSuccessfullySignedInUser:(id)arg1 key:(id)arg2;
- (id)notificationName;
- (void)deleteModel;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRGateKeeperModule.h"

@interface DZRPlayerFeedbackGateKeeperModule : DZRGateKeeperModule
{
}

+ (id)name;
+ (id)deactivatedModule;
- (double)playerButtonsBorderWidth;
- (_Bool)feedbackPlayerIsActive;
- (id)dislikeToastMessage;
- (void)configureTrackActionsButtonImagesWithButtons:(id)arg1;
- (double)spaceBetweenItemsWithSize:(double)arg1;
- (id)playerLikeActiveImage;
- (void)configureAudioSettingsButton:(id)arg1;
- (void)configureQueueListButton:(id)arg1 flowMode:(_Bool)arg2;
- (id)buttonsCorrectOrderWithButtons:(id)arg1 flowMode:(_Bool)arg2 isInFreeMode:(_Bool)arg3;

@end


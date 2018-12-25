//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIAudioOnlyPlayabilitySupportedRenderers, YTIBackgroundabilitySupportedRenderers, YTILiveStreamabilitySupportedRenderers, YTIOfflineMessageSupportedRenderers, YTIOfflineabilitySupportedRenderers, YTIPictureInPictureSupportedRenderers, YTIPlayabilityErrorSkipSupportedConfigs, YTIPlayabilityErrorSupportedRenderers, YTIRenderer, YTIUnpluggedBlackoutsSupportedRenderers;

@interface YTIPlayabilityStatus : GPBMessage
{
}

+ (id)descriptor;
- (id)backgroundUpsell;
- (id)offlineUpsell;
- (_Bool)isPlayableInPictureInPicture;
- (_Bool)isPlayableInBackground;
- (_Bool)isLoginRequired;
- (_Bool)isContentCheckRequired;
- (_Bool)isAgeCheckRequired;
- (_Bool)isKoreanAgeVerificationRequired;
- (_Bool)isPlayableNowOrAfterUserAction;
- (_Bool)isLiveStreamOffline;
- (_Bool)isPlayable;

// Remaining properties
@property(retain, nonatomic) YTIAudioOnlyPlayabilitySupportedRenderers *audioOnlyPlayability; // @dynamic audioOnlyPlayability;
@property(retain, nonatomic) YTIBackgroundabilitySupportedRenderers *backgroundability; // @dynamic backgroundability;
@property(copy, nonatomic) NSData *correctedRevocableUnlistedToken; // @dynamic correctedRevocableUnlistedToken;
@property(nonatomic) int desktopLegacyAgeGateReason; // @dynamic desktopLegacyAgeGateReason;
@property(retain, nonatomic) YTIPlayabilityErrorSupportedRenderers *errorScreen; // @dynamic errorScreen;
@property(nonatomic) _Bool hasAudioOnlyPlayability; // @dynamic hasAudioOnlyPlayability;
@property(nonatomic) _Bool hasBackgroundability; // @dynamic hasBackgroundability;
@property(nonatomic) _Bool hasCorrectedRevocableUnlistedToken; // @dynamic hasCorrectedRevocableUnlistedToken;
@property(nonatomic) _Bool hasDesktopLegacyAgeGateReason; // @dynamic hasDesktopLegacyAgeGateReason;
@property(nonatomic) _Bool hasErrorScreen; // @dynamic hasErrorScreen;
@property(nonatomic) _Bool hasIsBlockedInRestrictedMode; // @dynamic hasIsBlockedInRestrictedMode;
@property(nonatomic) _Bool hasLiveStreamability; // @dynamic hasLiveStreamability;
@property(nonatomic) _Bool hasMiniplayer; // @dynamic hasMiniplayer;
@property(nonatomic) _Bool hasOfflineMessage; // @dynamic hasOfflineMessage;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasPictureInPicture; // @dynamic hasPictureInPicture;
@property(nonatomic) _Bool hasPlayableInBackground; // @dynamic hasPlayableInBackground;
@property(nonatomic) _Bool hasPlayableInEmbed; // @dynamic hasPlayableInEmbed;
@property(nonatomic) _Bool hasPlayableOffline; // @dynamic hasPlayableOffline;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasReasonTitle; // @dynamic hasReasonTitle;
@property(nonatomic) _Bool hasSkip; // @dynamic hasSkip;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasUnpluggedBlackouts; // @dynamic hasUnpluggedBlackouts;
@property(nonatomic) _Bool isBlockedInRestrictedMode; // @dynamic isBlockedInRestrictedMode;
@property(retain, nonatomic) YTILiveStreamabilitySupportedRenderers *liveStreamability; // @dynamic liveStreamability;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(retain, nonatomic) YTIRenderer *miniplayer; // @dynamic miniplayer;
@property(retain, nonatomic) YTIOfflineMessageSupportedRenderers *offlineMessage; // @dynamic offlineMessage;
@property(retain, nonatomic) YTIOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTIPictureInPictureSupportedRenderers *pictureInPicture; // @dynamic pictureInPicture;
@property(nonatomic) _Bool playableInBackground; // @dynamic playableInBackground;
@property(nonatomic) _Bool playableInEmbed; // @dynamic playableInEmbed;
@property(nonatomic) _Bool playableOffline; // @dynamic playableOffline;
@property(copy, nonatomic) NSString *reason; // @dynamic reason;
@property(copy, nonatomic) NSString *reasonTitle; // @dynamic reasonTitle;
@property(retain, nonatomic) YTIPlayabilityErrorSkipSupportedConfigs *skip; // @dynamic skip;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) YTIUnpluggedBlackoutsSupportedRenderers *unpluggedBlackouts; // @dynamic unpluggedBlackouts;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext, YTIMdeAdBreaksUpdateRequest, YTIMdeAdFormatsUpdateRequest, YTIMdeAddToPlaylistUpdateRequest, YTIMdeAgeRestrictionUpdateRequest, YTIMdeCaptionsCertificateUpdateRequest, YTIMdeCategoryUpdateRequest, YTIMdeCommentOptionsUpdateRequest, YTIMdeDescriptionUpdateRequest, YTIMdeDistributionOptionsUpdateRequest, YTIMdeGameTitleUpdateRequest, YTIMdeLicenseUpdateRequest, YTIMdeLiveChatUpdateRequestParams, YTIMdeLiveStreamScheduleUpdateRequestParams, YTIMdeLocationUpdateRequest, YTIMdeMatchPolicyUpdateRequestParams, YTIMdeMonetizationSettingsUpdateRequest, YTIMdePrivacyUpdateRequest, YTIMdeProductPlacementRequestParams, YTIMdeScheduledPublishingUpdateRequestParams, YTIMdeTagsUpdateRequest, YTIMdeTitleUpdateRequest, YTIMdeUsagePolicyUpdateRequest, YTIMdeVideoStillRequestParams;

@interface YTIMetadataUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMdeAdBreaksUpdateRequest *adBreaks; // @dynamic adBreaks;
@property(retain, nonatomic) YTIMdeAdFormatsUpdateRequest *adFormats; // @dynamic adFormats;
@property(retain, nonatomic) YTIMdeAddToPlaylistUpdateRequest *addToPlaylist; // @dynamic addToPlaylist;
@property(retain, nonatomic) YTIMdeAgeRestrictionUpdateRequest *ageRestriction; // @dynamic ageRestriction;
@property(retain, nonatomic) YTIMdeCaptionsCertificateUpdateRequest *captionsCertificate; // @dynamic captionsCertificate;
@property(retain, nonatomic) YTIMdeCategoryUpdateRequest *category; // @dynamic category;
@property(retain, nonatomic) YTIMdeCommentOptionsUpdateRequest *commentOptions; // @dynamic commentOptions;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) YTIMdeDescriptionUpdateRequest *description_p; // @dynamic description_p;
@property(retain, nonatomic) YTIMdeDistributionOptionsUpdateRequest *distributionOptions; // @dynamic distributionOptions;
@property(copy, nonatomic) NSString *encryptedVideoId; // @dynamic encryptedVideoId;
@property(retain, nonatomic) YTIMdeGameTitleUpdateRequest *gameTitle; // @dynamic gameTitle;
@property(nonatomic) _Bool hasAdBreaks; // @dynamic hasAdBreaks;
@property(nonatomic) _Bool hasAdFormats; // @dynamic hasAdFormats;
@property(nonatomic) _Bool hasAddToPlaylist; // @dynamic hasAddToPlaylist;
@property(nonatomic) _Bool hasAgeRestriction; // @dynamic hasAgeRestriction;
@property(nonatomic) _Bool hasCaptionsCertificate; // @dynamic hasCaptionsCertificate;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasCommentOptions; // @dynamic hasCommentOptions;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasDistributionOptions; // @dynamic hasDistributionOptions;
@property(nonatomic) _Bool hasEncryptedVideoId; // @dynamic hasEncryptedVideoId;
@property(nonatomic) _Bool hasGameTitle; // @dynamic hasGameTitle;
@property(nonatomic) _Bool hasLicense; // @dynamic hasLicense;
@property(nonatomic) _Bool hasLiveChat; // @dynamic hasLiveChat;
@property(nonatomic) _Bool hasLiveStreamSchedule; // @dynamic hasLiveStreamSchedule;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasMatchPolicy; // @dynamic hasMatchPolicy;
@property(nonatomic) _Bool hasMonetizationSettings; // @dynamic hasMonetizationSettings;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasProductPlacement; // @dynamic hasProductPlacement;
@property(nonatomic) _Bool hasRuAt; // @dynamic hasRuAt;
@property(nonatomic) _Bool hasScheduledPublishing; // @dynamic hasScheduledPublishing;
@property(nonatomic) _Bool hasTags; // @dynamic hasTags;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUsagePolicy; // @dynamic hasUsagePolicy;
@property(nonatomic) _Bool hasVideoStill; // @dynamic hasVideoStill;
@property(retain, nonatomic) YTIMdeLicenseUpdateRequest *license; // @dynamic license;
@property(retain, nonatomic) YTIMdeLiveChatUpdateRequestParams *liveChat; // @dynamic liveChat;
@property(retain, nonatomic) YTIMdeLiveStreamScheduleUpdateRequestParams *liveStreamSchedule; // @dynamic liveStreamSchedule;
@property(retain, nonatomic) YTIMdeLocationUpdateRequest *location; // @dynamic location;
@property(retain, nonatomic) YTIMdeMatchPolicyUpdateRequestParams *matchPolicy; // @dynamic matchPolicy;
@property(retain, nonatomic) YTIMdeMonetizationSettingsUpdateRequest *monetizationSettings; // @dynamic monetizationSettings;
@property(retain, nonatomic) YTIMdePrivacyUpdateRequest *privacy; // @dynamic privacy;
@property(retain, nonatomic) YTIMdeProductPlacementRequestParams *productPlacement; // @dynamic productPlacement;
@property(nonatomic) _Bool ruAt; // @dynamic ruAt;
@property(retain, nonatomic) YTIMdeScheduledPublishingUpdateRequestParams *scheduledPublishing; // @dynamic scheduledPublishing;
@property(retain, nonatomic) YTIMdeTagsUpdateRequest *tags; // @dynamic tags;
@property(retain, nonatomic) YTIMdeTitleUpdateRequest *title; // @dynamic title;
@property(retain, nonatomic) YTIMdeUsagePolicyUpdateRequest *usagePolicy; // @dynamic usagePolicy;
@property(retain, nonatomic) YTIMdeVideoStillRequestParams *videoStill; // @dynamic videoStill;

@end


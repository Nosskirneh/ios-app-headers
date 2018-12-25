//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIAdSafetyExperienceReason, YTIContinuationSupportedRenderers, YTIFrameworkUpdateTransport, YTIResponseContext, YTISearchHeaderSupportedRenderers, YTISearchOverlaySupportedRenderers, YTISearchResponseSupportedRenderers, YTISearchSurveyTriggerSupportedRenderers, YTISearchTopbarSupportedRenderers;

@interface YTISearchResponse : GPBMessage
{
}

+ (id)descriptor;
- (id)tabs;

// Remaining properties
@property(retain, nonatomic) YTIAdSafetyExperienceReason *adSafetyReason; // @dynamic adSafetyReason;
@property(retain, nonatomic) YTISearchResponseSupportedRenderers *contents; // @dynamic contents;
@property(retain, nonatomic) YTIContinuationSupportedRenderers *continuationContents; // @dynamic continuationContents;
@property(copy, nonatomic) NSString *debugHtml; // @dynamic debugHtml;
@property(nonatomic) _Bool displayBottomSheetSearchFilter; // @dynamic displayBottomSheetSearchFilter;
@property(nonatomic) long long estimatedResults; // @dynamic estimatedResults;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasAdSafetyReason; // @dynamic hasAdSafetyReason;
@property(nonatomic) _Bool hasContents; // @dynamic hasContents;
@property(nonatomic) _Bool hasContinuationContents; // @dynamic hasContinuationContents;
@property(nonatomic) _Bool hasDebugHtml; // @dynamic hasDebugHtml;
@property(nonatomic) _Bool hasDisplayBottomSheetSearchFilter; // @dynamic hasDisplayBottomSheetSearchFilter;
@property(nonatomic) _Bool hasEstimatedResults; // @dynamic hasEstimatedResults;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasOverlay; // @dynamic hasOverlay;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSearchAdsRequestURL; // @dynamic hasSearchAdsRequestURL;
@property(nonatomic) _Bool hasSurvey; // @dynamic hasSurvey;
@property(nonatomic) _Bool hasTemporaryDisableSearchAds; // @dynamic hasTemporaryDisableSearchAds;
@property(nonatomic) _Bool hasTopbar; // @dynamic hasTopbar;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTISearchHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) YTISearchOverlaySupportedRenderers *overlay; // @dynamic overlay;
@property(retain, nonatomic) NSMutableArray *refinementsArray; // @dynamic refinementsArray;
@property(readonly, nonatomic) unsigned long long refinementsArray_Count; // @dynamic refinementsArray_Count;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSString *searchAdsRequestURL; // @dynamic searchAdsRequestURL;
@property(retain, nonatomic) YTISearchSurveyTriggerSupportedRenderers *survey; // @dynamic survey;
@property(nonatomic) _Bool temporaryDisableSearchAds; // @dynamic temporaryDisableSearchAds;
@property(retain, nonatomic) YTISearchTopbarSupportedRenderers *topbar; // @dynamic topbar;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


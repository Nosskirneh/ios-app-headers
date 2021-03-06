//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIGuideNoSubscriptionsSectionRenderer, YTIGuideScrollableSectionRenderer, YTIGuideSectionRenderer, YTIGuideSigninPromoRenderer, YTIGuideSubscriptionsSectionRenderer, YTIMobileTopbarRenderer, YTIPivotBarRenderer;

@interface YTIGuideResponseSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIGuideNoSubscriptionsSectionRenderer *guideNoSubscriptionsSectionRenderer; // @dynamic guideNoSubscriptionsSectionRenderer;
@property(retain, nonatomic) YTIGuideScrollableSectionRenderer *guideScrollableSectionRenderer; // @dynamic guideScrollableSectionRenderer;
@property(retain, nonatomic) YTIGuideSectionRenderer *guideSectionRenderer; // @dynamic guideSectionRenderer;
@property(retain, nonatomic) YTIGuideSigninPromoRenderer *guideSigninPromoRenderer; // @dynamic guideSigninPromoRenderer;
@property(retain, nonatomic) YTIGuideSubscriptionsSectionRenderer *guideSubscriptionsSectionRenderer; // @dynamic guideSubscriptionsSectionRenderer;
@property(nonatomic) _Bool hasGuideNoSubscriptionsSectionRenderer; // @dynamic hasGuideNoSubscriptionsSectionRenderer;
@property(nonatomic) _Bool hasGuideScrollableSectionRenderer; // @dynamic hasGuideScrollableSectionRenderer;
@property(nonatomic) _Bool hasGuideSectionRenderer; // @dynamic hasGuideSectionRenderer;
@property(nonatomic) _Bool hasGuideSigninPromoRenderer; // @dynamic hasGuideSigninPromoRenderer;
@property(nonatomic) _Bool hasGuideSubscriptionsSectionRenderer; // @dynamic hasGuideSubscriptionsSectionRenderer;
@property(nonatomic) _Bool hasMobileTopbarRenderer; // @dynamic hasMobileTopbarRenderer;
@property(nonatomic) _Bool hasPivotBarRenderer; // @dynamic hasPivotBarRenderer;
@property(retain, nonatomic) YTIMobileTopbarRenderer *mobileTopbarRenderer; // @dynamic mobileTopbarRenderer;
@property(retain, nonatomic) YTIPivotBarRenderer *pivotBarRenderer; // @dynamic pivotBarRenderer;

@end


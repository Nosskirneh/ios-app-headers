//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIBooleanFormFieldRenderer, YTIContentViewPrivacyLinkRenderer, YTIIconLinkRenderer;

@interface YTIContentViewPrivacySupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBooleanFormFieldRenderer *booleanFormFieldRenderer; // @dynamic booleanFormFieldRenderer;
@property(retain, nonatomic) YTIContentViewPrivacyLinkRenderer *contentViewPrivacyLinkRenderer; // @dynamic contentViewPrivacyLinkRenderer;
@property(nonatomic) _Bool hasBooleanFormFieldRenderer; // @dynamic hasBooleanFormFieldRenderer;
@property(nonatomic) _Bool hasContentViewPrivacyLinkRenderer; // @dynamic hasContentViewPrivacyLinkRenderer;
@property(nonatomic) _Bool hasIconLinkRenderer; // @dynamic hasIconLinkRenderer;
@property(retain, nonatomic) YTIIconLinkRenderer *iconLinkRenderer; // @dynamic iconLinkRenderer;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIIcon, YTIScreenBasedVisibilityCondition, YTITabContentSupportedRenderers, YTITabFooterSupportedRenderers, YTITabHeaderSupportedRenderers, YTITabIndicatorSupportedRenderers, YTITabRendererPresentationStyle, YTITabRendererSelectionStyle, YTIThumbnailDetails;

@interface YTITabRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTITabContentSupportedRenderers *content; // @dynamic content;
@property(nonatomic) _Bool disableScrollingOutBrowseHeader; // @dynamic disableScrollingOutBrowseHeader;
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(retain, nonatomic) YTITabFooterSupportedRenderers *footer; // @dynamic footer;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasDisableScrollingOutBrowseHeader; // @dynamic hasDisableScrollingOutBrowseHeader;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIconText; // @dynamic hasIconText;
@property(nonatomic) _Bool hasIndicator; // @dynamic hasIndicator;
@property(nonatomic) _Bool hasPresentationStyle; // @dynamic hasPresentationStyle;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasSelectionStyle; // @dynamic hasSelectionStyle;
@property(nonatomic) _Bool hasTabIdentifier; // @dynamic hasTabIdentifier;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVisibilityCondition; // @dynamic hasVisibilityCondition;
@property(retain, nonatomic) YTITabHeaderSupportedRenderers *header; // @dynamic header;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *iconText; // @dynamic iconText;
@property(retain, nonatomic) YTITabIndicatorSupportedRenderers *indicator; // @dynamic indicator;
@property(retain, nonatomic) YTITabRendererPresentationStyle *presentationStyle; // @dynamic presentationStyle;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) YTITabRendererSelectionStyle *selectionStyle; // @dynamic selectionStyle;
@property(copy, nonatomic) NSString *tabIdentifier; // @dynamic tabIdentifier;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIScreenBasedVisibilityCondition *visibilityCondition; // @dynamic visibilityCondition;

@end


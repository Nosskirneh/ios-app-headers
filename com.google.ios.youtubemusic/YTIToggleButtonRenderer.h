//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIAccessibilityData, YTIAccessibilitySupportedDatas, YTIButtonColorSupportedDatas, YTICommand, YTIFormattedString, YTIIcon, YTIToggleButtonHintSupportedRenderers;

@interface YTIToggleButtonRenderer : GPBMessage
{
}

+ (id)descriptor;
- (id)likeServiceEndpointWithPlaylistID:(id)arg1 status:(int)arg2;
- (id)indifferentEndpointWithPlaylistId:(id)arg1;
- (id)likeEndpointWithPlaylistId:(id)arg1;
- (id)currentText;
- (_Bool)hasCurrentText;
- (id)currentServiceEndpoint;
- (id)currentIcon;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilityData *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibilityData; // @dynamic accessibilityData;
@property(retain, nonatomic) YTIButtonColorSupportedDatas *colorData; // @dynamic colorData;
@property(retain, nonatomic) YTIIcon *defaultIcon; // @dynamic defaultIcon;
@property(retain, nonatomic) YTICommand *defaultNavigationEndpoint; // @dynamic defaultNavigationEndpoint;
@property(retain, nonatomic) YTICommand *defaultServiceEndpoint; // @dynamic defaultServiceEndpoint;
@property(retain, nonatomic) YTIFormattedString *defaultText; // @dynamic defaultText;
@property(copy, nonatomic) NSString *defaultTooltip; // @dynamic defaultTooltip;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasAccessibilityData; // @dynamic hasAccessibilityData;
@property(nonatomic) _Bool hasColorData; // @dynamic hasColorData;
@property(nonatomic) _Bool hasDefaultIcon; // @dynamic hasDefaultIcon;
@property(nonatomic) _Bool hasDefaultNavigationEndpoint; // @dynamic hasDefaultNavigationEndpoint;
@property(nonatomic) _Bool hasDefaultServiceEndpoint; // @dynamic hasDefaultServiceEndpoint;
@property(nonatomic) _Bool hasDefaultText; // @dynamic hasDefaultText;
@property(nonatomic) _Bool hasDefaultTooltip; // @dynamic hasDefaultTooltip;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIsDisabled; // @dynamic hasIsDisabled;
@property(nonatomic) _Bool hasIsToggled; // @dynamic hasIsToggled;
@property(nonatomic) _Bool hasPreventAutoToggle; // @dynamic hasPreventAutoToggle;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasToggledAccessibilityData; // @dynamic hasToggledAccessibilityData;
@property(nonatomic) _Bool hasToggledIcon; // @dynamic hasToggledIcon;
@property(nonatomic) _Bool hasToggledServiceEndpoint; // @dynamic hasToggledServiceEndpoint;
@property(nonatomic) _Bool hasToggledText; // @dynamic hasToggledText;
@property(nonatomic) _Bool hasToggledTooltip; // @dynamic hasToggledTooltip;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIToggleButtonHintSupportedRenderers *hint; // @dynamic hint;
@property(nonatomic) _Bool isDisabled; // @dynamic isDisabled;
@property(nonatomic) _Bool isToggled; // @dynamic isToggled;
@property(nonatomic) _Bool preventAutoToggle; // @dynamic preventAutoToggle;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *toggledAccessibilityData; // @dynamic toggledAccessibilityData;
@property(retain, nonatomic) YTIIcon *toggledIcon; // @dynamic toggledIcon;
@property(retain, nonatomic) YTICommand *toggledServiceEndpoint; // @dynamic toggledServiceEndpoint;
@property(retain, nonatomic) YTIFormattedString *toggledText; // @dynamic toggledText;
@property(copy, nonatomic) NSString *toggledTooltip; // @dynamic toggledTooltip;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

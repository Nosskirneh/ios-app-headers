//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIAnalyticsDismissibleAlertRenderer_AnalyticsButton, YTIFormattedString;

@interface YTIAnalyticsDismissibleAlertRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMessageText; // @dynamic hasMessageText;
@property(nonatomic) _Bool hasPrimaryButton; // @dynamic hasPrimaryButton;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *messageText; // @dynamic messageText;
@property(retain, nonatomic) YTIAnalyticsDismissibleAlertRenderer_AnalyticsButton *primaryButton; // @dynamic primaryButton;
@property(retain, nonatomic) YTIAnalyticsDismissibleAlertRenderer_AnalyticsButton *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


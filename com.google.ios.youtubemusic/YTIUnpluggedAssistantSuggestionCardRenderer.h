//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIThumbnailDetails, YTIUnpluggedButtonSupportedRenderers, YTIUnpluggedSubscribeButtonSupportedRenderers;

@interface YTIUnpluggedAssistantSuggestionCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIUnpluggedButtonSupportedRenderers *bellFollowButton; // @dynamic bellFollowButton;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(retain, nonatomic) YTIFormattedString *callToAction; // @dynamic callToAction;
@property(copy, nonatomic) NSString *debugString; // @dynamic debugString;
@property(nonatomic) _Bool hasBellFollowButton; // @dynamic hasBellFollowButton;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasDebugString; // @dynamic hasDebugString;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNegativeButton; // @dynamic hasNegativeButton;
@property(nonatomic) _Bool hasPositiveButton; // @dynamic hasPositiveButton;
@property(nonatomic) _Bool hasPrimaryText; // @dynamic hasPrimaryText;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasSecondaryText; // @dynamic hasSecondaryText;
@property(nonatomic) _Bool hasSubscribeButton; // @dynamic hasSubscribeButton;
@property(nonatomic) _Bool hasTertiaryText; // @dynamic hasTertiaryText;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailNavigationEndpoint; // @dynamic hasThumbnailNavigationEndpoint;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTIUnpluggedButtonSupportedRenderers *negativeButton; // @dynamic negativeButton;
@property(retain, nonatomic) YTIUnpluggedButtonSupportedRenderers *positiveButton; // @dynamic positiveButton;
@property(retain, nonatomic) YTIFormattedString *primaryText; // @dynamic primaryText;
@property(retain, nonatomic) YTIFormattedString *reason; // @dynamic reason;
@property(retain, nonatomic) YTIFormattedString *secondaryText; // @dynamic secondaryText;
@property(retain, nonatomic) YTIUnpluggedSubscribeButtonSupportedRenderers *subscribeButton; // @dynamic subscribeButton;
@property(retain, nonatomic) YTIFormattedString *tertiaryText; // @dynamic tertiaryText;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTICommand *thumbnailNavigationEndpoint; // @dynamic thumbnailNavigationEndpoint;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end


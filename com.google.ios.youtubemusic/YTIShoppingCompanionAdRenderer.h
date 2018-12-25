//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer;

@interface YTIShoppingCompanionAdRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *actionText; // @dynamic actionText;
@property(retain, nonatomic) YTICommand *adChoicesDialogEndpoint; // @dynamic adChoicesDialogEndpoint;
@property(retain, nonatomic) YTICommand *adCompleteCommand; // @dynamic adCompleteCommand;
@property(retain, nonatomic) YTICommand *clickEndpoint; // @dynamic clickEndpoint;
@property(retain, nonatomic) YTIRenderer *companionExtension; // @dynamic companionExtension;
@property(nonatomic) int completionAction; // @dynamic completionAction;
@property(nonatomic) _Bool hasActionText; // @dynamic hasActionText;
@property(nonatomic) _Bool hasAdChoicesDialogEndpoint; // @dynamic hasAdChoicesDialogEndpoint;
@property(nonatomic) _Bool hasAdCompleteCommand; // @dynamic hasAdCompleteCommand;
@property(nonatomic) _Bool hasClickEndpoint; // @dynamic hasClickEndpoint;
@property(nonatomic) _Bool hasCompanionExtension; // @dynamic hasCompanionExtension;
@property(nonatomic) _Bool hasCompletionAction; // @dynamic hasCompletionAction;
@property(nonatomic) _Bool hasHideCompanionOnVideoCompletion; // @dynamic hasHideCompanionOnVideoCompletion;
@property(nonatomic) _Bool hasIsSponsored; // @dynamic hasIsSponsored;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasSponsoredText; // @dynamic hasSponsoredText;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUiTypeFlag; // @dynamic hasUiTypeFlag;
@property(nonatomic) _Bool hideCompanionOnVideoCompletion; // @dynamic hideCompanionOnVideoCompletion;
@property(retain, nonatomic) NSMutableArray *impressionCommandsArray; // @dynamic impressionCommandsArray;
@property(readonly, nonatomic) unsigned long long impressionCommandsArray_Count; // @dynamic impressionCommandsArray_Count;
@property(nonatomic) _Bool isSponsored; // @dynamic isSponsored;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) NSMutableArray *productsArray; // @dynamic productsArray;
@property(readonly, nonatomic) unsigned long long productsArray_Count; // @dynamic productsArray_Count;
@property(retain, nonatomic) YTIRenderer *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) YTIFormattedString *sponsoredText; // @dynamic sponsoredText;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(nonatomic) int uiTypeFlag; // @dynamic uiTypeFlag;

@end


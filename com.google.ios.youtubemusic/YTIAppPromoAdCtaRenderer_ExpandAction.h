//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonSupportedRenderers, YTIFormattedString;

@interface YTIAppPromoAdCtaRenderer_ExpandAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *action; // @dynamic action;
@property(nonatomic) unsigned int backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) int clickTargetMode; // @dynamic clickTargetMode;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasClickTargetMode; // @dynamic hasClickTargetMode;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasRating; // @dynamic hasRating;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) float rating; // @dynamic rating;
@property(nonatomic) unsigned int textColor; // @dynamic textColor;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;

@end


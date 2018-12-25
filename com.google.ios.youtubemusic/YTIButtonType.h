//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonTypeState, YTIDimensionEdges, YTIInkEffectParameters;

@interface YTIButtonType : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int buttonDirection; // @dynamic buttonDirection;
@property(retain, nonatomic) YTIDimensionEdges *contentEdgeInsets; // @dynamic contentEdgeInsets;
@property(nonatomic) float contentSpacing; // @dynamic contentSpacing;
@property(retain, nonatomic) YTIButtonTypeState *disabledState; // @dynamic disabledState;
@property(nonatomic) _Bool enableInkEffect; // @dynamic enableInkEffect;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasButtonDirection; // @dynamic hasButtonDirection;
@property(nonatomic) _Bool hasContentEdgeInsets; // @dynamic hasContentEdgeInsets;
@property(nonatomic) _Bool hasContentSpacing; // @dynamic hasContentSpacing;
@property(nonatomic) _Bool hasDisabledState; // @dynamic hasDisabledState;
@property(nonatomic) _Bool hasEnableInkEffect; // @dynamic hasEnableInkEffect;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasHighlightedState; // @dynamic hasHighlightedState;
@property(nonatomic) _Bool hasHorizontalAlignment; // @dynamic hasHorizontalAlignment;
@property(nonatomic) _Bool hasImageAlignment; // @dynamic hasImageAlignment;
@property(nonatomic) _Bool hasInkParameters; // @dynamic hasInkParameters;
@property(nonatomic) _Bool hasNormalState; // @dynamic hasNormalState;
@property(nonatomic) _Bool hasSelected; // @dynamic hasSelected;
@property(nonatomic) _Bool hasSelectedState; // @dynamic hasSelectedState;
@property(nonatomic) _Bool hasVerticalAlignment; // @dynamic hasVerticalAlignment;
@property(retain, nonatomic) YTIButtonTypeState *highlightedState; // @dynamic highlightedState;
@property(nonatomic) int horizontalAlignment; // @dynamic horizontalAlignment;
@property(nonatomic) int imageAlignment; // @dynamic imageAlignment;
@property(retain, nonatomic) YTIInkEffectParameters *inkParameters; // @dynamic inkParameters;
@property(retain, nonatomic) YTIButtonTypeState *normalState; // @dynamic normalState;
@property(nonatomic) _Bool selected; // @dynamic selected;
@property(retain, nonatomic) YTIButtonTypeState *selectedState; // @dynamic selectedState;
@property(nonatomic) int verticalAlignment; // @dynamic verticalAlignment;

@end


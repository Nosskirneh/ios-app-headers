//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonSupportedRenderers, YTIFormattedString;

@interface YTIPollEditorInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *addOptionButton; // @dynamic addOptionButton;
@property(nonatomic) _Bool hasAddOptionButton; // @dynamic hasAddOptionButton;
@property(nonatomic) _Bool hasMaxPollOptionChars; // @dynamic hasMaxPollOptionChars;
@property(nonatomic) _Bool hasMaxPollOptions; // @dynamic hasMaxPollOptions;
@property(nonatomic) _Bool hasMinPollOptionChars; // @dynamic hasMinPollOptionChars;
@property(nonatomic) _Bool hasMinPollOptions; // @dynamic hasMinPollOptions;
@property(nonatomic) _Bool hasOptionPlaceholderText; // @dynamic hasOptionPlaceholderText;
@property(nonatomic) int maxPollOptionChars; // @dynamic maxPollOptionChars;
@property(nonatomic) int maxPollOptions; // @dynamic maxPollOptions;
@property(nonatomic) int minPollOptionChars; // @dynamic minPollOptionChars;
@property(nonatomic) int minPollOptions; // @dynamic minPollOptions;
@property(retain, nonatomic) YTIFormattedString *optionPlaceholderText; // @dynamic optionPlaceholderText;

@end


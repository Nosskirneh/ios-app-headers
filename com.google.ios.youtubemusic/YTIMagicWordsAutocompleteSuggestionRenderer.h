//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIFormattedString, YTIThumbnailDetails;

@interface YTIMagicWordsAutocompleteSuggestionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *commandText; // @dynamic commandText;
@property(nonatomic) _Bool hasCommandText; // @dynamic hasCommandText;
@property(nonatomic) _Bool hasHelp; // @dynamic hasHelp;
@property(nonatomic) _Bool hasIconThumbnail; // @dynamic hasIconThumbnail;
@property(nonatomic) _Bool hasSuggestion; // @dynamic hasSuggestion;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIFormattedString *help; // @dynamic help;
@property(retain, nonatomic) YTIThumbnailDetails *iconThumbnail; // @dynamic iconThumbnail;
@property(retain, nonatomic) YTIFormattedString *suggestion; // @dynamic suggestion;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

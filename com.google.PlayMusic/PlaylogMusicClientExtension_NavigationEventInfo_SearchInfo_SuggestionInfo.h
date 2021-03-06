//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, PlaylogMusicClientExtension_Card;

@interface PlaylogMusicClientExtension_NavigationEventInfo_SearchInfo_SuggestionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PlaylogMusicClientExtension_Card *clickedCard; // @dynamic clickedCard;
@property(nonatomic) int entitySuggestionAction; // @dynamic entitySuggestionAction;
@property(nonatomic) _Bool hasClickedCard; // @dynamic hasClickedCard;
@property(nonatomic) _Bool hasEntitySuggestionAction; // @dynamic hasEntitySuggestionAction;
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasSuggestedQuery; // @dynamic hasSuggestedQuery;
@property(nonatomic) _Bool hasSuggestionCategory; // @dynamic hasSuggestionCategory;
@property(nonatomic) _Bool hasSuggestionPos; // @dynamic hasSuggestionPos;
@property(nonatomic) _Bool hasSuggestionSource; // @dynamic hasSuggestionSource;
@property(copy, nonatomic) NSString *originalQuery; // @dynamic originalQuery;
@property(copy, nonatomic) NSString *suggestedQuery; // @dynamic suggestedQuery;
@property(nonatomic) int suggestionCategory; // @dynamic suggestionCategory;
@property(nonatomic) int suggestionPos; // @dynamic suggestionPos;
@property(nonatomic) int suggestionSource; // @dynamic suggestionSource;

@end


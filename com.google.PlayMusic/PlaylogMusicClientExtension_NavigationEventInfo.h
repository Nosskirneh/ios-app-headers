//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class PlaylogMusicClientExtension_NavigationEventInfo_AppStartedInfo, PlaylogMusicClientExtension_NavigationEventInfo_CardClickedInfo, PlaylogMusicClientExtension_NavigationEventInfo_CardsImpressionInfo, PlaylogMusicClientExtension_NavigationEventInfo_SearchInfo;

@interface PlaylogMusicClientExtension_NavigationEventInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PlaylogMusicClientExtension_NavigationEventInfo_AppStartedInfo *appStartedInfo; // @dynamic appStartedInfo;
@property(retain, nonatomic) PlaylogMusicClientExtension_NavigationEventInfo_CardClickedInfo *cardClickedInfo; // @dynamic cardClickedInfo;
@property(retain, nonatomic) PlaylogMusicClientExtension_NavigationEventInfo_CardsImpressionInfo *cardsImpressionInfo; // @dynamic cardsImpressionInfo;
@property(nonatomic) _Bool hasAppStartedInfo; // @dynamic hasAppStartedInfo;
@property(nonatomic) _Bool hasCardClickedInfo; // @dynamic hasCardClickedInfo;
@property(nonatomic) _Bool hasCardsImpressionInfo; // @dynamic hasCardsImpressionInfo;
@property(nonatomic) _Bool hasNavigationEventType; // @dynamic hasNavigationEventType;
@property(nonatomic) _Bool hasSearchInfo; // @dynamic hasSearchInfo;
@property(nonatomic) int navigationEventType; // @dynamic navigationEventType;
@property(retain, nonatomic) PlaylogMusicClientExtension_NavigationEventInfo_SearchInfo *searchInfo; // @dynamic searchInfo;

@end


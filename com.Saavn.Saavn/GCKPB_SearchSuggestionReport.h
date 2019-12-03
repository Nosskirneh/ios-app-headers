//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSData, NSString;

@interface GCKPB_SearchSuggestionReport : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long clientLatencyMs; // @dynamic clientLatencyMs;
@property(nonatomic) _Bool hasClientLatencyMs; // @dynamic hasClientLatencyMs;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool hasResponseServerLogsCookie; // @dynamic hasResponseServerLogsCookie;
@property(nonatomic) _Bool hasResultCount; // @dynamic hasResultCount;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(nonatomic) _Bool hasSuggestedQuery; // @dynamic hasSuggestedQuery;
@property(nonatomic) _Bool hasSuggestionServerLogsCookie; // @dynamic hasSuggestionServerLogsCookie;
@property(retain, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) NSData *responseServerLogsCookie; // @dynamic responseServerLogsCookie;
@property(nonatomic) int resultCount; // @dynamic resultCount;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) NSString *suggestedQuery; // @dynamic suggestedQuery;
@property(retain, nonatomic) NSData *suggestionServerLogsCookie; // @dynamic suggestionServerLogsCookie;

@end

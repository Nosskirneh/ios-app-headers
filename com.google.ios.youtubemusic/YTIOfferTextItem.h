//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIOfferTextItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *endpoint; // @dynamic endpoint;
@property(nonatomic) _Bool hasEndpoint; // @dynamic hasEndpoint;
@property(nonatomic) _Bool hasShowSeparator; // @dynamic hasShowSeparator;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool showSeparator; // @dynamic showSeparator;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;

@end


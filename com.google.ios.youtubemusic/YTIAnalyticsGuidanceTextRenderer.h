//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIAnalyticsGuidanceTextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLinkNavigationEndpoint; // @dynamic hasLinkNavigationEndpoint;
@property(nonatomic) _Bool hasLinkText; // @dynamic hasLinkText;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) YTICommand *linkNavigationEndpoint; // @dynamic linkNavigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *linkText; // @dynamic linkText;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;

@end


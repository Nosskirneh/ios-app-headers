//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommand, YTIFormattedString;

@interface YTIDashboardAdditionalContentRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasViewMoreEndpoint; // @dynamic hasViewMoreEndpoint;
@property(nonatomic) _Bool hasViewMoreText; // @dynamic hasViewMoreText;
@property(retain, nonatomic) YTICommand *viewMoreEndpoint; // @dynamic viewMoreEndpoint;
@property(retain, nonatomic) YTIFormattedString *viewMoreText; // @dynamic viewMoreText;

@end


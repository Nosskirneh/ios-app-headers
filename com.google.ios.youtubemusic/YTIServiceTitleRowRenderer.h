//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTIServiceTitleRowRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *basicText; // @dynamic basicText;
@property(nonatomic) _Bool hasBasicText; // @dynamic hasBasicText;
@property(nonatomic) _Bool hasPremiumSubtitleText; // @dynamic hasPremiumSubtitleText;
@property(nonatomic) _Bool hasPremiumText; // @dynamic hasPremiumText;
@property(retain, nonatomic) YTIFormattedString *premiumSubtitleText; // @dynamic premiumSubtitleText;
@property(retain, nonatomic) YTIFormattedString *premiumText; // @dynamic premiumText;

@end


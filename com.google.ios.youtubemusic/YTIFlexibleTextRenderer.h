//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFlexibleTextStyle, YTIFormattedString;

@interface YTIFlexibleTextRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int alignment; // @dynamic alignment;
@property(retain, nonatomic) YTIFormattedString *formattedString; // @dynamic formattedString;
@property(nonatomic) _Bool hasAlignment; // @dynamic hasAlignment;
@property(nonatomic) _Bool hasFormattedString; // @dynamic hasFormattedString;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(retain, nonatomic) YTIFlexibleTextStyle *style; // @dynamic style;

@end


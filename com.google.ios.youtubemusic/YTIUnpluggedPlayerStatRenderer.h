//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTINamedValue;

@interface YTIUnpluggedPlayerStatRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStatName; // @dynamic hasStatName;
@property(nonatomic) _Bool hasStatValue; // @dynamic hasStatValue;
@property(retain, nonatomic) YTIFormattedString *statName; // @dynamic statName;
@property(retain, nonatomic) YTINamedValue *statValue; // @dynamic statValue;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTINotificationSectionHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int endTimestampSecs; // @dynamic endTimestampSecs;
@property(nonatomic) _Bool hasEndTimestampSecs; // @dynamic hasEndTimestampSecs;
@property(nonatomic) _Bool hasStartTimestampSecs; // @dynamic hasStartTimestampSecs;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) int startTimestampSecs; // @dynamic startTimestampSecs;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end


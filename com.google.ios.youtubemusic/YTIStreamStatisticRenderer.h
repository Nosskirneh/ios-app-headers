//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString, YTIIcon;

@interface YTIStreamStatisticRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIFormattedString *name; // @dynamic name;
@property(retain, nonatomic) YTIFormattedString *value; // @dynamic value;

@end


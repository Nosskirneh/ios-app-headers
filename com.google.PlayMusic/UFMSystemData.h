//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UFMTelephonyData;

@interface UFMSystemData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSystemLog; // @dynamic hasSystemLog;
@property(nonatomic) _Bool hasTelephonyData; // @dynamic hasTelephonyData;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(copy, nonatomic) NSString *systemLog; // @dynamic systemLog;
@property(retain, nonatomic) UFMTelephonyData *telephonyData; // @dynamic telephonyData;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface BatchedLogRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enablePerRequestStatus; // @dynamic enablePerRequestStatus;
@property(nonatomic) _Bool hasEnablePerRequestStatus; // @dynamic hasEnablePerRequestStatus;
@property(nonatomic) _Bool hasInDirectBootMode; // @dynamic hasInDirectBootMode;
@property(nonatomic) _Bool hasLastZwiebackResetWallTimeMs; // @dynamic hasLastZwiebackResetWallTimeMs;
@property(nonatomic) _Bool inDirectBootMode; // @dynamic inDirectBootMode;
@property(nonatomic) long long lastZwiebackResetWallTimeMs; // @dynamic lastZwiebackResetWallTimeMs;
@property(retain, nonatomic) NSMutableArray *logRequestArray; // @dynamic logRequestArray;
@property(readonly, nonatomic) unsigned long long logRequestArray_Count; // @dynamic logRequestArray_Count;

@end


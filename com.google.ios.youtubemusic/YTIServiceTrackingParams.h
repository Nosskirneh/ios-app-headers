//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIServiceTrackingParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasService; // @dynamic hasService;
@property(retain, nonatomic) NSMutableArray *paramsArray; // @dynamic paramsArray;
@property(readonly, nonatomic) unsigned long long paramsArray_Count; // @dynamic paramsArray_Count;
@property(nonatomic) int service; // @dynamic service;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIUnpluggedUpdateLiveGuideOrderRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *externalIdsArray; // @dynamic externalIdsArray;
@property(readonly, nonatomic) unsigned long long externalIdsArray_Count; // @dynamic externalIdsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(copy, nonatomic) NSString *params; // @dynamic params;

@end

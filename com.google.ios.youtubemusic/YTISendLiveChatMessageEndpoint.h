//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface YTISendLiveChatMessageEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(copy, nonatomic) NSString *clientIdPrefix; // @dynamic clientIdPrefix;
@property(nonatomic) _Bool hasClientIdPrefix; // @dynamic hasClientIdPrefix;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(copy, nonatomic) NSData *params; // @dynamic params;

@end


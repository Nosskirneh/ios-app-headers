//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIResponseContext;

@interface YTIGetUnseenNotificationCountResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasUnseenCount; // @dynamic hasUnseenCount;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(nonatomic) unsigned int unseenCount; // @dynamic unseenCount;

@end


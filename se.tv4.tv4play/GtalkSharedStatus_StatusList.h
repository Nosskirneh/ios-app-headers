//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray;

@interface GtalkSharedStatus_StatusList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasShow; // @dynamic hasShow;
@property(nonatomic) int show; // @dynamic show;
@property(retain, nonatomic) NSMutableArray *statusArray; // @dynamic statusArray;
@property(readonly, nonatomic) unsigned long long statusArray_Count; // @dynamic statusArray_Count;

@end


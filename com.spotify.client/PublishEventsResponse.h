//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface PublishEventsResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *nackIdArray; // @dynamic nackIdArray;
@property(readonly, nonatomic) unsigned long long nackIdArray_Count; // @dynamic nackIdArray_Count;

@end

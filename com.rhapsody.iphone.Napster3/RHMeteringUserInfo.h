//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "RHMeteringUserInfoProtocol-Protocol.h"

@class NSString;
@protocol RHMeteringEventProtocol;

@interface RHMeteringUserInfo : NSManagedObject <RHMeteringUserInfoProtocol>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <RHMeteringEventProtocol> events; // @dynamic events;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;
@end


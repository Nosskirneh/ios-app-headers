//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface YTIEntityKey : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *entityId; // @dynamic entityId;
@property(nonatomic) int entityIdNamespace; // @dynamic entityIdNamespace;
@property(nonatomic) long long entityType; // @dynamic entityType;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasEntityIdNamespace; // @dynamic hasEntityIdNamespace;
@property(nonatomic) _Bool hasEntityType; // @dynamic hasEntityType;

@end


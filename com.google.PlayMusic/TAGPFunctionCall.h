//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPBMutableArray;

__attribute__((visibility("hidden")))
@interface TAGPFunctionCall : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int function; // @dynamic function;
@property(nonatomic) _Bool hasFunction; // @dynamic hasFunction;
@property(nonatomic) _Bool hasLiveOnly; // @dynamic hasLiveOnly;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPropertyArray; // @dynamic hasPropertyArray;
@property(nonatomic) _Bool hasServerSide; // @dynamic hasServerSide;
@property(nonatomic) _Bool liveOnly; // @dynamic liveOnly;
@property(nonatomic) int name; // @dynamic name;
@property(retain, nonatomic) TAGPBMutableArray *propertyArray; // @dynamic propertyArray;
@property(nonatomic) _Bool serverSide; // @dynamic serverSide;

@end


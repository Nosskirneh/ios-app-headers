//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TAGPBGeneratedMessage.h"

@class TAGPBMutableArray;

@interface TAGPBServiceOptions : TAGPBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool deprecated; // @dynamic deprecated;
@property(nonatomic) double failureDetectionDelay; // @dynamic failureDetectionDelay;
@property(nonatomic) _Bool hasDeprecated; // @dynamic hasDeprecated;
@property(nonatomic) _Bool hasFailureDetectionDelay; // @dynamic hasFailureDetectionDelay;
@property(nonatomic) _Bool hasMulticastStub; // @dynamic hasMulticastStub;
@property(nonatomic) _Bool hasUninterpretedOptionArray; // @dynamic hasUninterpretedOptionArray;
@property(nonatomic) _Bool multicastStub; // @dynamic multicastStub;
@property(retain, nonatomic) TAGPBMutableArray *uninterpretedOptionArray; // @dynamic uninterpretedOptionArray;

@end


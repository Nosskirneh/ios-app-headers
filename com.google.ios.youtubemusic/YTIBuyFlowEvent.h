//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIBuyFlowEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;
@property(nonatomic) _Bool hasIsRenewal; // @dynamic hasIsRenewal;
@property(nonatomic) _Bool hasIsRetry; // @dynamic hasIsRetry;
@property(nonatomic) _Bool hasProductId; // @dynamic hasProductId;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool isRenewal; // @dynamic isRenewal;
@property(nonatomic) _Bool isRetry; // @dynamic isRetry;
@property(copy, nonatomic) NSString *productId; // @dynamic productId;
@property(nonatomic) int type; // @dynamic type;

@end


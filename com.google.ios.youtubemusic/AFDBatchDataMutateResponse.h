//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AFDBatchDataResponseHeader, AFDMutateDataResponseWithError;

@interface AFDBatchDataMutateResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasMutateDataResponseWithError; // @dynamic hasMutateDataResponseWithError;
@property(retain, nonatomic) AFDBatchDataResponseHeader *header; // @dynamic header;
@property(retain, nonatomic) AFDMutateDataResponseWithError *mutateDataResponseWithError; // @dynamic mutateDataResponseWithError;

@end

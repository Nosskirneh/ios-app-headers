//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

__attribute__((visibility("hidden")))
@interface GCKPB_MdnsResponseParseError : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponseErrorCode; // @dynamic hasResponseErrorCode;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) int responseErrorCode; // @dynamic responseErrorCode;
@property(nonatomic) int sequenceNumber; // @dynamic sequenceNumber;

@end


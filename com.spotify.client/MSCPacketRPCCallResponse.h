//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCBasePacket.h"

@class NSData, NSString;

@interface MSCPacketRPCCallResponse : MSCBasePacket
{
    unsigned char _responseCode;
    unsigned int _referenceId;
    NSString *_returnType;
    NSData *_returnValue;
}

@property(retain) NSData *returnValue; // @synthesize returnValue=_returnValue;
@property(retain) NSString *returnType; // @synthesize returnType=_returnType;
@property unsigned char responseCode; // @synthesize responseCode=_responseCode;
@property unsigned int referenceId; // @synthesize referenceId=_referenceId;
- (void).cxx_destruct;

@end


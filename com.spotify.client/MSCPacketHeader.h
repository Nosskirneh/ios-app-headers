//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MSCPacketHeader : NSObject
{
    unsigned char _packetType;
    unsigned int _flags;
    unsigned int _payloadSize;
}

@property unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property unsigned int flags; // @synthesize flags=_flags;
@property unsigned char packetType; // @synthesize packetType=_packetType;

@end


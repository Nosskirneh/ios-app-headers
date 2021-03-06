//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHRingBuffer.h"

@interface RHPacketRingBuffer : RHRingBuffer
{
    unsigned long long _numPackets;
}

- (void)readPackets:(struct AudioStreamPacketDescription *)arg1 numPackets:(unsigned long long *)arg2 audioData:(char *)arg3 audioDataSize:(unsigned int *)arg4;
- (void)appendPackets:(struct AudioStreamPacketDescription *)arg1 numPackets:(unsigned long long *)arg2 audioData:(const char *)arg3;
- (id)initWithNumPackets:(unsigned long long)arg1 maxPacketSize:(unsigned int)arg2;
@property(readonly) struct AudioStreamPacketDescription nextPacket;
@property(readonly) unsigned long long numPacketsAvailable;

@end


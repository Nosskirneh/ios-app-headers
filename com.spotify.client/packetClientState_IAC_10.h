//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePacket.h"

@interface packetClientState_IAC_10 : BasePacket
{
    unsigned char _stateType;
    unsigned char _value;
}

@property unsigned char value; // @synthesize value=_value;
@property unsigned char stateType; // @synthesize stateType=_stateType;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end


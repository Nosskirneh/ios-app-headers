//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePacket.h"

@interface packetAudioTypeResult_IAC_10 : BasePacket
{
    unsigned char _status;
    unsigned char _resultCode;
    unsigned int _requestID;
}

@property unsigned char resultCode; // @synthesize resultCode=_resultCode;
@property unsigned char status; // @synthesize status=_status;
@property unsigned int requestID; // @synthesize requestID=_requestID;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end


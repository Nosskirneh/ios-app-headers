//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePacket.h"

@class Version_IAC_10;

@interface packetInitAcknowledge_IAC_10 : BasePacket
{
    unsigned char _isAcknowledged;
    Version_IAC_10 *_appSdkVersion;
}

@property(retain) Version_IAC_10 *appSdkVersion; // @synthesize appSdkVersion=_appSdkVersion;
@property unsigned char isAcknowledged; // @synthesize isAcknowledged=_isAcknowledged;
- (void).cxx_destruct;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end


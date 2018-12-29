//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOutputStream.h>

@class NSError;
@protocol LKZChannelOutput;

@interface LKZDeflateOutputStream : NSOutputStream
{
    id <LKZChannelOutput> _channelOutput;
    unsigned long long _compressionLevel;
    unsigned long long _status;
    NSError *_error;
    unsigned int _crc32;
    struct z_stream_s _stream;
}

@property(readonly, nonatomic) unsigned int crc32; // @synthesize crc32=_crc32;
- (void).cxx_destruct;
- (_Bool)hasSpaceAvailable;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)close;
- (void)open;
- (id)streamError;
- (unsigned long long)streamStatus;
@property(readonly, nonatomic) unsigned int uncompressedSize;
@property(readonly, nonatomic) unsigned int compressedSize;
- (id)initWithChannelOutput:(id)arg1 compressionLevel:(unsigned long long)arg2;

@end


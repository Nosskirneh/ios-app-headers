//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCDWebServerBodyDecoder.h"

@interface GCDWebServerGZipDecoder : GCDWebServerBodyDecoder
{
    struct z_stream_s _stream;
    _Bool _finished;
}

- (_Bool)close:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (_Bool)open:(id *)arg1;

@end


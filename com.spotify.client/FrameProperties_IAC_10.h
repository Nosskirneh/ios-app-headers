//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FrameProperties_IAC_10 : NSObject
{
    unsigned char _format;
    unsigned char _endianess;
    unsigned char _bytesPerPixel;
    unsigned int _compression;
}

@property unsigned char bytesPerPixel; // @synthesize bytesPerPixel=_bytesPerPixel;
@property unsigned int compression; // @synthesize compression=_compression;
@property unsigned char endianess; // @synthesize endianess=_endianess;
@property unsigned char format; // @synthesize format=_format;
- (void *)writeToBuffer:(void *)arg1;
- (void)readFromBuffer:(void **)arg1;
- (unsigned long long)size;
- (id)init;

@end


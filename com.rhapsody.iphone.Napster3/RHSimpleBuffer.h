//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RHSimpleBuffer : NSObject
{
    void *_bytes;
    unsigned long long _length;
    unsigned long long _byteOffset;
}

@property(nonatomic) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
@property(readonly) unsigned long long length; // @synthesize length=_length;
@property(readonly) void *bytes; // @synthesize bytes=_bytes;
- (void)appendData:(id)arg1;
- (void)clear;
- (void)setLength:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 ofLength:(unsigned long long)arg2;
- (id)init;

@end

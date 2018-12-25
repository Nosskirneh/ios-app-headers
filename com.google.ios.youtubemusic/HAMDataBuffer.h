//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HAMDataBuffer : NSObject
{
    struct OpaqueCMBlockBuffer *_blockBuffer;
    char *_mutableBytes;
    const char *_bytes;
    long long _length;
    long long _capacity;
}

+ (id)bufferWithContentsOfResource:(id)arg1 ofType:(id)arg2;
+ (id)bufferWithData:(id)arg1;
+ (id)bufferWithCapacity:(long long)arg1;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) long long length; // @synthesize length=_length;
@property(readonly, nonatomic) struct OpaqueCMBlockBuffer *blockBuffer; // @synthesize blockBuffer=_blockBuffer;
@property(readonly, nonatomic) const char *bytes; // @synthesize bytes=_bytes;
- (id)stringValue;
- (id)dataWithRange:(struct _NSRange)arg1;
- (void)appendData:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(long long)arg1;

@end


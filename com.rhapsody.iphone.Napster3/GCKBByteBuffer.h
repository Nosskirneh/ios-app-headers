//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKBByteBuffer : NSObject
{
    char *_buffer;
    unsigned long long _capacity;
    unsigned long long _limit;
    unsigned long long _position;
}

@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void)bumpPositionBy:(unsigned long long)arg1;
- (void)clear;
- (void)flip;
@property(readonly, nonatomic) unsigned long long available;
@property(readonly, nonatomic) const char *pointer;
@property(readonly, nonatomic) char *mutablePointer;
@property(readonly, nonatomic) const char *bytes;
@property(readonly, nonatomic) char *mutableBytes;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end


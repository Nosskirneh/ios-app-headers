//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASCGImageBuffer : NSObject
{
    _Bool _createdData;
    _Bool _isVM;
    unsigned long long _length;
    void *_mutableBytes;
}

+ (void)deallocateBuffer:(void *)arg1 length:(unsigned long long)arg2 isVM:(_Bool)arg3;
@property(readonly) void *mutableBytes; // @synthesize mutableBytes=_mutableBytes;
- (struct CGDataProvider *)createDataProviderAndInvalidate;
- (void)dealloc;
- (id)initWithLength:(unsigned long long)arg1;

@end


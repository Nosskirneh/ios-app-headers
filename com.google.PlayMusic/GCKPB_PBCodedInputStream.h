//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GCKPB_PBCodedInputStream : NSObject
{
    NSData *buffer_;
    struct PBInputBufferState state_;
    int lastTag_;
    unsigned long long recursionDepth_;
}

+ (id)streamWithData:(id)arg1;
- (_Bool)isAtEnd;
- (unsigned long long)bytesUntilLimit;
- (void)popLimit:(unsigned long long)arg1;
- (unsigned long long)pushLimit:(unsigned long long)arg1;
- (long long)readSInt64;
- (int)readSInt32;
- (long long)readSFixed64;
- (int)readSFixed32;
- (int)readEnum;
- (unsigned int)readUInt32;
- (id)readData;
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;
- (void)readUnknownGroup:(int)arg1 builder:(id)arg2;
- (void)readGroup:(int)arg1 builder:(id)arg2 extensionRegistry:(id)arg3;
- (id)readString;
- (_Bool)readBool;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (int)readInt32;
- (long long)readInt64;
- (unsigned long long)readUInt64;
- (float)readFloat;
- (double)readDouble;
- (void)skipMessage;
- (_Bool)skipField:(int)arg1;
- (void)checkLastTagWas:(int)arg1;
- (int)readTag;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end


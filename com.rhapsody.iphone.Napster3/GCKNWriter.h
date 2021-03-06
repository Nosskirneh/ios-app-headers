//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKNWriter : NSObject
{
    long long _byteOrder;
}

@property(nonatomic) long long byteOrder; // @synthesize byteOrder=_byteOrder;
- (_Bool)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)writeData:(id)arg1;
- (_Bool)writeUInt64:(unsigned long long)arg1;
- (_Bool)writeUInt32:(unsigned int)arg1;
- (_Bool)writeUInt16:(unsigned short)arg1;
- (_Bool)writeUInt8:(unsigned char)arg1;
- (id)initWithByteOrder:(long long)arg1;

@end


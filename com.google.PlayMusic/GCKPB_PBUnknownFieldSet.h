//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

__attribute__((visibility("hidden")))
@interface GCKPB_PBUnknownFieldSet : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *fields_;
}

+ (_Bool)isFieldTag:(int)arg1;
- (void)getTags:(int *)arg1;
- (id)sortedFields;
- (void)mergeFromCodedInputStream:(id)arg1;
- (void)mergeMessageSetMessage:(int)arg1 data:(id)arg2;
- (_Bool)mergeFieldFrom:(int)arg1 input:(id)arg2;
- (void)mergeVarintField:(int)arg1 value:(int)arg2;
- (void)mergeFromData:(id)arg1;
- (void)mergeUnknownFields:(id)arg1;
- (void)mergeField:(id)arg1;
- (id)getFieldBuilder:(int)arg1 create:(_Bool)arg2;
- (void)addField:(id)arg1;
- (id)data;
- (unsigned long long)serializedSizeAsMessageSet;
- (void)writeAsMessageSetTo:(id)arg1;
- (unsigned long long)serializedSize;
- (id)description;
- (void)writeToCodedOutputStream:(id)arg1;
- (unsigned long long)countOfFields;
- (id)getField:(int)arg1;
- (_Bool)hasField:(int)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFields:(struct __CFDictionary *)arg1;

@end


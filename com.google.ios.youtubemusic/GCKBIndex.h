//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface GCKBIndex : NSObject <NSCopying>
{
    unsigned long long _value;
}

@property(nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithValue:(unsigned long long)arg1;
- (id)init;

@end

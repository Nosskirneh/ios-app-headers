//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMWEOCObject.h"

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface BMWEOCCustom : BMWEOCObject <NSCopying>
{
    NSDictionary *_value;
    NSString *_name;
}

@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSDictionary *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)object;
- (id)getCustomForName:(id)arg1 customClass:(Class)arg2 context:(id)arg3 error:(id *)arg4;
- (id)getObjectForName:(id)arg1 nativeClass:(Class)arg2 context:(id)arg3 error:(id *)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithValue:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;
@protocol NSObject><NSSecureCoding;

@interface GRWFlag : NSObject <NSSecureCoding>
{
    NSString *_name;
    unsigned long long _type;
    id <NSObject><NSSecureCoding> _value;
}

+ (unsigned long long)flagTypeFromValue:(id)arg1;
+ (id)flagWithName:(id)arg1 value:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <NSObject><NSSecureCoding> value; // @synthesize value=_value;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToFlag:(id)arg1;
- (id)flagTypeAsString;
- (id)initWithFlagName:(id)arg1 flagValue:(id)arg2 flagType:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;

@end

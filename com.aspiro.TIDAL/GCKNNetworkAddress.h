//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface GCKNNetworkAddress : NSObject <NSCopying, NSCoding>
{
    long long _type;
    NSString *_ipAddress;
}

+ (id)addressWithIPv4Address:(id)arg1;
+ (id)loopbackAddressOfType:(long long)arg1;
+ (id)wildcardAddressOfType:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)addressData;
- (id)initWithType:(long long)arg1 addressData:(id)arg2;
- (id)initWithType:(long long)arg1 ipAddress:(id)arg2;

@end


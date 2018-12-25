//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;

@interface FCDRPCLog : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _payloadLatency;
    int _httpReturnStatus;
    unsigned long long _payloadSizeSent;
    unsigned long long _payloadSizeReceived;
    NSString *_rpcID;
    NSString *_hostname;
    unsigned long long _methodType;
}

@property(nonatomic) unsigned long long methodType; // @synthesize methodType=_methodType;
@property(copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(copy, nonatomic) NSString *rpcID; // @synthesize rpcID=_rpcID;
@property(nonatomic) int httpReturnStatus; // @synthesize httpReturnStatus=_httpReturnStatus;
@property(nonatomic) unsigned int payloadLatency; // @synthesize payloadLatency=_payloadLatency;
@property(nonatomic) unsigned long long payloadSizeReceived; // @synthesize payloadSizeReceived=_payloadSizeReceived;
@property(nonatomic) unsigned long long payloadSizeSent; // @synthesize payloadSizeSent=_payloadSizeSent;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (unsigned long long)hash;
- (_Bool)isEqualToRPCLog:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithRPCLog:(id)arg1;

@end


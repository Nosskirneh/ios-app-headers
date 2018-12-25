//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GCKMDNSResponse, NSSet, NSString;

@interface GCKMDNSService : NSObject <NSCopying>
{
    _Bool _published;
    NSString *_instanceName;
    NSString *_type;
    GCKMDNSResponse *_response;
}

@property(nonatomic) _Bool published; // @synthesize published=_published;
@property(retain, nonatomic) GCKMDNSResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *instanceName; // @synthesize instanceName=_instanceName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)attributeForKey:(id)arg1;
@property(readonly, copy, nonatomic) NSString *hostName;
@property(readonly, nonatomic) unsigned short port;
- (id)socketAddressForType:(long long)arg1;
- (id)networkAddressForType:(long long)arg1;
- (id)ipAddressForType:(long long)arg1;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) long long weight;
@property(readonly, nonatomic) unsigned long long networkProtocol;
@property(readonly, copy, nonatomic) NSSet *subtypes;
- (unsigned long long)updateWithResponse:(id)arg1 currentTime:(long long)arg2 subtypesAdded:(id)arg3 subtypesRemoved:(id)arg4 recordsNeedingRefresh:(id)arg5;
- (id)initWithType:(id)arg1 instanceName:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface ADJAttribution : NSObject <NSCoding, NSCopying>
{
    NSString *_trackerToken;
    NSString *_trackerName;
    NSString *_network;
    NSString *_campaign;
    NSString *_adgroup;
    NSString *_creative;
    NSString *_clickLabel;
    NSString *_adid;
}

+ (id)dataWithJsonDict:(id)arg1 adid:(id)arg2;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *clickLabel; // @synthesize clickLabel=_clickLabel;
@property(copy, nonatomic) NSString *creative; // @synthesize creative=_creative;
@property(copy, nonatomic) NSString *adgroup; // @synthesize adgroup=_adgroup;
@property(copy, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(copy, nonatomic) NSString *network; // @synthesize network=_network;
@property(copy, nonatomic) NSString *trackerName; // @synthesize trackerName=_trackerName;
@property(copy, nonatomic) NSString *trackerToken; // @synthesize trackerToken=_trackerToken;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)dictionary;
- (_Bool)isEqualToAttribution:(id)arg1;
- (id)initWithJsonDict:(id)arg1 adid:(id)arg2;

@end


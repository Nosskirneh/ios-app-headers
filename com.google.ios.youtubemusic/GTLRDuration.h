//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface GTLRDuration : NSObject <NSCopying>
{
    int _nanos;
    long long _seconds;
    NSString *_jsonString;
}

+ (id)durationWithTimeInterval:(double)arg1;
+ (id)durationWithJSONString:(id)arg1;
+ (id)durationWithSeconds:(long long)arg1 nanos:(int)arg2;
@property(readonly, nonatomic) NSString *jsonString; // @synthesize jsonString=_jsonString;
@property(readonly, nonatomic) int nanos; // @synthesize nanos=_nanos;
@property(readonly, nonatomic) long long seconds; // @synthesize seconds=_seconds;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double timeInterval; // @dynamic timeInterval;
- (id)initWithSeconds:(long long)arg1 nanos:(int)arg2 jsonString:(id)arg3;
- (id)init;

@end


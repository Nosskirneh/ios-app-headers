//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTNetworkRetryConfig : NSObject
{
    unsigned long long _maxRetryCount;
    double _maxRetryInterval;
}

@property(readonly, nonatomic) double maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
@property(readonly, nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (id)init;
- (id)initWithMaxRetryInterval:(double)arg1;
- (id)initWithMaxRetryCount:(unsigned long long)arg1;
- (id)initWithMaxRetryCount:(unsigned long long)arg1 maxRetryInterval:(double)arg2;

@end


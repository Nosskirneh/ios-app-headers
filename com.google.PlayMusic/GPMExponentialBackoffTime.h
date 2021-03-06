//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface GPMExponentialBackoffTime : NSObject
{
    double _retryInterval;
    double _exponent;
    NSDate *_deadline;
}

+ (id)backoffWithInitialRetryInterval:(double)arg1 exponent:(double)arg2 deadlineSinceNow:(double)arg3;
+ (id)backoffWithInitialRetryInterval:(double)arg1 exponent:(double)arg2 deadline:(id)arg3;
- (void).cxx_destruct;
- (double)nextRetryInterval;
@property(readonly, nonatomic, getter=isDeadlineExceeded) _Bool deadlineExceeded;
- (id)initWithInitialRetryInterval:(double)arg1 exponent:(double)arg2 deadline:(id)arg3;

@end


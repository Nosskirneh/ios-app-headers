//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface YTRetry : NSObject
{
    double _granularity;
    unsigned long long _maxRetries;
    unsigned long long _numRetries;
    CDUnknownBlockType _retryBlock;
    NSTimer *_retryTimer;
}

- (void).cxx_destruct;
- (void)retryTimerFired:(id)arg1;
- (unsigned long long)numRetriesRemaining;
- (void)reset;
- (void)retryBlock:(CDUnknownBlockType)arg1;
- (id)initWithMaxRetries:(unsigned long long)arg1 granularity:(double)arg2;

@end


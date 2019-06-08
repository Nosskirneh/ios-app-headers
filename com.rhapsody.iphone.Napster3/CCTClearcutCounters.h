//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol CCTClockProtocol;

@interface CCTClearcutCounters : NSObject
{
    NSMutableArray *_counters;
    id <CCTClockProtocol> _clock;
}

- (void).cxx_destruct;
- (id)descriptionForAllCountersWithName:(id)arg1;
- (id)countersProtoWithDimension:(id)arg1;
- (id)counterProtoNamed:(unsigned long long)arg1 dimension:(id)arg2;
- (id)bucketProtoWithBucketKey:(long long)arg1 nameHash:(unsigned long long)arg2 serializedDimension:(id)arg3;
- (id)countersProtosAndReset:(_Bool)arg1;
- (void)incrementCounterWithName:(id)arg1 dimension:(id)arg2 bucket:(long long)arg3 amount:(long long)arg4;
- (void)reset;
- (id)initWithClock:(id)arg1;
- (id)init;

@end


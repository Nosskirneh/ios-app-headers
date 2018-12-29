//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACSequence.h"

@class NSData;

@interface RACIndexSetSequence : RACSequence
{
    NSData *_data;
    const unsigned long long *_indexes;
    unsigned long long _count;
}

+ (id)sequenceWithIndexSetSequence:(id)arg1 offset:(unsigned long long)arg2;
+ (id)sequenceWithIndexSet:(id)arg1;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) const unsigned long long *indexes; // @synthesize indexes=_indexes;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)tail;
- (id)head;

@end

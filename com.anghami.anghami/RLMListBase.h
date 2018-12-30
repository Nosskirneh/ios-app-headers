//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSFastEnumeration-Protocol.h"

@class RLMArray;

@interface RLMListBase : NSObject <NSFastEnumeration>
{
    struct unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo>> _observationInfo;
    RLMArray *__rlmArray;
}

@property(retain, nonatomic) RLMArray *_rlmArray; // @synthesize _rlmArray=__rlmArray;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)valueForKey:(id)arg1;
- (id)initWithArray:(id)arg1;

@end


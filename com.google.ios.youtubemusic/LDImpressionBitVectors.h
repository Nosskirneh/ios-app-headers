//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface LDImpressionBitVectors : NSObject
{
    NSMutableSet *_instantaneousStateVector;
    NSMutableDictionary *_impressionCountingVector;
}

+ (int)cumulativeStateVectorBitValue:(id)arg1;
+ (int)impressionCountingVectorBitValue:(id)arg1;
+ (int)instantaneousStateVectorBitValue:(id)arg1;
+ (id)cumulativeStateVectorBits;
+ (id)impressionCountingVectorBits;
+ (id)instantaneousStateVectorBits;
@property(copy, nonatomic) NSMutableDictionary *impressionCountingVector; // @synthesize impressionCountingVector=_impressionCountingVector;
@property(retain, nonatomic) NSMutableSet *instantaneousStateVector; // @synthesize instantaneousStateVector=_instantaneousStateVector;
- (void).cxx_destruct;
- (int)generateCumulativeStateBitVector;
- (int)generateImpressionCountingBitVector;
- (int)generateInstantaneousStateBitVector;
- (void)setBit:(int)arg1;
- (void)clearInstantaneousState;
- (id)init;

@end

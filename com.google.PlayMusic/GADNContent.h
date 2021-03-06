//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNBinaryHeap, NSString;

@interface GADNContent : NSObject
{
    long long _contentAgeWeight;
    long long _contentLengthWeight;
    long long _contentTotalLength;
    GADNBinaryHeap *_heap;
    long long _maximumShingleCount;
    unsigned long long _minimumParagraphLength;
    unsigned long long _shingleLength;
    NSString *_fingerprint;
    long long _score;
    long long _sequenceNumber;
}

@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) long long score; // @synthesize score=_score;
@property(readonly, nonatomic) NSString *fingerprint; // @synthesize fingerprint=_fingerprint;
- (void).cxx_destruct;
- (id)shingleHash;
- (void)updateHeapWithHash:(unsigned int)arg1 shingle:(id)arg2;
- (void)applyRollingHashToTokens:(id)arg1 baseHash:(unsigned int)arg2;
- (void)selectShinglesFromTokens:(id)arg1;
- (void)updateContentWithText:(id)arg1;
- (void)deductServedPenalty;
- (id)initWithSequenceNumber:(long long)arg1;
- (id)init;

@end


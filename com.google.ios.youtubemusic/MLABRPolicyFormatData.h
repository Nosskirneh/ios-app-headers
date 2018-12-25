//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLFormat, NSError;
@protocol HAMMediaChunkIndex;

@interface MLABRPolicyFormatData : NSObject
{
    int _consecutiveErrorCount;
    MLFormat *_format;
    id <HAMMediaChunkIndex> _index;
    double _lastStunTime;
    NSError *_lastStunError;
}

@property(readonly, nonatomic) NSError *lastStunError; // @synthesize lastStunError=_lastStunError;
@property(readonly, nonatomic) double lastStunTime; // @synthesize lastStunTime=_lastStunTime;
@property(readonly, nonatomic) int consecutiveErrorCount; // @synthesize consecutiveErrorCount=_consecutiveErrorCount;
@property(retain, nonatomic) id <HAMMediaChunkIndex> index; // @synthesize index=_index;
@property(readonly, nonatomic) MLFormat *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)stunWithError:(id)arg1 time:(double)arg2;
- (void)clearStun;
- (id)initWithFormat:(id)arg1;

@end


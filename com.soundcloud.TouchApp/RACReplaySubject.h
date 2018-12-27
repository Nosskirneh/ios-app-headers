//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RACSubject.h"

@class NSError, NSMutableArray;

@interface RACReplaySubject : RACSubject
{
    _Bool _hasCompleted;
    _Bool _hasError;
    unsigned long long _capacity;
    NSMutableArray *_valuesReceived;
    NSError *_error;
}

+ (id)replaySubjectWithCapacity:(unsigned long long)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(nonatomic) _Bool hasCompleted; // @synthesize hasCompleted=_hasCompleted;
@property(readonly, nonatomic) NSMutableArray *valuesReceived; // @synthesize valuesReceived=_valuesReceived;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
- (void).cxx_destruct;
- (void)sendError:(id)arg1;
- (void)sendCompleted;
- (void)sendNext:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)init;

@end


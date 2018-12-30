//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGRACTrampoline, NSString;

@interface ANGRACSignalSubscriber : NSObject
{
    NSString *_uniqueKey;
    ANGRACTrampoline *_trampoline;
    NSString *_keypath;
    id _target;
    CDUnknownBlockType _block;
    long long _subscribeOrder;
}

+ (id)uniqueKeyForTrampolineKey:(id)arg1 keyPath:(id)arg2;
+ (id)uniqueKeyForSubscriber:(id)arg1;
@property(nonatomic) long long subscribeOrder; // @synthesize subscribeOrder=_subscribeOrder;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *keypath; // @synthesize keypath=_keypath;
@property(retain, nonatomic) ANGRACTrampoline *trampoline; // @synthesize trampoline=_trampoline;
- (void).cxx_destruct;
- (void)apply:(id)arg1 forceImmediate:(_Bool)arg2;
@property(readonly, nonatomic) NSString *uniqueKey;
@property(readonly, nonatomic) _Bool isExpired;
- (id)initWithTarget:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithTrampoline:(id)arg1 keypath:(id)arg2;
- (void)addSentinelForSignal:(id)arg1;
- (id)init;

@end

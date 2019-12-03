//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPEventBinding.h"

@class NSHashTable;

@interface MPUIControlBinding : MPEventBinding
{
    unsigned long long _controlEvent;
    unsigned long long _verifyEvent;
    NSHashTable *_appliedTo;
    NSHashTable *_verified;
}

+ (id)bindngWithJSONObject:(id)arg1;
+ (id)bindingWithJSONObject:(id)arg1;
+ (id)typeName;
@property(copy, nonatomic) NSHashTable *verified; // @synthesize verified=_verified;
@property(copy, nonatomic) NSHashTable *appliedTo; // @synthesize appliedTo=_appliedTo;
@property(readonly, nonatomic) unsigned long long verifyEvent; // @synthesize verifyEvent=_verifyEvent;
@property(readonly, nonatomic) unsigned long long controlEvent; // @synthesize controlEvent=_controlEvent;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)execute:(id)arg1 forEvent:(id)arg2;
- (void)preVerify:(id)arg1 forEvent:(id)arg2;
- (_Bool)verifyControlMatchesPath:(id)arg1;
- (void)stopOnView:(id)arg1;
- (void)stop;
- (void)execute;
- (void)resetAppliedTo;
- (id)description;
- (id)initWithEventName:(id)arg1 onPath:(id)arg2 withControlEvent:(unsigned long long)arg3 andVerifyEvent:(unsigned long long)arg4;

@end

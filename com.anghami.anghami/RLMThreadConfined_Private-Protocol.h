//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class RLMRealm;

@protocol RLMThreadConfined_Private <NSObject>
+ (id)objectWithThreadSafeReference:(unique_ptr_d0e912ad)arg1 metadata:(id)arg2 realm:(RLMRealm *)arg3;
@property(readonly, nonatomic) id objectiveCMetadata;
- (unique_ptr_d0e912ad)makeThreadSafeReference;
@end


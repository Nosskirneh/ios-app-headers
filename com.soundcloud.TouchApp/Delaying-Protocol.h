//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol Delaying
- (void)delay:(long long)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
@end

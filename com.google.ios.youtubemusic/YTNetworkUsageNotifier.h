//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSHashTable, NSMapTable, YTNetworkUsageState;

@interface YTNetworkUsageNotifier : NSObject
{
    NSHashTable *_observers;
    NSMapTable *_users;
    GIMMe *_gimme;
    YTNetworkUsageState *_currentState;
}

@property(readonly, nonatomic) YTNetworkUsageState *currentState; // @synthesize currentState=_currentState;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateCurrentState;
- (void)updateNetworkUsage:(id)arg1 forObject:(id)arg2;
- (void)removeNetworkUsageObserver:(id)arg1;
- (void)addNetworkUsageObserver:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FPRTraceBackgroundActivityTracker : NSObject
{
    long long _traceBackgroundState;
}

@property(nonatomic) long long traceBackgroundState; // @synthesize traceBackgroundState=_traceBackgroundState;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end


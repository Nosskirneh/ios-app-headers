//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADOMIDAdViewCache, GADOMIDProcessorFactory, GADOMIDStatePublisher, NSDate, NSTimer;
@protocol GADOMIDTreeWalkerTimeLogger;

@interface GADOMIDTreeWalker : NSObject
{
    NSTimer *_timer;
    unsigned long long _count;
    NSDate *_date1;
    NSDate *_date2;
    id <GADOMIDTreeWalkerTimeLogger> _timeLogger;
    GADOMIDProcessorFactory *_processorFactory;
    GADOMIDAdViewCache *_adViewCache;
    GADOMIDStatePublisher *_statePublisher;
}

+ (id)getInstance;
@property(readonly, nonatomic) GADOMIDStatePublisher *statePublisher; // @synthesize statePublisher=_statePublisher;
@property(readonly, nonatomic) GADOMIDAdViewCache *adViewCache; // @synthesize adViewCache=_adViewCache;
@property(readonly, nonatomic) GADOMIDProcessorFactory *processorFactory; // @synthesize processorFactory=_processorFactory;
@property(nonatomic) __weak id <GADOMIDTreeWalkerTimeLogger> timeLogger; // @synthesize timeLogger=_timeLogger;
- (void).cxx_destruct;
- (void)onTick:(id)arg1;
- (void)checkFriendlyObstruction:(id)arg1 withState:(id)arg2;
- (_Bool)handleAdView:(id)arg1 withState:(id)arg2;
- (void)walkChildrenForView:(id)arg1 processor:(id)arg2 state:(id)arg3 type:(unsigned long long)arg4;
- (void)walkView:(id)arg1 processor:(id)arg2 parentState:(id)arg3;
- (void)doWalk;
- (void)afterWalk;
- (void)beforeWalk;
- (void)updateTreeState;
- (void)pause;
- (void)stop;
- (void)start;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol EX2ActionQueueDelegate;

@interface EX2ActionQueue : NSObject
{
    int _queueState;
    id <EX2ActionQueueDelegate> _delegate;
    unsigned long long _numberOfConcurrentActions;
    double _delayBetweenActions;
    NSMutableArray *_actionQueue;
}

@property(retain, nonatomic) NSMutableArray *actionQueue; // @synthesize actionQueue=_actionQueue;
@property double delayBetweenActions; // @synthesize delayBetweenActions=_delayBetweenActions;
@property unsigned long long numberOfConcurrentActions; // @synthesize numberOfConcurrentActions=_numberOfConcurrentActions;
@property(nonatomic) __weak id <EX2ActionQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) int queueState; // @synthesize queueState=_queueState;
- (void).cxx_destruct;
- (void)runNextActions;
- (void)actionFinished:(id)arg1;
- (void)actionFailed:(id)arg1;
- (_Bool)cancelAction:(id)arg1;
- (void)queueAction:(id)arg1;
- (void)clearQueue;
- (void)stopQueue:(_Bool)arg1;
- (void)startQueue;
- (_Bool)isActionOfTypeInQueue:(Class)arg1;
- (_Bool)isActionInQueue:(id)arg1;
@property(readonly) unsigned long long actionCount;
@property(readonly) NSArray *actions;
- (id)waitingActions;
@property(readonly) NSArray *runningActions;
- (void)setQueueState:(int)arg1;
- (id)init;

@end


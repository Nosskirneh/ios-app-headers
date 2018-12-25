//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTWorkerSchedulerStrategy;

@protocol YTWorkerSchedulerStrategyDelegate <NSObject>
- (long long)currentCapabilities;
- (void)endBackgroundTaskForStrategy:(id <YTWorkerSchedulerStrategy>)arg1;
- (void)startBackgroundTaskForStrategy:(id <YTWorkerSchedulerStrategy>)arg1;
@end

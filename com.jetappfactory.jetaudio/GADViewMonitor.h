//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADScheduler, UIView;
@protocol GADViewMonitorDelegate, OS_dispatch_queue;

@interface GADViewMonitor : NSObject
{
    GADScheduler *_updateViewBoundsScheduler;
    NSObject<OS_dispatch_queue> *_lockQueue;
    id <GADViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewVisibleBounds;
    _Bool _monitoredViewVisible;
    UIView *_monitoredView;
}

- (void).cxx_destruct;
@property(readonly) _Bool monitoredViewVisible;
@property(readonly) struct CGRect monitoredViewVisibleBounds;
- (void)setMonitoredViewVisibleBounds:(struct CGRect)arg1;
@property __weak id <GADViewMonitorDelegate> delegate;
- (void)updateViewBounds;
- (void)stopMonitoring;
- (void)sample;
- (void)startMonitoringWithSamplingInterval:(double)arg1;
- (id)init;
- (id)initWithView:(id)arg1;

@end


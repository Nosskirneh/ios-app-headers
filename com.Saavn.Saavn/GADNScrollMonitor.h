//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNScheduler, UIView;

@interface GADNScrollMonitor : NSObject
{
    GADNScheduler *_updateScrollStatusScheduler;
    UIView *_monitoredView;
    id _messageSource;
    struct CGRect _lastMonitoredViewBounds;
}

- (void).cxx_destruct;
- (void)updateScrollStatus;
- (id)initWithView:(id)arg1 messageSource:(id)arg2;

@end


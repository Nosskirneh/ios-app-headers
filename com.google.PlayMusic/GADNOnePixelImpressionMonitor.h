//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection;
@protocol OS_dispatch_queue;

@interface GADNOnePixelImpressionMonitor : NSObject
{
    GADNObserverCollection *_observers;
    _Bool _didMakeImpression;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)postImpressionNotificationForAd:(id)arg1;
- (id)initWithAd:(id)arg1;

@end


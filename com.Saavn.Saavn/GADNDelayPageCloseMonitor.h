//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAd, GADNObserverCollection;

@interface GADNDelayPageCloseMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNAd *_ad;
    GADNAd *_strongAd;
    long long _timeoutIdentifier;
}

- (void).cxx_destruct;
- (void)handleDelayPageCloseNotification:(id)arg1;
- (void)handleDelayPageCloseTimeout:(long long)arg1;
- (id)initWithAd:(id)arg1 messageSource:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNCroppingAdView, GADNObserverCollection;

@interface GADNMediationSizeChangeMonitor : NSObject
{
    GADNCroppingAdView *_croppingView;
    id _delegate;
    GADNObserverCollection *_observers;
}

+ (void)addMonitorToAd:(id)arg1 containerView:(id)arg2 croppingView:(id)arg3 delegate:(id)arg4;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)arg1 croppingView:(id)arg2 delegate:(id)arg3;

@end


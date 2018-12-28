//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAdVerificationReporter, GADNObserverCollection, GADNWebAdView;
@protocol OS_dispatch_queue;

@interface GADNAdVerificationMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNWebAdView *_adView;
    GADNAdVerificationReporter *_adVerificationReporter;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _adSessionBegan
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (void)trackExpandView:(id)arg1;
- (void)adDidMakeImpression;
- (void)beginAdSession;
- (void)dealloc;
- (id)initWithAd:(id)arg1 monitoredView:(id)arg2 adView:(id)arg3 friendlyObstructionView:(id)arg4 mediaType:(long long)arg5;

@end


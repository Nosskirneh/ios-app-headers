//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNObserverCollection, GADOMIDAdSession, NSMutableArray, UIView;

@interface GADNAdVerificationReporter : NSObject
{
    GADOMIDAdSession *_adSession;
    NSMutableArray *_monitoredViews;
    GADNObserverCollection *_observers;
    UIView *_friendlyObstructionView;
    long long _mediaType;
    UIView *_currentMonitoredView;
    UIView *_webView;
}

- (void).cxx_destruct;
- (void)cleanUpDeallocatedMonitoredViews;
- (void)stopTrackingAdVerificationView:(id)arg1;
- (void)addExpandView:(id)arg1 presenter:(id)arg2;
- (void)setMonitoredView:(id)arg1;
- (void)endAdSession;
- (void)beginAdSession;
- (id)initWithWebView:(id)arg1 mediaType:(long long)arg2 friendlyObstructionView:(id)arg3;

@end


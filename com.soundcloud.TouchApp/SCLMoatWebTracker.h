//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLMoatBaseTracker.h"

@class NSString, SCLMoatBridge, UIView, UIWebView, WKWebView;
@protocol SCLMoatBridgeProtocol;

@interface SCLMoatWebTracker : SCLMoatBaseTracker
{
    _Bool _cleanedUp;
    NSString *_failureReason;
    UIView *_trackedView;
    UIWebView *_uiWebView;
    WKWebView *_wkWebView;
    SCLMoatBridge<SCLMoatBridgeProtocol> *_webBridge;
}

+ (id)trackerWithAdView:(id)arg1 withWebComponent:(id)arg2;
+ (id)trackerWithWebComponent:(id)arg1;
@property _Bool cleanedUp; // @synthesize cleanedUp=_cleanedUp;
@property(retain) SCLMoatBridge<SCLMoatBridgeProtocol> *webBridge; // @synthesize webBridge=_webBridge;
@property __weak WKWebView *wkWebView; // @synthesize wkWebView=_wkWebView;
@property __weak UIWebView *uiWebView; // @synthesize uiWebView=_uiWebView;
@property __weak UIView *trackedView; // @synthesize trackedView=_trackedView;
@property(retain, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanUp;
- (_Bool)installUIWebViewBridge;
- (_Bool)installWKWebViewBridge;
- (_Bool)installBridge;
- (_Bool)setViewToTrack:(id)arg1 withWebComponent:(id)arg2;
- (void)setupTrackerForView:(id)arg1 withWebComponent:(id)arg2 isNative:(_Bool)arg3;
- (id)initWithView:(id)arg1 withWebComponent:(id)arg2 isNative:(_Bool)arg3;
- (id)initWithView:(id)arg1 withWebComponent:(id)arg2;
- (id)initWithWebViewComponent:(id)arg1;
- (void)stopTracking;
- (_Bool)startTracking;

@end


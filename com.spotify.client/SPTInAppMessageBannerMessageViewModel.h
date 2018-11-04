//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKScriptMessageHandler.h"

@class NSDictionary, NSString, SPTInAppMessageActionFactory, SPTInAppMessageBannerMessage, SPTInAppMessageServiceLogger, SPTInAppMessageTrigger, WKWebView, WKWebViewConfiguration;

@interface SPTInAppMessageBannerMessageViewModel : NSObject <WKScriptMessageHandler>
{
    _Bool _QATool;
    _Bool _cancelPresention;
    id <SPTInAppMessageBannerMessageWebViewContentDelegate> _delegate;
    WKWebView *_webview;
    SPTInAppMessageBannerMessage *_bannerMessage;
    double _presentationStartTime;
    double _bannerHeight;
    SPTInAppMessageTrigger *_trigger;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    WKWebViewConfiguration *_webViewConfiguration;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    NSDictionary *_cancelationInfo;
    id <SPTNowPlayingManager> _nowPlayingManager;
}

@property(retain, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(nonatomic) _Bool cancelPresention; // @synthesize cancelPresention=_cancelPresention;
@property(retain, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(nonatomic, getter=isQATool) _Bool QATool; // @synthesize QATool=_QATool;
@property(retain, nonatomic) SPTInAppMessageTrigger *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double bannerHeight; // @synthesize bannerHeight=_bannerHeight;
@property(nonatomic) double presentationStartTime; // @synthesize presentationStartTime=_presentationStartTime;
@property(readonly, nonatomic) SPTInAppMessageBannerMessage *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
@property(readonly, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <SPTInAppMessageBannerMessageWebViewContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelBannerMessagePresentation:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)logMessageDiscarded;
- (void)logTriggerMessagePresentationPerformace;
- (void)didReceieveNotification:(id)arg1;
- (void)setupWebview;
- (double)topEdgeOffset;
- (void)dealloc;
- (id)initWithBannerMessage:(id)arg1 actionFactory:(id)arg2 serviceLogger:(id)arg3 driverDistractionController:(id)arg4 nowPlayingManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKScriptMessageHandler.h"

@class NSDictionary, NSString, SPTInAppMessageActionFactory, SPTInAppMessageCardMessage, SPTInAppMessageServiceLogger, SPTInAppMessageTrigger, WKWebView, WKWebViewConfiguration;

@interface SPTInAppMessageCardMessageViewModel : NSObject <WKScriptMessageHandler>
{
    _Bool _cancelPresention;
    id <SPTInAppMessageCardMessageWebViewContentDelegate> _delegate;
    WKWebView *_webview;
    SPTInAppMessageCardMessage *_cardMessage;
    double _presentationStartTime;
    SPTInAppMessageTrigger *_trigger;
    WKWebViewConfiguration *_webViewConfiguration;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageServiceLogger *_serviceLogger;
    id <SPTExternalIntegrationDriverDistractionController> _driverDistractionController;
    NSDictionary *_cancelationInfo;
}

@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(retain, nonatomic) id <SPTExternalIntegrationDriverDistractionController> driverDistractionController; // @synthesize driverDistractionController=_driverDistractionController;
@property(nonatomic) _Bool cancelPresention; // @synthesize cancelPresention=_cancelPresention;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) WKWebViewConfiguration *webViewConfiguration; // @synthesize webViewConfiguration=_webViewConfiguration;
@property(retain, nonatomic) SPTInAppMessageTrigger *trigger; // @synthesize trigger=_trigger;
@property(nonatomic) double presentationStartTime; // @synthesize presentationStartTime=_presentationStartTime;
@property(readonly, nonatomic) SPTInAppMessageCardMessage *cardMessage; // @synthesize cardMessage=_cardMessage;
@property(readonly, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <SPTInAppMessageCardMessageWebViewContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)messageFormat;
- (void)cancelMessagePresentation:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)logMessageDiscarded;
- (void)logCardMessagePresentationPerformace;
- (void)userInterfacePresented;
- (void)loadHTMLContent;
- (void)didReceieveNotification:(id)arg1;
- (_Bool)isFullScreen;
@property(readonly, copy, nonatomic) NSString *localizedCloseTitle;
@property(readonly, copy, nonatomic) NSString *localizedHeading;
- (void)setupWebview;
- (void)dealloc;
- (id)initWithCardMessage:(id)arg1 actionFactory:(id)arg2 serviceLogger:(id)arg3 driverDistractionController:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


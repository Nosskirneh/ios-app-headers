//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol IMWebViewDelegate;

@interface IMWebViewController : NSObject
{
    _Bool _shouldFirePopupBlockBeacon;
    id <IMWebViewDelegate> _delegate;
}

@property(nonatomic) _Bool shouldFirePopupBlockBeacon; // @synthesize shouldFirePopupBlockBeacon=_shouldFirePopupBlockBeacon;
@property(nonatomic) __weak id <IMWebViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)getWebViewType;
- (_Bool)requiresVolumeUpdateBeforeShowWithPublisherMuteEnabled:(_Bool)arg1;
- (_Bool)requiresInitialWindowHierarchy;
@property(readonly, nonatomic) UIView *webview;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)setAllowBounceAndScrollOnWebView:(_Bool)arg1;
- (id)evaluateJavaScriptAndReturnStringIfPossible:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (void)stopLoading;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (id)initWithWebViewFrame:(struct CGRect)arg1;

@end


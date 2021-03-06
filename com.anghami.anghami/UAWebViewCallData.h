//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, UAInboxMessage, UIWebView;
@protocol UARichContentWindow, UAWKWebViewDelegate;

@interface UAWebViewCallData : NSObject
{
    NSString *_name;
    NSArray *_arguments;
    NSDictionary *_options;
    UIWebView *_webView;
    id <UARichContentWindow> _richContentWindow;
    id <UAWKWebViewDelegate> _delegate;
    NSURL *_url;
    UAInboxMessage *_message;
}

+ (id)callDataForURL:(id)arg1 webView:(id)arg2 delegate:(id)arg3 message:(id)arg4;
+ (id)callDataForURL:(id)arg1 delegate:(id)arg2 message:(id)arg3;
+ (id)callDataForURL:(id)arg1 delegate:(id)arg2;
+ (id)callDataForURL:(id)arg1 webView:(id)arg2 message:(id)arg3;
+ (id)callDataForURL:(id)arg1 webView:(id)arg2;
@property(retain, nonatomic) UAInboxMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <UAWKWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <UARichContentWindow> richContentWindow; // @synthesize richContentWindow=_richContentWindow;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end


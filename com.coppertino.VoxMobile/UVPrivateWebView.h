//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIScrollView, UIWindow;

@interface UVPrivateWebView : NSObject
{
    id _webView;
}

- (void).cxx_destruct;
- (_Bool)boolByEvaluatingJavaScriptFromString:(id)arg1;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
@property(readonly) struct CGRect bounds;
@property(readonly) UIWindow *window;
@property(readonly) UIScrollView *scrollView;
@property(readonly) _Bool isAsyncExecution;
- (id)initWithWebView:(id)arg1;

@end


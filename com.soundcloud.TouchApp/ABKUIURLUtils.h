//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABKUIURLUtils : NSObject
{
}

+ (id)getEncodedURIFromString:(id)arg1;
+ (void)displayModalWebViewWithURL:(id)arg1 topmostViewController:(id)arg2;
+ (id)topmostViewControllerWithRootViewController:(id)arg1;
+ (void)openURL:(id)arg1;
+ (void)openURLWithSystem:(id)arg1;
+ (_Bool)URLHasValidWebScheme:(id)arg1;
+ (_Bool)URL:(id)arg1 shouldOpenInWebView:(_Bool)arg2;
+ (_Bool)URLDelegateIsValid:(id)arg1;
+ (_Bool)URLDelegate:(id)arg1 handlesURL:(id)arg2 fromChannel:(long long)arg3 withExtras:(id)arg4;

@end


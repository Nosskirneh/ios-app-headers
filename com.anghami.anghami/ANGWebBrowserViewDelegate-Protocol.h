//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KINWebBrowserDelegate-Protocol.h"

@class ANGWebBrowserViewController, KINWebBrowserViewController, NSURL;

@protocol ANGWebBrowserViewDelegate <KINWebBrowserDelegate>

@optional
- (void)webBrowserDidDismiss:(KINWebBrowserViewController *)arg1;
- (void)webBrowserWillDisappear:(ANGWebBrowserViewController *)arg1;
- (_Bool)webBrowser:(KINWebBrowserViewController *)arg1 shouldLoadURL:(NSURL *)arg2;
@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SFSafariViewControllerDelegate-Protocol.h"

@class NSString, NSTimer, UIWindow;

@interface GINDurableDeepLinkServiceReceiving : NSObject <SFSafariViewControllerDelegate>
{
    NSTimer *_dismissWindowTimer;
    UIWindow *_hiddenWindow;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)safariViewController:(id)arg1 didCompleteInitialLoad:(_Bool)arg2;
- (void)dismissHiddenUIWindow;
- (void)checkForPendingDeepLinkWithUserDefaults:(id)arg1 customScheme:(id)arg2 bundleIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

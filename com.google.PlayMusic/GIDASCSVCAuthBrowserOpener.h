//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIDAuthBrowserOpener-Protocol.h"

@class NSString;

@interface GIDASCSVCAuthBrowserOpener : NSObject <GIDAuthBrowserOpener>
{
}

- (void)safariViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (void)openURLUsingMergeSession:(id)arg1 auth:(_Bool)arg2 identity:(id)arg3 SSOService:(id)arg4 view:(id)arg5 viewController:(id)arg6 animated:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)openURLUsingAccountChooser:(id)arg1 auth:(_Bool)arg2 identity:(id)arg3 SSOService:(id)arg4 view:(id)arg5 viewController:(id)arg6 animated:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)openURL:(id)arg1 auth:(_Bool)arg2 identity:(id)arg3 SSOService:(id)arg4 view:(id)arg5 viewController:(id)arg6 animated:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


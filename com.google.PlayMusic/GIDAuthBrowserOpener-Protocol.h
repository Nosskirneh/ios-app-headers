//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SSOIdentity, SSOService, UIView, UIViewController;

@protocol GIDAuthBrowserOpener <NSObject>
- (void)openURL:(NSURL *)arg1 auth:(_Bool)arg2 identity:(SSOIdentity *)arg3 SSOService:(SSOService *)arg4 view:(UIView *)arg5 viewController:(UIViewController *)arg6 animated:(_Bool)arg7 completionHandler:(void (^)(NSError *))arg8;
@end


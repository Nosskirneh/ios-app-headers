//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString;

@interface FBSDKProfileExpressionInstallFacebookAlertPresenter : NSObject <UIAlertViewDelegate>
{
}

+ (id)sharedInstance;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)_alertInstallButtonTitle;
- (id)_alertCancelButtonTitle;
- (id)_alertMessage;
- (id)_alertTitle;
- (void)_openAppStore;
- (void)_presentInstallFacebookUIAlertView;
- (void)_presentInstallFacebookUIAlertController;
- (void)presentInstallFacebookAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

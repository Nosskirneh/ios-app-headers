//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface OneSignalUNUserNotificationCenter : NSObject
{
}

+ (void)callLegacyAppDeletegateSelector:(id)arg1 isTextReply:(_Bool)arg2 actionIdentifier:(id)arg3 userText:(id)arg4 fromPresentNotification:(_Bool)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
+ (void)processiOS10Open:(id)arg1;
+ (_Bool)isDismissEvent:(id)arg1;
+ (void)setUseiOS10_2_workaround:(_Bool)arg1;
+ (void)swizzleSelectors;
- (void)onesignalUserNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)onesignalUserNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setOneSignalUNDelegate:(id)arg1;
- (void)onesignalGetNotificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onesignalRequestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

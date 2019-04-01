//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class OSPermissionState;

@protocol OneSignalNotificationSettings <NSObject>
- (void)onAPNsResponse:(_Bool)arg1;
- (void)onNotificationPromptResponse:(int)arg1;
- (void)promptForNotifications:(void (^)(_Bool))arg1;
- (void)getNotificationPermissionState:(void (^)(OSPermissionState *))arg1;
- (OSPermissionState *)getNotificationPermissionState;
- (int)getNotificationTypes;
@end


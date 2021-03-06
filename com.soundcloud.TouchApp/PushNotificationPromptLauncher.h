//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "URLServiceLauncher-Protocol.h"

@class NSString, PushNotificationRegistry;

@interface PushNotificationPromptLauncher : NSObject <URLServiceLauncher>
{
    PushNotificationRegistry *_pushNotificationRegistry;
}

@property(retain, nonatomic) PushNotificationRegistry *pushNotificationRegistry; // @synthesize pushNotificationRegistry=_pushNotificationRegistry;
- (void).cxx_destruct;
- (void)registerForRemoteNotifications;
- (void)launchFromSourceViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPushNotificationRegistry:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


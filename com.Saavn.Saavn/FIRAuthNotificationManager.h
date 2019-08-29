//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRAuthAppCredentialManager, NSMutableArray, UIApplication;

@interface FIRAuthNotificationManager : NSObject
{
    UIApplication *_application;
    FIRAuthAppCredentialManager *_appCredentialManager;
    _Bool _hasCheckedNotificationForwarding;
    _Bool _isNotificationBeingForwarded;
    NSMutableArray *_pendingCallbacks;
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)callBack;
- (_Bool)canHandleNotification:(id)arg1;
- (void)checkNotificationForwardingWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithApplication:(id)arg1 appCredentialManager:(id)arg2;

@end


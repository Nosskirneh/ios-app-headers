//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPCore, SPTaskCompletionSource;

@interface SPTLoginCoreSessionStateAwaiter : NSObject
{
    SPTaskCompletionSource *_logoutSource;
    SPTaskCompletionSource *_loginSource;
    SPCore *_core;
}

- (void).cxx_destruct;
- (void)sessionStateChanged;
- (id)taskCompletedByTask:(id)arg1;
- (id)awaitLogin;
- (id)awaitLogout;
- (id)initWithCore:(id)arg1;

@end


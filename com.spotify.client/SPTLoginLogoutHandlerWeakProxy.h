//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginLogoutHandler-Protocol.h"

@class NSString;
@protocol SPTLoginLogoutHandler;

@interface SPTLoginLogoutHandlerWeakProxy : NSObject <SPTLoginLogoutHandler>
{
    id <SPTLoginLogoutHandler> _logoutHandler;
}

@property(readonly, nonatomic) __weak id <SPTLoginLogoutHandler> logoutHandler; // @synthesize logoutHandler=_logoutHandler;
- (void).cxx_destruct;
- (void)logoutWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLogoutHandler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

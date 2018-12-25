//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSOIdentity-Protocol.h"

@class NSString;

@interface GRWAuthenticationSignedOutIdentity : NSObject <SSOIdentity>
{
}

- (id)identityPropertyForKey:(id)arg1;
- (_Bool)canSelect;
- (id)userFullName;
- (_Bool)hasValidAuth;
- (id)creationDate;
- (id)hashedUserID;
- (id)userID;
- (id)userEmail;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


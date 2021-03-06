//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class EDAMPublicUserInfo, EDAMUser, NSString;

@interface EDAMAuthenticationResult : NSObject <NSCoding>
{
    long long __currentTime;
    NSString *__authenticationToken;
    long long __expiration;
    EDAMUser *__user;
    EDAMPublicUserInfo *__publicUserInfo;
    _Bool __currentTime_isset;
    _Bool __authenticationToken_isset;
    _Bool __expiration_isset;
    _Bool __user_isset;
    _Bool __publicUserInfo_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPublicUserInfo;
- (_Bool)publicUserInfoIsSet;
@property(retain, nonatomic, getter=publicUserInfo, setter=setPublicUserInfo:) EDAMPublicUserInfo *publicUserInfo; // @dynamic publicUserInfo;
- (void)unsetUser;
- (_Bool)userIsSet;
@property(retain, nonatomic, getter=user, setter=setUser:) EDAMUser *user; // @dynamic user;
- (void)unsetExpiration;
- (_Bool)expirationIsSet;
@property(nonatomic, getter=expiration, setter=setExpiration:) long long expiration; // @dynamic expiration;
- (void)unsetAuthenticationToken;
- (_Bool)authenticationTokenIsSet;
@property(retain, nonatomic, getter=authenticationToken, setter=setAuthenticationToken:) NSString *authenticationToken; // @dynamic authenticationToken;
- (void)unsetCurrentTime;
- (_Bool)currentTimeIsSet;
@property(nonatomic, getter=currentTime, setter=setCurrentTime:) long long currentTime; // @dynamic currentTime;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentTime:(long long)arg1 authenticationToken:(id)arg2 expiration:(long long)arg3 user:(id)arg4 publicUserInfo:(id)arg5;

@end


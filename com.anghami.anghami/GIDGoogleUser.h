//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class GIDAuthentication, GIDProfileData, NSArray, NSString;

@interface GIDGoogleUser : NSObject <NSCoding>
{
    NSString *_userID;
    GIDProfileData *_profile;
    GIDAuthentication *_authentication;
    NSArray *_accessibleScopes;
    NSArray *_grantedScopes;
    NSString *_hostedDomain;
    NSString *_serverAuthCode;
}

@property(readonly, nonatomic) NSString *serverAuthCode; // @synthesize serverAuthCode=_serverAuthCode;
@property(readonly, nonatomic) NSString *hostedDomain; // @synthesize hostedDomain=_hostedDomain;
@property(readonly, nonatomic) NSArray *grantedScopes; // @synthesize grantedScopes=_grantedScopes;
@property(readonly, nonatomic) NSArray *accessibleScopes; // @synthesize accessibleScopes=_accessibleScopes;
@property(readonly, nonatomic) GIDAuthentication *authentication; // @synthesize authentication=_authentication;
@property(readonly, nonatomic) GIDProfileData *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthentication:(id)arg1 requestedScopes:(id)arg2;

@end

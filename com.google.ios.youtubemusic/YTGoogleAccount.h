//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SSOIdentity;
@protocol SSOAuthorization;

@interface YTGoogleAccount : NSObject
{
    SSOIdentity *_ssoIdentity;
    id <SSOAuthorization> _ssoAuthorization;
    NSString *_personaID;
}

@property(retain, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(retain, nonatomic) id <SSOAuthorization> ssoAuthorization; // @synthesize ssoAuthorization=_ssoAuthorization;
@property(retain, nonatomic) SSOIdentity *ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
- (void).cxx_destruct;
- (_Bool)isPersona;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *displayName;
- (id)personaOwnerID;
- (id)googleID;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GGLInstanceIDAuthService, NSMutableDictionary;

@interface GGLInstanceIDRegistrar : NSObject
{
    GGLInstanceIDAuthService *_authService;
    NSMutableDictionary *_registrationClientsByKeyMap;
}

@property(retain, nonatomic) NSMutableDictionary *registrationClientsByKeyMap; // @synthesize registrationClientsByKeyMap=_registrationClientsByKeyMap;
@property(retain, nonatomic) GGLInstanceIDAuthService *authService; // @synthesize authService=_authService;
- (void).cxx_destruct;
- (void)addNewRegistrationClient:(id)arg1;
- (id)registrationClientForKey:(id)arg1;
- (id)createRegistrationClientWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4;
- (void)fetchNewTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)willDeleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)fetchTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)stopAllRequests;
- (id)initWithAuthService:(id)arg1;

@end

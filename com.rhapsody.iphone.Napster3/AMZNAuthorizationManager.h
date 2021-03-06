//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMZNAuthorizationManager : NSObject
{
}

+ (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
+ (id)sharedManager;
- (_Bool)didUserCancelled:(id)arg1;
- (void)handleAuthorizeCallback:(CDUnknownBlockType)arg1 withAuthorizeResult:(id)arg2 fetchUserResult:(id)arg3 error:(id)arg4 request:(id)arg5;
- (void)handleAuthorizeCallback:(CDUnknownBlockType)arg1 withAuthorizeResult:(id)arg2 fetchUserResult:(id)arg3 error:(id)arg4;
- (void)initializeSignIn:(id)arg1;
- (id)getScopeStrings:(id)arg1;
- (void)signOut:(CDUnknownBlockType)arg1;
- (void)authorize:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isSandboxMode) _Bool sandboxMode;
@property(nonatomic) long long region;

@end


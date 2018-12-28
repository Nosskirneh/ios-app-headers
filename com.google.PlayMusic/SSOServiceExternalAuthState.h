//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SSOServiceExternalAuthState : NSObject
{
    CDUnknownBlockType _signInCallback;
    NSString *_verifier;
    NSString *_expectedEmail;
    NSString *_userID;
}

@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(readonly, copy, nonatomic) NSString *expectedEmail; // @synthesize expectedEmail=_expectedEmail;
@property(readonly, copy, nonatomic) NSString *verifier; // @synthesize verifier=_verifier;
- (void).cxx_destruct;
- (void)invokeCallbackWithStore:(id)arg1 identity:(id)arg2 error:(id)arg3;
- (id)initWithVerifier:(id)arg1 expectedEmail:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end


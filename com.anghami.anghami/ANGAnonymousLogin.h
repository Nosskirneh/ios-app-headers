//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGEmailLogin.h"

@interface ANGAnonymousLogin : ANGEmailLogin
{
    _Bool _forcedAnonymous;
}

@property(nonatomic) _Bool forcedAnonymous; // @synthesize forcedAnonymous=_forcedAnonymous;
- (id)loginSuccessfullEventParams:(_Bool)arg1;
- (id)loginFailParams:(id)arg1;
- (id)analyticsLoginMethodString;
- (id)authMethod;
- (long long)loginType;
- (void)startLogin;

@end


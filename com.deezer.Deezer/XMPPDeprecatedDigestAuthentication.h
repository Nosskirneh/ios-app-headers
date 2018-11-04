//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "XMPPSASLAuthentication-Protocol.h"

@class NSString, XMPPStream;

@interface XMPPDeprecatedDigestAuthentication : NSObject <XMPPSASLAuthentication>
{
    XMPPStream *xmppStream;
    NSString *password;
}

+ (id)mechanismName;
- (void).cxx_destruct;
- (_Bool)shouldResendOpeningNegotiationAfterSuccessfulAuthentication;
- (long long)handleAuth:(id)arg1;
- (_Bool)start:(id *)arg1;
- (id)initWithStream:(id)arg1 password:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


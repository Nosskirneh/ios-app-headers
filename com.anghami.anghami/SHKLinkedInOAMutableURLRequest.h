//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OAMutableURLRequest.h"

@class NSString;

@interface SHKLinkedInOAMutableURLRequest : OAMutableURLRequest
{
    NSString *callback;
}

- (id)_signatureBaseString;
- (void)prepare;
- (void)dealloc;
- (id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 nonce:(id)arg6 timestamp:(id)arg7 callback:(id)arg8;
- (id)initWithURL:(id)arg1 consumer:(id)arg2 token:(id)arg3 realm:(id)arg4 signatureProvider:(id)arg5 callback:(id)arg6;

@end


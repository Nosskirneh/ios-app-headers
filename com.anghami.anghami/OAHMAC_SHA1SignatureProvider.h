//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OASignatureProviding-Protocol.h"

@class NSString;

@interface OAHMAC_SHA1SignatureProvider : NSObject <OASignatureProviding>
{
}

- (id)signClearText:(id)arg1 withSecret:(id)arg2;
- (id)name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


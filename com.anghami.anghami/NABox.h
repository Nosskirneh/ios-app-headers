//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NABox : NSObject
{
    _Bool _secureDataEnabled;
}

+ (void)initialize;
@property(getter=isSecureDataEnabled) _Bool secureDataEnabled; // @synthesize secureDataEnabled=_secureDataEnabled;
- (id)decrypt:(id)arg1 nonce:(id)arg2 keypair:(id)arg3 error:(id *)arg4;
- (id)encrypt:(id)arg1 nonce:(id)arg2 keypair:(id)arg3 error:(id *)arg4;

@end


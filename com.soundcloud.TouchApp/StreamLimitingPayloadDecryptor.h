//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Environment;

@interface StreamLimitingPayloadDecryptor : NSObject
{
    Environment *_environment;
}

@property(readonly, nonatomic) Environment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)dataFromHex:(id)arg1;
- (id)decryptedJsonFromPayload:(id)arg1 error:(id *)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

@end


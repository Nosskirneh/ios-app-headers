//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OMEMOPreKey.h"

@class NSData;

@interface OMEMOSignedPreKey : OMEMOPreKey
{
    NSData *_signature;
}

@property(readonly, copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (id)initWithPreKeyId:(unsigned int)arg1 publicKey:(id)arg2 signature:(id)arg3;
- (id)initWithPreKeyId:(unsigned int)arg1 publicKey:(id)arg2;

@end


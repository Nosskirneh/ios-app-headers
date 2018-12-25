//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData;

@interface YTApiaryDeviceCrypto : NSObject <NSCoding>
{
    NSData *_deviceID;
    NSData *_deviceKey;
    NSData *_projectKey;
    NSData *_hmacKey;
    unsigned long long _hmacLength;
}

- (void).cxx_destruct;
- (id)performCrypto:(id)arg1 outputLength:(unsigned long long)arg2 IV:(id)arg3 operation:(unsigned int)arg4;
- (id)paddedData:(id)arg1;
- (id)projectKeySignature;
- (_Bool)verifySignedData:(id)arg1;
- (_Bool)signURLRequest:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 padData:(_Bool)arg2 HMACLength:(unsigned long long)arg3;
- (id)encryptAndEncodeData:(id)arg1 error:(id *)arg2;
- (id)decryptEncodedString:(id)arg1 error:(id *)arg2;
- (_Bool)setDeviceID:(id)arg1 deviceKey:(id)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProjectKey:(id)arg1 HMACLength:(unsigned long long)arg2;
- (id)init;

@end


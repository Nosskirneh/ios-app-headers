//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CredentialsChecking-Protocol.h"

@class NSString;

@interface Keychain : NSObject <CredentialsChecking>
{
    NSString *_account;
    NSString *_credentialService;
    NSString *_applicationTag;
    NSString *_deviceService;
}

@property(copy, nonatomic) NSString *deviceService; // @synthesize deviceService=_deviceService;
@property(copy, nonatomic) NSString *applicationTag; // @synthesize applicationTag=_applicationTag;
@property(copy, nonatomic) NSString *credentialService; // @synthesize credentialService=_credentialService;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)stringForKeychainError:(int)arg1;
- (id)decodeFromData:(id)arg1;
- (id)encodeToData:(id)arg1;
- (id)keyBaseFindQuery;
- (id)keyBaseUpdateQuery;
- (id)deviceIdBaseQuery;
- (id)credentialBaseQuery;
- (id)copyQuery:(id)arg1;
- (id)deleteQuery:(id)arg1;
- (id)findQuery:(id)arg1;
- (id)updateQueryAttributesWithData:(id)arg1;
- (id)updateQuery:(id)arg1;
- (id)createQueryFromQuery:(id)arg1 withData:(id)arg2;
- (_Bool)deleteItem:(id)arg1 ofType:(const void *)arg2;
- (id)deleteDataWithOfType:(const void *)arg1 baseQuery:(id)arg2;
- (id)dataWithBaseQuery:(id)arg1 error:(id *)arg2;
- (id)retrieveDataWithBaseQuery:(id)arg1;
- (id)storeData:(id)arg1 withBaseQuery:(id)arg2;
- (id)deleteCryptoKey;
- (id)cryptoKeySynchronousWithError:(id *)arg1;
- (id)cryptoKey;
- (id)storeCryptoKey:(id)arg1;
- (id)deleteDeviceId;
@property(readonly, nonatomic) NSString *deviceId;
- (id)storeDeviceId:(id)arg1;
@property(readonly, nonatomic) NSString *userCredential;
@property(readonly, nonatomic) _Bool hasCredential;
- (id)deleteCredential;
- (id)credential;
- (id)storeCredential:(id)arg1;
- (id)initWithAccount:(id)arg1 credentialService:(id)arg2 applicationTag:(id)arg3 deviceService:(id)arg4;
- (id)init;

@end


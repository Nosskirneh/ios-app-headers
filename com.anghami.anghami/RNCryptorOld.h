//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RNCryptorOld : NSObject
{
    struct _RNCryptorSettingsOld settings_;
}

+ (id)randomDataOfLength:(unsigned long long)arg1;
+ (id)errorWithCode:(int)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)AES256Cryptor;
@property(readonly, nonatomic) struct _RNCryptorSettingsOld settings; // @synthesize settings=settings_;
- (id)encryptData:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (_Bool)encryptFromURL:(id)arg1 toURL:(id)arg2 append:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
- (_Bool)encryptFromStream:(id)arg1 toStream:(id)arg2 password:(id)arg3 error:(id *)arg4;
- (_Bool)encryptFromStream:(id)arg1 toStream:(id)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 error:(id *)arg5;
- (id)decryptData:(id)arg1 password:(id)arg2 error:(id *)arg3;
- (_Bool)decryptFromURL:(id)arg1 toURL:(id)arg2 append:(_Bool)arg3 password:(id)arg4 error:(id *)arg5;
- (_Bool)decryptFromStream:(id)arg1 toStream:(id)arg2 password:(id)arg3 error:(id *)arg4;
- (_Bool)decryptFromStream:(id)arg1 toStream:(id)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 error:(id *)arg5;
- (_Bool)performOperation:(unsigned int)arg1 fromStream:(id)arg2 readCallback:(CDUnknownBlockType)arg3 toStream:(id)arg4 writeCallback:(CDUnknownBlockType)arg5 encryptionKey:(id)arg6 IV:(id)arg7 footerSize:(unsigned long long)arg8 footer:(id *)arg9 error:(id *)arg10;
- (id)readStream:(id)arg1 length:(unsigned long long)arg2;
- (_Bool)processResult:(int)arg1 data:(id)arg2 length:(unsigned long long)arg3 callback:(CDUnknownBlockType)arg4 output:(id)arg5 error:(id *)arg6;
- (id)keyForPassword:(id)arg1 withSalt:(id)arg2 andSettings:(struct _RNCryptorKeyDerivationSettingsOld)arg3;
- (id)initWithSettings:(struct _RNCryptorSettingsOld)arg1;

@end


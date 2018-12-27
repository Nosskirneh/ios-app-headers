//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Decryptor.h"

@class CryptoHelper;

@interface AdHocDecryptor : Decryptor
{
    CryptoHelper *_cryptoHelper;
}

@property(readonly, nonatomic) CryptoHelper *cryptoHelper; // @synthesize cryptoHelper=_cryptoHelper;
- (void).cxx_destruct;
- (id)ivForData:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)dataToDecryptFromData:(id)arg1 inRange:(struct _NSRange)arg2;
- (_Bool)isRangeAtEnd:(struct _NSRange)arg1 ofData:(id)arg2;
- (id)trimmedDecryptedData:(id)arg1 toActuallyRequestedRange:(struct _NSRange)arg2;
- (id)decryptedDataForData:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)decryptedSizeForData:(id)arg1;
- (void)dealloc;
- (id)initWithKey:(id *)arg1 cryptoHelper:(id)arg2;
- (id)initWithKey:(id *)arg1;

@end


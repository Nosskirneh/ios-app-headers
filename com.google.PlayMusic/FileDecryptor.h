//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface FileDecryptor : NSObject
{
    NSData *_fileData;
    unsigned long long _blockIndex;
    unsigned long long _fileOffset;
    struct _CCCryptor *_cryptorRef;
    NSData *_keyData;
    NSData *_ivData;
    unsigned long long _decryptedFileLength;
}

+ (id)ivDataForBlockIndex:(unsigned long long)arg1 withInitialIVData:(id)arg2;
+ (id)decryptorForFile:(id)arg1 deviceKey:(id)arg2;
+ (id)decryptorForFile:(id)arg1;
@property(readonly, nonatomic) unsigned long long decryptedFileLength; // @synthesize decryptedFileLength=_decryptedFileLength;
- (void).cxx_destruct;
- (void)close;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)dealloc;
- (_Bool)ensureCryptor;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (id)initForData:(id)arg1 deviceKey:(id)arg2;

@end


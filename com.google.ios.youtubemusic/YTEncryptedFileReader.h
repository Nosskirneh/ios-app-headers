//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTCryptor;

@interface YTEncryptedFileReader : NSObject
{
    YTCryptor *_cryptor;
    int _fileFD;
    long long _fileFDOffset;
    char *_buffer;
    unsigned long long _bufferPosition;
    unsigned long long _bufferDataSize;
    unsigned long long _chunkSize;
    _Bool _done;
    NSString *_filePath;
    unsigned long long _fileSize;
    long long _fileOffset;
}

@property(readonly, nonatomic, getter=isDone) _Bool done; // @synthesize done=_done;
@property(readonly, nonatomic) long long fileOffset; // @synthesize fileOffset=_fileOffset;
@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (unsigned long long)chunkStart:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isOpen) _Bool open;
- (id)readDataOfLength:(unsigned long long)arg1;
- (_Bool)seekToOffset:(unsigned long long)arg1;
- (void)closeFile;
- (_Bool)openFile;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 fileSize:(unsigned long long)arg2 cryptor:(id)arg3;

@end


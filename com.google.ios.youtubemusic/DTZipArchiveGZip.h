//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTZipArchive.h"

@class NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DTZipArchiveGZip : DTZipArchive
{
    NSData *_data;
    NSString *_path;
    unsigned long long _uncompressedLength;
    NSObject<OS_dispatch_queue> *_uncompressingQueue;
    _Bool _cancelling;
    _Bool _uncompressing;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *uncompressingQueue; // @synthesize uncompressingQueue=_uncompressingQueue;
@property(getter=isUncompressing) _Bool uncompressing; // @synthesize uncompressing=_uncompressing;
@property(getter=isCancelling) _Bool cancelling; // @synthesize cancelling=_cancelling;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)uncompressZipArchiveNode:(id)arg1 toDataWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_uncompressZipArchiveNode:(id)arg1 targetPath:(id)arg2 targetData:(id *)arg3 withError:(id *)arg4;
- (id)uncompressZipArchiveNode:(id)arg1 withError:(id *)arg2;
- (void)uncompressToPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_uncompressFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateUncompressedFilesAsDataUsingBlock:(CDUnknownBlockType)arg1;
- (id)_inflatedFileName;
- (void)dealloc;
- (id)initWithFileAtPath:(id)arg1;

@end


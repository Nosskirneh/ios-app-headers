//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class AFURLSessionManager, NSMutableData, NSProgress, NSString, NSURL;

@interface AFURLSessionManagerTaskDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate>
{
    AFURLSessionManager *_manager;
    NSMutableData *_mutableData;
    NSProgress *_uploadProgress;
    NSProgress *_downloadProgress;
    NSURL *_downloadFileURL;
    CDUnknownBlockType _downloadTaskDidFinishDownloading;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _downloadProgressBlock;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressBlock; // @synthesize downloadProgressBlock=_downloadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadTaskDidFinishDownloading; // @synthesize downloadTaskDidFinishDownloading=_downloadTaskDidFinishDownloading;
@property(copy, nonatomic) NSURL *downloadFileURL; // @synthesize downloadFileURL=_downloadFileURL;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSProgress *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
@property(nonatomic) __weak AFURLSessionManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanUpProgressForTask:(id)arg1;
- (void)setupProgressForTask:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


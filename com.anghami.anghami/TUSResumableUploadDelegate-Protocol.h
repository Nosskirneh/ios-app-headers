//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, NSURLSession, NSURLSessionTask, TUSResumableUpload;

@protocol TUSResumableUploadDelegate <NSObject>
@property(readonly) NSURL *createUploadURL;
@property(readonly) NSURLSession *session;
- (void)removeUpload:(TUSResumableUpload *)arg1;
- (void)saveUpload:(TUSResumableUpload *)arg1;
- (void)removeTask:(NSURLSessionTask *)arg1;
- (void)addTask:(NSURLSessionTask *)arg1 forUpload:(TUSResumableUpload *)arg2;
@end

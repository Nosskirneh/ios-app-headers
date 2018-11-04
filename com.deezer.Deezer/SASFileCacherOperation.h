//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSString, NSURL;
@protocol SASFileCacherDelegate;

@interface SASFileCacherOperation : NSOperation
{
    _Bool _isFinished;
    _Bool _pathRelative;
    NSString *_filePath;
    NSString *_localBasePath;
    NSURL *_externalBaseURL;
    id <SASFileCacherDelegate> _delegate;
}

@property(nonatomic) __weak id <SASFileCacherDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *externalBaseURL; // @synthesize externalBaseURL=_externalBaseURL;
@property(copy, nonatomic) NSString *localBasePath; // @synthesize localBasePath=_localBasePath;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic, getter=isPathRelative) _Bool pathRelative; // @synthesize pathRelative=_pathRelative;
- (void).cxx_destruct;
- (void)manageFileCachingFail:(id)arg1 reason:(id)arg2 errorCode:(long long)arg3 underlyingError:(id)arg4;
- (void)processConnectionError:(id)arg1;
- (void)processInvalidResponseStatus:(id)arg1;
- (_Bool)isFinished;
- (void)manageFileCachingSuccess;
- (void)storeData:(id)arg1 atPath:(id)arg2;
- (void)processConnectionSuccess:(id)arg1;
- (_Bool)isConnectionResponseStatusValid:(id)arg1;
- (void)startDownloadingFileAtURL:(id)arg1 forRelativeFilePath:(id)arg2;
- (void)cacheFileAtRelativePath:(id)arg1;
- (void)cacheFileAtPath:(id)arg1;
- (void)main;
- (void)start;
- (id)initWithFilePath:(id)arg1 relative:(_Bool)arg2 localBasePath:(id)arg3 externalBaseURL:(id)arg4;
- (id)initWithFilePath:(id)arg1 relative:(_Bool)arg2;

@end


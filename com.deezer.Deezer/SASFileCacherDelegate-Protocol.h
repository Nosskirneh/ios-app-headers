//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SASFileCacherOperation;

@protocol SASFileCacherDelegate <NSObject>
- (void)operation:(SASFileCacherOperation *)arg1 didFailCachingFileWithError:(NSError *)arg2;
- (void)operationDidFinishCachingFile:(SASFileCacherOperation *)arg1;
@end


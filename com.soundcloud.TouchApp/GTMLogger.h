//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTMLogWriter-Protocol.h"

@class NSString;
@protocol GTMLogFilter, GTMLogFormatter, GTMLogWriter;

@interface GTMLogger : NSObject <GTMLogWriter>
{
    id <GTMLogWriter> writer_;
    id <GTMLogFormatter> formatter_;
    id <GTMLogFilter> filter_;
}

+ (id)logger;
+ (id)loggerWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3;
+ (id)standardLoggerWithPath:(id)arg1;
+ (id)standardLoggerWithStdoutAndStderr;
+ (id)standardLoggerWithStderr;
+ (id)standardLogger;
+ (void)setSharedLogger:(id)arg1;
+ (id)sharedLogger;
- (void)logAssert:(id)arg1;
- (void)logError:(id)arg1;
- (void)logInfo:(id)arg1;
- (void)logDebug:(id)arg1;
- (void)setFilter:(id)arg1;
- (id)filter;
- (void)setFormatter:(id)arg1;
- (id)formatter;
- (void)setWriter:(id)arg1;
- (id)writer;
- (void)dealloc;
- (id)initWithWriter:(id)arg1 formatter:(id)arg2 filter:(id)arg3;
- (id)init;
- (void)logFuncAssert:(const char *)arg1 msg:(id)arg2;
- (void)logFuncError:(const char *)arg1 msg:(id)arg2;
- (void)logFuncInfo:(const char *)arg1 msg:(id)arg2;
- (void)logFuncDebug:(const char *)arg1 msg:(id)arg2;
- (void)logInternalFunc:(const char *)arg1 format:(id)arg2 valist:(char *)arg3 level:(int)arg4;
- (void)logMessage:(id)arg1 level:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


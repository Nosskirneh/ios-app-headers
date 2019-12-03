//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLogObserver-Protocol.h"

@class NSURL;
@protocol OS_dispatch_io, SPTDebugLogServiceLogPusherDelegate;

@interface SPTDebugLogService : NSObject <SPTLogObserver>
{
    // Error parsing type: AQ, name: _counter
    id <SPTDebugLogServiceLogPusherDelegate> _logPusherDelegate;
    NSObject<OS_dispatch_io> *_fileSource;
    NSURL *_logFilePathURL;
}

@property(retain, nonatomic) NSURL *logFilePathURL; // @synthesize logFilePathURL=_logFilePathURL;
@property(retain, nonatomic) NSObject<OS_dispatch_io> *fileSource; // @synthesize fileSource=_fileSource;
@property(nonatomic) __weak id <SPTDebugLogServiceLogPusherDelegate> logPusherDelegate; // @synthesize logPusherDelegate=_logPusherDelegate;
- (void).cxx_destruct;
- (void)log:(id)arg1 wroteLine:(const char *)arg2 fromModule:(const char *)arg3 file:(const char *)arg4 line:(long long)arg5 threadId:(unsigned long long)arg6 at:(id)arg7 logLevel:(int)arg8;
- (id)applicationLogsDirectory;
- (void)pushLog:(id)arg1 severity:(long long)arg2;
- (void)writeToFileContentOfBuffer:(const char *)arg1 length:(int)arg2;
- (id)logsList;
- (id)currentLogFilePath;
- (void)setCoreLogsSeverityAboveOrEqualLogLevel:(long long)arg1;
- (void)enableLoggingToConsoleAboveOrEqualLogLevel:(long long)arg1;
- (void)enableLoggingToFile;
- (id)initWithLogDispatcher:(id)arg1;

@end


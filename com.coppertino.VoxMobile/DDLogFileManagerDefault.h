//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DDLogFileManager-Protocol.h"

@class NSArray, NSString;

@interface DDLogFileManagerDefault : NSObject <DDLogFileManager>
{
    unsigned long long _maximumNumberOfLogFiles;
    unsigned long long _logFilesDiskQuota;
    NSString *_logsDirectory;
    NSString *_defaultFileProtectionLevel;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property unsigned long long logFilesDiskQuota; // @synthesize logFilesDiskQuota=_logFilesDiskQuota;
@property unsigned long long maximumNumberOfLogFiles; // @synthesize maximumNumberOfLogFiles=_maximumNumberOfLogFiles;
- (void).cxx_destruct;
- (id)applicationName;
- (id)createNewLogFile;
@property(readonly, copy) NSString *newLogFileName;
@property(readonly, nonatomic) NSArray *sortedLogFileInfos;
@property(readonly, nonatomic) NSArray *sortedLogFileNames;
@property(readonly, nonatomic) NSArray *sortedLogFilePaths;
@property(readonly, nonatomic) NSArray *unsortedLogFileInfos;
@property(readonly, nonatomic) NSArray *unsortedLogFileNames;
@property(readonly, nonatomic) NSArray *unsortedLogFilePaths;
- (id)logFileDateFormatter;
- (_Bool)isLogFile:(id)arg1;
@property(readonly, copy, nonatomic) NSString *logsDirectory;
- (id)defaultLogsDirectory;
- (void)deleteOldLogFiles;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithLogsDirectory:(id)arg1 defaultFileProtectionLevel:(id)arg2;
- (id)initWithLogsDirectory:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


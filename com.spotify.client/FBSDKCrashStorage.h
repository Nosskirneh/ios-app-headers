//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKCrashStorage : NSObject
{
}

+ (id)getPathToLibDataFile:(id)arg1;
+ (id)getPathToCrashFile:(id)arg1;
+ (id)loadLibData:(id)arg1;
+ (void)generateMethodMapping;
+ (void)saveCrashLog:(id)arg1;
+ (id)getCrashLogFileNames:(id)arg1;
+ (void)clearCrashReportFiles:(id)arg1;
+ (id)loadCrashLog:(id)arg1;
+ (id)loadCrashLogs;
+ (id)getProcessedCrashLogs;
+ (void)saveSignal:(int)arg1 withCallStack:(id)arg2;
+ (void)saveException:(id)arg1;
+ (void)initialize;

@end


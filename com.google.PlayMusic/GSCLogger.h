//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableArray, NSMutableSet;

@interface GSCLogger : NSObject
{
    NSMutableSet *_enabledChannels;
    _Bool _consoleEnabled;
    _Bool _ASLEnabled;
    _Bool _fileEnabled;
    NSMutableArray *_logfileHandles;
    NSFileHandle *_outputLogFileHandle;
    unsigned long long _bytesWrittenToFiles;
    int _minLogLevel;
}

+ (id)sharedLogger;
@property(nonatomic, getter=isConsoleEnabled) _Bool consoleEnabled; // @synthesize consoleEnabled=_consoleEnabled;
@property(nonatomic) int minLogLevel; // @synthesize minLogLevel=_minLogLevel;
- (void).cxx_destruct;
@property(nonatomic, getter=isFileEnabled) _Bool fileEnabled;
@property(nonatomic, getter=isASLEnabled) _Bool ASLEnabled;
- (void)setupLoggingFileHandles;
- (void)logToLevel:(int)arg1 channel:(id)arg2 format:(id)arg3;
- (void)disableChannel:(id)arg1;
- (void)enableChannel:(id)arg1;
- (id)init;

@end


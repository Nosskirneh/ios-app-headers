//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GCKBLogFileWriter, GCKBLoggerFilter, NSDateFormatter, NSDictionary;
@protocol GCKBLoggerDelegate;

@interface GCKBLogger : NSObject
{
    _Bool _consoleLoggingEnabled;
    NSDictionary *_rootConfigDictionary;
    NSDateFormatter *_dateFormatter;
    GCKBLoggerFilter *_overrideFilter;
    GCKBLogFileWriter *_logFileWriter;
    _Bool _useColorCoding;
    _Bool _loggingEnabled;
    _Bool _fileLoggingEnabled;
    id <GCKBLoggerDelegate> _delegate;
    GCKBLoggerFilter *_filter;
    long long _minimumLevel;
    unsigned long long _maxLogFileSize;
    unsigned long long _maxLogFileCount;
}

+ (id)sharedInstance;
@property(nonatomic) unsigned long long maxLogFileCount; // @synthesize maxLogFileCount=_maxLogFileCount;
@property(nonatomic) unsigned long long maxLogFileSize; // @synthesize maxLogFileSize=_maxLogFileSize;
@property(nonatomic) _Bool fileLoggingEnabled; // @synthesize fileLoggingEnabled=_fileLoggingEnabled;
@property(nonatomic) _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property(nonatomic) _Bool useColorCoding; // @synthesize useColorCoding=_useColorCoding;
@property(nonatomic) long long minimumLevel; // @synthesize minimumLevel=_minimumLevel;
@property(retain, nonatomic) GCKBLoggerFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak id <GCKBLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)formatMessage:(id)arg1 level:(long long)arg2 fromFunction:(id)arg3 highlightColor:(long long)arg4;
- (void)logMessage:(id)arg1 level:(long long)arg2 fromFunction:(id)arg3;
- (void)logMessage:(id)arg1 fromFunction:(id)arg2;
- (void)logFromFunction:(const char *)arg1 level:(long long)arg2 message:(id)arg3;
- (id)loggerConfigForSection:(long long)arg1;
- (void)logInternal:(id)arg1 level:(long long)arg2 message:(id)arg3;
- (void)parseNameSpec:(id)arg1 intoName:(id *)arg2 minLevel:(long long *)arg3;
- (void)stopLogFileWriter;
- (void)startLogFileWriter;
- (void)initBaseSDKLoggerWithOptions:(id)arg1;
- (void)initializeInternalLogger;
@property(readonly, nonatomic) _Bool willLog;
- (id)init;

@end

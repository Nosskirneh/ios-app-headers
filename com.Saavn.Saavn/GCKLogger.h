//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSDictionary, NSFileHandle, NSRegularExpression;
@protocol GCKLoggerDelegate;

@interface GCKLogger : NSObject
{
    NSRegularExpression *_functionRegex;
    NSRegularExpression *_messageRegex;
    _Bool _internalLoggingEnabled;
    _Bool _nsLoggingEnabled;
    _Bool _logToFileEnabled;
    NSDictionary *_rootConfigDictionary;
    NSFileHandle *_logfileHandle;
    NSDateFormatter *_dateFormatter;
    id <GCKLoggerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <GCKLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)logFromFunction:(const char *)arg1 message:(id)arg2;
- (id)loggerConfigForSDK:(long long)arg1;
- (void)logInternal:(id)arg1 message:(id)arg2;
- (void)initBaseSDKLoggerWithOptions:(id)arg1;
- (void)initializeInternalLogger;
- (id)init;

@end

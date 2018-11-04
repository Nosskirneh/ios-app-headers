//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDLogger : NSObject
{
    NSMutableArray *_logAppenders;
    unsigned long long _maximumLogLevel;
}

+ (id)defaultLogger;
+ (void)logDebugMessage:(id)arg1;
@property unsigned long long maximumLogLevel; // @synthesize maximumLogLevel=_maximumLogLevel;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 tag:(id)arg2 level:(unsigned long long)arg3 file:(id)arg4 method:(id)arg5 line:(unsigned long long)arg6;
- (void)logMessage:(id)arg1 tag:(id)arg2 level:(unsigned long long)arg3;
- (void)removeAppender:(id)arg1;
- (void)addAppender:(id)arg1;
- (id)init;

@end


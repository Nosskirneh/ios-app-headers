//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRMAbstractLogger.h"

@interface PRMTTYLogger : PRMAbstractLogger
{
    unsigned long long _appLen;
    char *_app;
    unsigned long long _pidLen;
    char *_pid;
}

- (id)loggerName;
- (void)log:(id)arg1;
- (id)init;

@end

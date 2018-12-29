//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AdjustTestOptions : NSObject
{
    _Bool _teardown;
    _Bool _deleteState;
    _Bool _noBackoffWait;
    _Bool _iAdFrameworkEnabled;
    NSString *_baseUrl;
    NSString *_gdprUrl;
    NSString *_basePath;
    NSString *_gdprPath;
    NSNumber *_timerIntervalInMilliseconds;
    NSNumber *_timerStartInMilliseconds;
    NSNumber *_sessionIntervalInMilliseconds;
    NSNumber *_subsessionIntervalInMilliseconds;
}

@property(nonatomic) _Bool iAdFrameworkEnabled; // @synthesize iAdFrameworkEnabled=_iAdFrameworkEnabled;
@property(nonatomic) _Bool noBackoffWait; // @synthesize noBackoffWait=_noBackoffWait;
@property(nonatomic) _Bool deleteState; // @synthesize deleteState=_deleteState;
@property(nonatomic) _Bool teardown; // @synthesize teardown=_teardown;
@property(copy, nonatomic) NSNumber *subsessionIntervalInMilliseconds; // @synthesize subsessionIntervalInMilliseconds=_subsessionIntervalInMilliseconds;
@property(copy, nonatomic) NSNumber *sessionIntervalInMilliseconds; // @synthesize sessionIntervalInMilliseconds=_sessionIntervalInMilliseconds;
@property(copy, nonatomic) NSNumber *timerStartInMilliseconds; // @synthesize timerStartInMilliseconds=_timerStartInMilliseconds;
@property(copy, nonatomic) NSNumber *timerIntervalInMilliseconds; // @synthesize timerIntervalInMilliseconds=_timerIntervalInMilliseconds;
@property(copy, nonatomic) NSString *gdprPath; // @synthesize gdprPath=_gdprPath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy, nonatomic) NSString *gdprUrl; // @synthesize gdprUrl=_gdprUrl;
@property(copy, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;

@end

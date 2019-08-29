//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IMPLCrashReportProcessInfo : NSObject
{
    NSString *_processName;
    unsigned long long _processID;
    NSString *_processPath;
    NSDate *_processStartTime;
    NSString *_parentProcessName;
    unsigned long long _parentProcessID;
    _Bool _native;
}

@property(readonly, nonatomic) _Bool native; // @synthesize native=_native;
@property(readonly, nonatomic) unsigned long long parentProcessID; // @synthesize parentProcessID=_parentProcessID;
@property(readonly, nonatomic) NSString *parentProcessName; // @synthesize parentProcessName=_parentProcessName;
@property(readonly, nonatomic) NSDate *processStartTime; // @synthesize processStartTime=_processStartTime;
@property(readonly, nonatomic) NSString *processPath; // @synthesize processPath=_processPath;
@property(readonly, nonatomic) unsigned long long processID; // @synthesize processID=_processID;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void)dealloc;
- (id)initWithProcessName:(id)arg1 processID:(unsigned long long)arg2 processPath:(id)arg3 processStartTime:(id)arg4 parentProcessName:(id)arg5 parentProcessID:(unsigned long long)arg6 native:(_Bool)arg7;

@end


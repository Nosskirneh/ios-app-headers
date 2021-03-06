//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface UVCrashLog : NSObject
{
    int _ProcessId;
    int _ParentProcessId;
    NSString *_Type;
    NSString *_Message;
    NSString *_Trace;
    NSArray *_Threads;
    NSArray *_BinaryImages;
    NSString *_Build;
    NSString *_OSBuild;
    NSString *_BundleIdentifier;
    NSString *_ProcessName;
    NSArray *_ExceptionTrace;
}

@property(retain, nonatomic) NSArray *ExceptionTrace; // @synthesize ExceptionTrace=_ExceptionTrace;
@property(nonatomic) int ParentProcessId; // @synthesize ParentProcessId=_ParentProcessId;
@property(copy, nonatomic) NSString *ProcessName; // @synthesize ProcessName=_ProcessName;
@property(nonatomic) int ProcessId; // @synthesize ProcessId=_ProcessId;
@property(copy, nonatomic) NSString *BundleIdentifier; // @synthesize BundleIdentifier=_BundleIdentifier;
@property(copy, nonatomic) NSString *OSBuild; // @synthesize OSBuild=_OSBuild;
@property(copy, nonatomic) NSString *Build; // @synthesize Build=_Build;
@property(retain, nonatomic) NSArray *BinaryImages; // @synthesize BinaryImages=_BinaryImages;
@property(retain, nonatomic) NSArray *Threads; // @synthesize Threads=_Threads;
@property(copy, nonatomic) NSString *Trace; // @synthesize Trace=_Trace;
@property(copy, nonatomic) NSString *Message; // @synthesize Message=_Message;
@property(copy, nonatomic) NSString *Type; // @synthesize Type=_Type;
- (void).cxx_destruct;
- (id)toJson;

@end


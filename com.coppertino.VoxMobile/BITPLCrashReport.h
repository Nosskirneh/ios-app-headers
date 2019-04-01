//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BITPLCrashReportApplicationInfo, BITPLCrashReportExceptionInfo, BITPLCrashReportMachExceptionInfo, BITPLCrashReportMachineInfo, BITPLCrashReportProcessInfo, BITPLCrashReportSignalInfo, BITPLCrashReportSystemInfo, NSArray;

@interface BITPLCrashReport : NSObject
{
    struct _PLCrashReportDecoder *_decoder;
    BITPLCrashReportSystemInfo *_systemInfo;
    BITPLCrashReportMachineInfo *_machineInfo;
    BITPLCrashReportApplicationInfo *_applicationInfo;
    BITPLCrashReportProcessInfo *_processInfo;
    BITPLCrashReportSignalInfo *_signalInfo;
    BITPLCrashReportMachExceptionInfo *_machExceptionInfo;
    NSArray *_threads;
    NSArray *_images;
    BITPLCrashReportExceptionInfo *_exceptionInfo;
    struct __CFUUID *_uuid;
}

@property(readonly, nonatomic) struct __CFUUID *uuidRef; // @synthesize uuidRef=_uuid;
@property(readonly, nonatomic) BITPLCrashReportExceptionInfo *exceptionInfo; // @synthesize exceptionInfo=_exceptionInfo;
@property(readonly, nonatomic) NSArray *images; // @synthesize images=_images;
@property(readonly, nonatomic) NSArray *threads; // @synthesize threads=_threads;
@property(readonly, nonatomic) BITPLCrashReportMachExceptionInfo *machExceptionInfo; // @synthesize machExceptionInfo=_machExceptionInfo;
@property(readonly, nonatomic) BITPLCrashReportSignalInfo *signalInfo; // @synthesize signalInfo=_signalInfo;
@property(readonly, nonatomic) BITPLCrashReportProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(readonly, nonatomic) BITPLCrashReportApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(readonly, nonatomic) BITPLCrashReportMachineInfo *machineInfo; // @synthesize machineInfo=_machineInfo;
@property(readonly, nonatomic) BITPLCrashReportSystemInfo *systemInfo; // @synthesize systemInfo=_systemInfo;
@property(readonly, nonatomic) _Bool hasExceptionInfo;
@property(readonly, nonatomic) _Bool hasProcessInfo;
@property(readonly, nonatomic) _Bool hasMachineInfo;
- (id)imageForAddress:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)extractMachExceptionInfo:(struct _Plcrash__CrashReport__Signal__MachException *)arg1 error:(id *)arg2;
- (id)extractSignalInfo:(struct _Plcrash__CrashReport__Signal *)arg1 error:(id *)arg2;
- (id)extractExceptionInfo:(struct _Plcrash__CrashReport__Exception *)arg1 error:(id *)arg2;
- (id)extractImageInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractThreadInfo:(struct _Plcrash__CrashReport *)arg1 error:(id *)arg2;
- (id)extractStackFrameInfo:(struct _Plcrash__CrashReport__Thread__StackFrame *)arg1 error:(id *)arg2;
- (id)extractSymbolInfo:(struct _Plcrash__CrashReport__Symbol *)arg1 error:(id *)arg2;
- (id)extractProcessInfo:(struct _Plcrash__CrashReport__ProcessInfo *)arg1 error:(id *)arg2;
- (id)extractApplicationInfo:(struct _Plcrash__CrashReport__ApplicationInfo *)arg1 error:(id *)arg2;
- (id)extractMachineInfo:(struct _Plcrash__CrashReport__MachineInfo *)arg1 error:(id *)arg2;
- (id)extractProcessorInfo:(struct _Plcrash__CrashReport__Processor *)arg1 error:(id *)arg2;
- (id)extractSystemInfo:(struct _Plcrash__CrashReport__SystemInfo *)arg1 error:(id *)arg2;
- (struct _Plcrash__CrashReport *)decodeCrashData:(id)arg1 error:(id *)arg2;

@end


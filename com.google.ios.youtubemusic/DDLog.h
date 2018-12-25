//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DDLog : NSObject
{
}

+ (void)lt_flush;
+ (void)lt_log:(id)arg1;
+ (id)lt_allLoggers;
+ (void)lt_removeAllLoggers;
+ (void)lt_removeLogger:(id)arg1;
+ (void)lt_addLogger:(id)arg1 level:(unsigned long long)arg2;
+ (void)setLevel:(unsigned long long)arg1 forClassWithName:(id)arg2;
+ (void)setLevel:(unsigned long long)arg1 forClass:(Class)arg2;
+ (unsigned long long)levelForClassWithName:(id)arg1;
+ (unsigned long long)levelForClass:(Class)arg1;
+ (id)registeredClassNames;
+ (id)registeredClasses;
+ (_Bool)isRegisteredClass:(Class)arg1;
+ (void)flushLog;
+ (void)log:(_Bool)arg1 message:(id)arg2;
+ (void)log:(_Bool)arg1 message:(id)arg2 level:(unsigned long long)arg3 flag:(unsigned long long)arg4 context:(long long)arg5 file:(const char *)arg6 function:(const char *)arg7 line:(unsigned long long)arg8 tag:(id)arg9;
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 format:(id)arg9 args:(char *)arg10;
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 format:(id)arg9;
+ (void)queueLogMessage:(id)arg1 asynchronously:(_Bool)arg2;
+ (id)allLoggers;
+ (void)removeAllLoggers;
+ (void)removeLogger:(id)arg1;
+ (void)addLogger:(id)arg1 withLevel:(unsigned long long)arg2;
+ (void)addLogger:(id)arg1;
+ (void)applicationWillTerminate:(id)arg1;
+ (id)loggingQueue;
+ (void)initialize;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDate;

@protocol SPTLogObserver
- (void)log:(id <SPTLogDispatcher>)arg1 wroteLine:(const char *)arg2 fromModule:(const char *)arg3 file:(const char *)arg4 line:(long long)arg5 threadId:(unsigned long long)arg6 at:(NSDate *)arg7 logLevel:(int)arg8;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GIPClearcutLogger, LogEvent, NSString;

@protocol GIPClearcutDecorator <NSObject>
- (void)decorateLogEvent:(LogEvent *)arg1 logSource:(int)arg2 account:(NSString *)arg3 logger:(GIPClearcutLogger *)arg4 isAnonymousLog:(_Bool)arg5;
@end


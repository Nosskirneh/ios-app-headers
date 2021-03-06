//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, RAPIDDLogMessage;
@protocol DDLogFormatter, OS_dispatch_queue;

@protocol DDLogger <NSObject>
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
- (void)logMessage:(RAPIDDLogMessage *)arg1;

@optional
@property(readonly, nonatomic) NSString *loggerName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
- (void)flush;
- (void)willRemoveLogger;
- (void)didAddLogger;
@end


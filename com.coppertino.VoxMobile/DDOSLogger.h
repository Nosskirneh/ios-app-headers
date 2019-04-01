//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger-Protocol.h"

@class NSString;
@protocol DDLogFormatter;

@interface DDOSLogger : DDAbstractLogger <DDLogger>
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <DDLogFormatter> logFormatter;
@property(readonly, nonatomic) struct dispatch_queue_s *loggerQueue;
@property(readonly) Class superclass;

@end


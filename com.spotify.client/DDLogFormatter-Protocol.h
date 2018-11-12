//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RAPIDDLogMessage;
@protocol DDLogger;

@protocol DDLogFormatter <NSObject>
- (NSString *)formatLogMessage:(RAPIDDLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <DDLogger>)arg1;
- (void)didAddToLogger:(id <DDLogger>)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol FIRNetworkLoggerDelegate <NSObject>
- (void)firNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3;
- (void)firNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3 context:(id)arg4;
- (void)firNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3 contexts:(NSArray *)arg4;
@end


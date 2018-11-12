//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol SPTLogCenter, SPTWazeBannerSessionLoggerDataSource;

@interface SPTWazeBannerSessionLogger : NSObject
{
    id <SPTWazeBannerSessionLoggerDataSource> _dataSource;
    id <SPTLogCenter> _logCenter;
    NSString *_sessionId;
    long long _navigationCount;
    long long _state;
    long long _currentInstruction;
}

@property(nonatomic) long long currentInstruction; // @synthesize currentInstruction=_currentInstruction;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long navigationCount; // @synthesize navigationCount=_navigationCount;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTWazeBannerSessionLoggerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (long long)evaluateNavigationCount;
- (void)logEndWithReason:(id)arg1 clickType:(id)arg2;
- (void)logStartWithReason:(id)arg1;
- (void)updateWithNewNavigationInstruction:(long long)arg1;
- (void)logBannerSessionEndedByManualGoToWaze;
- (void)logBannerSessionEndedByManualBannerClose;
- (void)logBannerSessionEndedBackgrounded;
- (void)logBannerSessionEndedAutomatically;
- (void)logBannerSessionStartedForegrounded;
- (void)logBannerSessionStartedAutomatically;
- (id)initWithLogCenter:(id)arg1;

@end


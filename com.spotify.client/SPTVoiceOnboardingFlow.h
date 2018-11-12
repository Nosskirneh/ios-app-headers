//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol SPTVoiceLoggerProtocol, SPTVoiceOnboardingFlowSessionIdProvider, SPTVoiceOnboardingFlowState;

@interface SPTVoiceOnboardingFlow : NSObject
{
    NSArray *_pages;
    id <SPTVoiceOnboardingFlowSessionIdProvider> _sessionIdProvider;
    NSString *_version;
    id <SPTVoiceOnboardingFlowState> _stateHandler;
    id <SPTVoiceLoggerProtocol> _logger;
}

@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTVoiceOnboardingFlowState> stateHandler; // @synthesize stateHandler=_stateHandler;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) __weak id <SPTVoiceOnboardingFlowSessionIdProvider> sessionIdProvider; // @synthesize sessionIdProvider=_sessionIdProvider;
@property(readonly, nonatomic) NSArray *pages; // @synthesize pages=_pages;
- (void).cxx_destruct;
- (void)resetOnboardingPageVisits;
- (void)setOnboardingFlowFinished:(_Bool)arg1 withUserFinishMethod:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setCompleted:(_Bool)arg1;
@property(readonly, nonatomic, getter=isCompleted) _Bool completed;
- (id)initWithStateHandler:(id)arg1 pages:(id)arg2 version:(id)arg3 logger:(id)arg4;

@end


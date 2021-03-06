//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, UAConfig, UAEventManager, UAPreferenceDataStore;
@protocol UAAnalyticsDelegate;

@interface UAAnalytics : NSObject
{
    _Bool _isEnteringForeground;
    NSString *_conversionSendID;
    NSString *_conversionPushMetadata;
    NSString *_conversionRichPushID;
    NSString *_sessionID;
    NSDate *_lastSendTime;
    UAConfig *_config;
    UAPreferenceDataStore *_dataStore;
    UAEventManager *_eventManager;
    NSString *_currentScreen;
    NSString *_previousScreen;
    double _startTime;
    id <UAAnalyticsDelegate> _delegate;
}

+ (id)analyticsWithConfig:(id)arg1 dataStore:(id)arg2 eventManager:(id)arg3;
+ (id)analyticsWithConfig:(id)arg1 dataStore:(id)arg2;
@property(nonatomic) __weak id <UAAnalyticsDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *previousScreen; // @synthesize previousScreen=_previousScreen;
@property(retain, nonatomic) NSString *currentScreen; // @synthesize currentScreen=_currentScreen;
@property(nonatomic) _Bool isEnteringForeground; // @synthesize isEnteringForeground=_isEnteringForeground;
@property(retain, nonatomic) UAEventManager *eventManager; // @synthesize eventManager=_eventManager;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) UAConfig *config; // @synthesize config=_config;
@property(readonly, nonatomic) NSDate *lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *conversionRichPushID; // @synthesize conversionRichPushID=_conversionRichPushID;
@property(copy, nonatomic) NSString *conversionPushMetadata; // @synthesize conversionPushMetadata=_conversionPushMetadata;
@property(copy, nonatomic) NSString *conversionSendID; // @synthesize conversionSendID=_conversionSendID;
- (void).cxx_destruct;
- (void)scheduleUpload;
- (void)cancelUpload;
- (void)stopTrackingScreen;
- (void)trackScreen:(id)arg1;
- (id)currentAssociatedDeviceIdentifiers;
- (void)associateDeviceIdentifiers:(id)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)startSession;
- (void)launchedFromNotification:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)didBecomeActive;
- (void)willTerminate;
- (void)enterBackground;
- (void)enterForeground;
- (id)initWithConfig:(id)arg1 dataStore:(id)arg2 eventManager:(id)arg3;
- (void)dealloc;

@end


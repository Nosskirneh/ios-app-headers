//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, SPTObserverManager;
@protocol SPTInAppMessageDataLoader, SPTInAppMessageNetworkClientObserver;

@interface SPTInAppMessageNetworkClient : NSObject
{
    id <SPTInAppMessageDataLoader> _dataLoader;
    NSTimer *_triggerListRefreshTimer;
    SPTObserverManager *_observerManager;
    NSArray *_supportedFormats;
}

@property(copy, nonatomic) NSArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) NSTimer *triggerListRefreshTimer; // @synthesize triggerListRefreshTimer=_triggerListRefreshTimer;
@property(retain, nonatomic) id <SPTInAppMessageDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)setupRefreshTimer;
- (void)performRequestWithURL:(id)arg1 matchedPattern:(id)arg2 triggerType:(id)arg3;
- (void)fetchMessagesForTriggers:(id)arg1 matchedPattern:(id)arg2 triggerType:(id)arg3;
- (void)fetchTriggerList;
@property(readonly, nonatomic) id <SPTInAppMessageNetworkClientObserver> observerNotifierProxy;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithDataLoader:(id)arg1 supportedFormats:(id)arg2;

@end


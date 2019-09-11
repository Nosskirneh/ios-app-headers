//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, SPTInAppMessageEngine, SPTInAppMessageNetworkClient, SPTInAppMessageSDKMessageController, SPTInAppMessageSDKTriggerListController;
@protocol SPTInAppMessageDataLoader, SPTInAppMessageLogger, SPTInAppMessageRequester, SPTInAppMessageSDKMessageReceiver;

@interface SPTInAppMessageManager : NSObject
{
    id <SPTInAppMessageDataLoader> _dataLoader;
    id <SPTInAppMessageLogger> _logger;
    id <SPTInAppMessageRequester> _messageRequester;
    id <SPTInAppMessageSDKMessageReceiver> _messageReceiver;
    SPTInAppMessageNetworkClient *_networkClient;
    SPTInAppMessageEngine *_engine;
    SPTInAppMessageSDKTriggerListController *_triggerListController;
    SPTInAppMessageSDKMessageController *_messageController;
    NSDictionary *_actionHandlers;
    NSArray *_supportedFormats;
}

@property(copy, nonatomic) NSArray *supportedFormats; // @synthesize supportedFormats=_supportedFormats;
@property(copy, nonatomic) NSDictionary *actionHandlers; // @synthesize actionHandlers=_actionHandlers;
@property(retain, nonatomic) SPTInAppMessageSDKMessageController *messageController; // @synthesize messageController=_messageController;
@property(retain, nonatomic) SPTInAppMessageSDKTriggerListController *triggerListController; // @synthesize triggerListController=_triggerListController;
@property(retain, nonatomic) SPTInAppMessageEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) SPTInAppMessageNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) id <SPTInAppMessageSDKMessageReceiver> messageReceiver; // @synthesize messageReceiver=_messageReceiver;
@property(readonly, nonatomic) id <SPTInAppMessageRequester> messageRequester; // @synthesize messageRequester=_messageRequester;
@property(readonly, nonatomic) id <SPTInAppMessageLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTInAppMessageDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)startTriggerEngineWithSupportedFormats:(id)arg1 actionHandlers:(id)arg2 messageReceiver:(id)arg3;
- (id)createMessageController;
- (id)createTriggerListController;
- (id)createNetworkClient;
- (id)createSDKEngine;
- (id)provideMessageRequester;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 logger:(id)arg2;

@end


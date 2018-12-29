//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IMAJavascriptBridgeDelegate-Protocol.h"

@class IMAJavascriptBridge, IMASettings, IMAVideoDisplayWrapper, NSMutableArray;
@protocol IMAAdsLoaderDelegate;

@interface IMAAdsLoader : NSObject <IMAJavascriptBridgeDelegate>
{
    _Bool _javascriptBridgeFailedToLoad;
    IMASettings *_settings;
    id <IMAAdsLoaderDelegate> _delegate;
    IMAJavascriptBridge *_javascriptBridge;
    NSMutableArray *_pendingRequests;
    id _currentRequest;
    IMAVideoDisplayWrapper *_videoDisplayWrapper;
}

+ (id)sdkVersion;
@property(nonatomic) _Bool javascriptBridgeFailedToLoad; // @synthesize javascriptBridgeFailedToLoad=_javascriptBridgeFailedToLoad;
@property(retain, nonatomic) IMAVideoDisplayWrapper *videoDisplayWrapper; // @synthesize videoDisplayWrapper=_videoDisplayWrapper;
@property(retain, nonatomic) id currentRequest; // @synthesize currentRequest=_currentRequest;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(readonly, nonatomic) IMAJavascriptBridge *javascriptBridge; // @synthesize javascriptBridge=_javascriptBridge;
@property(nonatomic) __weak id <IMAAdsLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) IMASettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)selectVideoDisplayForContainer:(id)arg1;
- (void)processStreamLoadingError:(id)arg1;
- (void)processAdLoadingError:(id)arg1;
- (void)handleMessageStreamInitialized:(id)arg1;
- (void)handleMessageError:(id)arg1;
- (void)handleMessageAdsLoaded:(id)arg1;
- (void)javascriptBridgeDidReceiveLogMessage:(id)arg1;
- (void)javascriptBridgeDidFailWithError:(id)arg1;
- (void)javascriptBridgeDidInitialize;
- (id)companionSlotsSizes:(id)arg1;
- (id)serializeSettings;
- (id)streamRequestDataForRequest:(id)arg1;
- (id)adRequestDataForRequest:(id)arg1;
- (void)unsubscribeFromStreamSession:(id)arg1;
- (void)subscribeForStreamSession:(id)arg1;
- (void)unsubscribeFromSession:(id)arg1;
- (void)subscribeForSession:(id)arg1;
- (void)attemptStreamRequest:(id)arg1;
- (void)attemptAdsRequest:(id)arg1;
- (void)attemptRequest;
- (void)processJavascriptBridgeFailedToLoadError;
- (void)processVersionTooOldError;
- (void)processPictureInPictureError;
- (void)contentComplete;
- (_Bool)canHandleRequests;
- (void)requestStreamWithRequest:(id)arg1;
- (void)requestAdsWithRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (id)initWithJavascriptBridge:(id)arg1 settings:(id)arg2;

@end

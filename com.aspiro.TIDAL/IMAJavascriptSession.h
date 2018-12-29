//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMAJavascriptDispatcher, NSString;

@interface IMAJavascriptSession : NSObject
{
    NSString *_sessionId;
    IMAJavascriptDispatcher *_dispatcher;
}

+ (void)removeNotificationObserver:(id)arg1;
+ (SEL)selectorWithMessageType:(id)arg1;
@property(readonly, nonatomic) __weak IMAJavascriptDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1;
- (void)removeNotificationObserver:(id)arg1 forChannel:(id)arg2 messageTypes:(id)arg3;
- (void)addNotificationObserver:(id)arg1 forChannelName:(id)arg2 messageTypes:(id)arg3;
- (_Bool)sendMessage:(id)arg1;
- (id)initWithSessionId:(id)arg1 dispatcher:(id)arg2;

@end


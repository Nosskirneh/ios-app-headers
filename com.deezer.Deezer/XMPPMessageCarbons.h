//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

@class XMPPIDTracker;

@interface XMPPMessageCarbons : XMPPModule
{
    _Bool autoEnableMessageCarbons;
    _Bool allowsUntrustedMessageCarbons;
    _Bool messageCarbonsEnabled;
    XMPPIDTracker *xmppIDTracker;
}

- (void).cxx_destruct;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (id)xmppStream:(id)arg1 willReceiveMessage:(id)arg2;
- (void)disableMessageCarbonsIQ:(id)arg1 withInfo:(id)arg2;
- (void)enableMessageCarbonsIQ:(id)arg1 withInfo:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)disableMessageCarbons;
- (void)enableMessageCarbons;
@property _Bool allowsUntrustedMessageCarbons;
@property(readonly, getter=isMessageCarbonsEnabled) _Bool messageCarbonsEnabled;
@property _Bool autoEnableMessageCarbons;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;

@end


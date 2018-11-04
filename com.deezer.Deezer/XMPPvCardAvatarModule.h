//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

#import "XMPPvCardTempModuleDelegate-Protocol.h"

@class XMPPvCardTempModule;
@protocol XMPPvCardAvatarStorage;

@interface XMPPvCardAvatarModule : XMPPModule <XMPPvCardTempModuleDelegate>
{
    XMPPvCardTempModule *_xmppvCardTempModule;
    id <XMPPvCardAvatarStorage> _moduleStorage;
    _Bool _autoClearMyvcard;
}

@property(readonly, nonatomic) XMPPvCardTempModule *xmppvCardTempModule; // @synthesize xmppvCardTempModule=_xmppvCardTempModule;
- (void).cxx_destruct;
- (void)xmppvCardTempModule:(id)arg1 failedToUpdateMyvCard:(id)arg2;
- (void)xmppvCardTempModuleDidUpdateMyvCard:(id)arg1;
- (void)xmppvCardTempModule:(id)arg1 didReceivevCardTemp:(id)arg2 forJID:(id)arg3;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (id)xmppStream:(id)arg1 willSendPresence:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)xmppStreamDidConnect:(id)arg1;
- (id)photoDataForJID:(id)arg1;
@property(nonatomic) _Bool autoClearMyvcard;
- (void)dealloc;
- (id)initWithvCardTempModule:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithvCardTempModule:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end


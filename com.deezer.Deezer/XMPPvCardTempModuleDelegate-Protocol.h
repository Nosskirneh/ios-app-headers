//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class DDXMLElement, XMPPJID, XMPPvCardTemp, XMPPvCardTempModule;

@protocol XMPPvCardTempModuleDelegate

@optional
- (void)xmppvCardTempModule:(XMPPvCardTempModule *)arg1 failedToUpdateMyvCard:(DDXMLElement *)arg2;
- (void)xmppvCardTempModuleDidUpdateMyvCard:(XMPPvCardTempModule *)arg1;
- (void)xmppvCardTempModule:(XMPPvCardTempModule *)arg1 failedToFetchvCardForJID:(XMPPJID *)arg2 error:(DDXMLElement *)arg3;
- (void)xmppvCardTempModule:(XMPPvCardTempModule *)arg1 didReceivevCardTemp:(XMPPvCardTemp *)arg2 forJID:(XMPPJID *)arg3;
@end


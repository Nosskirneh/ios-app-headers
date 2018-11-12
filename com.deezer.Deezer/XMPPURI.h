//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, XMPPJID;

@interface XMPPURI : NSObject
{
    XMPPJID *_jid;
    XMPPJID *_accountJID;
    NSString *_queryAction;
    NSDictionary *_queryParameters;
}

@property(readonly, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(readonly, nonatomic) NSString *queryAction; // @synthesize queryAction=_queryAction;
@property(readonly, nonatomic) XMPPJID *accountJID; // @synthesize accountJID=_accountJID;
@property(readonly, nonatomic) XMPPJID *jid; // @synthesize jid=_jid;
- (void).cxx_destruct;
- (void)parseURIString:(id)arg1;
- (id)uriString;
- (id)initWithJID:(id)arg1 queryAction:(id)arg2 queryParameters:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)initWithURIString:(id)arg1;

@end

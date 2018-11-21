//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@protocol SPTLinkDispatcher, SPTVoiceLoggerProtocol;

@interface SPTVoiceHomeCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceLoggerProtocol> _interactionLogger;
}

@property(readonly, nonatomic) id <SPTVoiceLoggerProtocol> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithLinkDispatcher:(id)arg1 interactionLogger:(id)arg2;

@end


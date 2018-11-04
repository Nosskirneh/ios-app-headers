//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceHomeComponentCommandHandlerFactory.h"

@class NSString;

@interface SPTVoiceHomeCommandHandlerFactoryImplementation : NSObject <SPTVoiceHomeComponentCommandHandlerFactory>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceLoggerProtocol> _interactionLogger;
}

@property(retain, nonatomic) id <SPTVoiceLoggerProtocol> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (id)provideCommandHandlers;
- (id)initWithLinkDispatcher:(id)arg1 interactionLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


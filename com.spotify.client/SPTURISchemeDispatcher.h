//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTURISchemeRegistry.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SPTURISchemeDispatcher : NSObject <SPTURISchemeRegistry>
{
    _Bool _haveInvokedURISchemeHandlers;
    id <SPTURISchemeDispatcherMessagingDelegate> _messagingDelegate;
    NSMutableDictionary *_uriSchemeHandlers;
    NSMutableArray *_whenLoggedIn;
}

@property(retain, nonatomic) NSMutableArray *whenLoggedIn; // @synthesize whenLoggedIn=_whenLoggedIn;
@property(nonatomic) _Bool haveInvokedURISchemeHandlers; // @synthesize haveInvokedURISchemeHandlers=_haveInvokedURISchemeHandlers;
@property(retain, nonatomic) NSMutableDictionary *uriSchemeHandlers; // @synthesize uriSchemeHandlers=_uriSchemeHandlers;
@property(nonatomic) __weak id <SPTURISchemeDispatcherMessagingDelegate> messagingDelegate; // @synthesize messagingDelegate=_messagingDelegate;
- (void).cxx_destruct;
- (void)openDeferredLinks;
- (void)performWhenLoggedIn:(CDUnknownBlockType)arg1;
- (_Bool)hasRegisteredHandlerForURIScheme:(id)arg1;
- (_Bool)handleURI:(id)arg1 context:(id)arg2;
- (void)registerHandlerForURIScheme:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "InMobi_AvidDeferredAdSessionListener-Protocol.h"

@class InMobi_AvidEventDispatcher, NSString;

@interface InMobi_AvidDeferredAdSessionListenerImpl : NSObject <InMobi_AvidDeferredAdSessionListener>
{
    InMobi_AvidEventDispatcher *_dispatcher;
}

@property(nonatomic) __weak InMobi_AvidEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
- (void).cxx_destruct;
- (void)recordReadyEvent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FPRInstrument.h"

#import "FPRObjectInstrumentorProtocol-Protocol.h"

@class NSString;

@interface FPRNSURLConnectionDelegateInstrument : FPRInstrument <FPRObjectInstrumentorProtocol>
{
}

- (void)registerObject:(id)arg1;
- (void)registerClass:(Class)arg1;
- (void)registerInstrumentors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "ZDSResolutionSource-Protocol.h"

@class NSManagedObjectContext, NSString, RHPayloadRange, ZDSDeferred;

@interface RHDataUpdateOperation : NSOperation <ZDSResolutionSource>
{
    _Bool _valueBoxingEnabled;
    NSManagedObjectContext *_parentContext;
    CDUnknownBlockType _updateBlock;
    ZDSDeferred *_deferredUpdate;
    id _payload;
    RHPayloadRange *_payloadRange;
    id _input;
}

+ (id)unboxValue:(id)arg1 inContext:(id)arg2;
+ (id)boxValue:(id)arg1;
@property(retain, nonatomic) id input; // @synthesize input=_input;
@property(retain, nonatomic) RHPayloadRange *payloadRange; // @synthesize payloadRange=_payloadRange;
@property(retain, nonatomic) id payload; // @synthesize payload=_payload;
@property(retain, nonatomic) ZDSDeferred *deferredUpdate; // @synthesize deferredUpdate=_deferredUpdate;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic, getter=isValueBoxingEnabled) _Bool valueBoxingEnabled; // @synthesize valueBoxingEnabled=_valueBoxingEnabled;
@property(retain, nonatomic) NSManagedObjectContext *parentContext; // @synthesize parentContext=_parentContext;
- (void).cxx_destruct;
- (void)resolvable:(id)arg1 didCancelWithValue:(id)arg2;
- (void)deliverCancellation;
- (void)main;
- (void)addUnboxingToDeferred:(id)arg1;
- (id)deferredUpdateWithPayload:(id)arg1 range:(id)arg2 input:(id)arg3 onQueue:(id)arg4;
- (id)initWithParentContext:(id)arg1 updates:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


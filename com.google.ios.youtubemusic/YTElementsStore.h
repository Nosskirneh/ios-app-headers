//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTElementsStoreProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, YTElementsState;

@interface YTElementsStore : NSObject <YTElementsStoreProtocol>
{
    NSMutableArray *_commonActionHandlers;
    NSMutableDictionary *_actionHandlers;
    NSObject<OS_dispatch_queue> *_storeQueue;
    id <YTElementsState> _state;
}

@property(retain, nonatomic) id <YTElementsState> state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)unsubscribe:(id)arg1 fromKey:(id)arg2;
- (void)subscribe:(id)arg1 toKey:(id)arg2;
- (void)registerActionHandler:(CDUnknownBlockType)arg1;
- (void)registerActionHandler:(CDUnknownBlockType)arg1 forActionClass:(Class)arg2;
- (id)performAction:(id)arg1 withContext:(id)arg2;
- (id)initWithState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


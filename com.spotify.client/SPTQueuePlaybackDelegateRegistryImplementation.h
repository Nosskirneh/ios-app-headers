//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueuePlaybackDelegateRegistry-Protocol.h"

@class NSMapTable, NSString;

@interface SPTQueuePlaybackDelegateRegistryImplementation : NSObject <SPTQueuePlaybackDelegateRegistry>
{
    NSMapTable *_predicateToDelegate;
}

@property(retain, nonatomic) NSMapTable *predicateToDelegate; // @synthesize predicateToDelegate=_predicateToDelegate;
- (void).cxx_destruct;
- (id)delegateForURI:(id)arg1;
- (void)registerDelegate:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


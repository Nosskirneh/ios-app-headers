//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUpsellActionsRegistry-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTUpsellActionsRegistryImplementation : NSObject <SPTUpsellActionsRegistry>
{
    NSMutableDictionary *_actions;
}

@property(readonly, nonatomic) NSMutableDictionary *actions; // @synthesize actions=_actions;
- (void).cxx_destruct;
- (void)executeActionType:(long long)arg1 withURL:(id)arg2;
- (void)setAction:(CDUnknownBlockType)arg1 forType:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


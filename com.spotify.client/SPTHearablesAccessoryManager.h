//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAccessoryStateManager;

@interface SPTHearablesAccessoryManager : NSObject
{
    id <SPTAccessoryStateManager> _stateManager;
}

@property(readonly, nonatomic) id <SPTAccessoryStateManager> stateManager; // @synthesize stateManager=_stateManager;
- (void).cxx_destruct;
- (void)removeAccessory:(id)arg1;
- (id)addAccessory:(id)arg1;
- (id)initWithStateManager:(id)arg1;

@end


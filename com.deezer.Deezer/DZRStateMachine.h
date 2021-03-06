//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface DZRStateMachine : NSObject
{
    NSString *_state;
    id _delegate;
    NSDictionary *_stateMachineDescription;
}

@property(retain, nonatomic) NSDictionary *stateMachineDescription; // @synthesize stateMachineDescription=_stateMachineDescription;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)pushEvent:(id)arg1;
- (void)loopRun:(id)arg1;
- (id)nextStateFrom:(id)arg1 on:(id)arg2;
- (id)transitionDescriptionForState:(id)arg1 onEvent:(id)arg2;
- (void)transitionFromState:(id)arg1 onEvent:(id)arg2;
- (void)leaveState:(id)arg1;
- (void)enterState:(id)arg1;
- (void)dispatchSelector:(SEL)arg1;
- (SEL)transitionSelectorForState:(id)arg1 onEvent:(id)arg2;
- (SEL)leaveSelectorForState:(id)arg1;
- (SEL)enterSelectorForState:(id)arg1;
- (id)initWithDescription:(id)arg1 initialState:(id)arg2 delegate:(id)arg3;
- (id)initWithDescription:(id)arg1 delegate:(id)arg2;
- (id)initWithDescription:(id)arg1 initialState:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOUINavigationController, GOOUINavigationState;
@protocol GOOUINavigationStateTransition, GOOUINavigationStateTransitionDelegate;

@protocol GOOUINavigationStateTransition <NSObject>
@property(readonly, nonatomic) _Bool nextTransitionIsAnimated;
@property(readonly, nonatomic) id <GOOUINavigationStateTransition> nextTransition;
@property(nonatomic) _Bool preCompositeWasPush;
@property(readonly, nonatomic, getter=isPush) _Bool push;
@property(readonly, nonatomic) GOOUINavigationState *nextState;
@property(readonly, nonatomic) GOOUINavigationState *currentState;
- (void)notifyControllerDelegateOfPushPopAnimated:(_Bool)arg1;
- (void)updateControllerHierarchy;
- (void)setNextTransition:(id <GOOUINavigationStateTransition>)arg1 animated:(_Bool)arg2;
- (void)performTransitionAnimated:(_Bool)arg1 completionBlock:(void (^)(void))arg2;
- (id)initWithCurrentState:(GOOUINavigationState *)arg1 nextState:(GOOUINavigationState *)arg2 isPush:(_Bool)arg3 navigationController:(GOOUINavigationController *)arg4 delegate:(id <GOOUINavigationStateTransitionDelegate>)arg5;
@end


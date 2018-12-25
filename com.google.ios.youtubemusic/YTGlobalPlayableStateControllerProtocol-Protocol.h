//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol YTGlobalPlayableStateControllerObserver;

@protocol YTGlobalPlayableStateControllerProtocol <NSObject>
@property(readonly, nonatomic) long long scrollFocusStateControllerStatus;
- (void)notifyWillHideInterstitial;
- (void)notifyWillShowInterstitial;
- (void)removeObserver:(id <YTGlobalPlayableStateControllerObserver>)arg1;
- (void)addObserver:(id <YTGlobalPlayableStateControllerObserver>)arg1;
@end

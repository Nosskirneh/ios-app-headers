//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAlertTokenObserver;

@protocol SPTAlertToken <NSObject>
@property(readonly, nonatomic) long long state;
- (void)removeObserver:(id <SPTAlertTokenObserver>)arg1;
- (void)addObserver:(id <SPTAlertTokenObserver>)arg1;
- (void)cancelEvenIfDisplaying;
- (void)cancelIfStillQueued;
@end


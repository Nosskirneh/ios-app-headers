//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAlertQueuePresenter;

@protocol SPTAlertQueueOperation <NSObject>
- (void)cancel;
- (void)dismiss;
- (void)performWithPresenter:(id <SPTAlertQueuePresenter>)arg1 completionHandler:(void (^)(void))arg2;
@end

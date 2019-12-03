//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAlertQueuePresenter-Protocol.h"

@class NSString, UIWindow;

@interface SPTAlertQueuePresenterImplementation : NSObject <SPTAlertQueuePresenter>
{
    UIWindow *_blankingWindow;
    UIWindow *_previousKeyWindow;
}

@property(nonatomic) __weak UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
@property(readonly, nonatomic) UIWindow *blankingWindow; // @synthesize blankingWindow=_blankingWindow;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

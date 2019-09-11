//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SPTContextMenuPresenterDelegate;

@protocol SPTContextMenuPresenter <NSObject>
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
@property(nonatomic) __weak id <SPTContextMenuPresenterDelegate> delegate;
- (void)dismissAnimated:(_Bool)arg1;
- (void)updateHeaderViewAnimated:(_Bool)arg1;
- (void)presentInViewController:(UIViewController *)arg1 presentationStyle:(long long)arg2 senderView:(UIView *)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(_Bool)arg5;
- (void)presentInViewController:(UIViewController *)arg1 senderView:(UIView *)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)presentWithSenderView:(UIView *)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
@end


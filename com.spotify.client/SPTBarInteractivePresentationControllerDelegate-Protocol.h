//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTBarInteractivePresentationController, UIView, UIViewController;
@protocol SPTBarInteractiveTransitionParticipant;

@protocol SPTBarInteractivePresentationControllerDelegate <NSObject>
- (UIView *)tabBarForPresentationController:(SPTBarInteractivePresentationController *)arg1;
- (UIViewController<SPTBarInteractiveTransitionParticipant> *)barViewControllerForPresentationController:(SPTBarInteractivePresentationController *)arg1;
- (void)interactivePresentationControllerNeedsDismissal:(SPTBarInteractivePresentationController *)arg1;
- (void)interactivePresentationControllerNeedsPresentation:(SPTBarInteractivePresentationController *)arg1;
- (double)panHeightForInteractivePresentationController:(SPTBarInteractivePresentationController *)arg1;

@optional
- (_Bool)interactiveGesturesEnabled;
@end


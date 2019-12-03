//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHStackNavigationController, UIView, UIViewController;

@interface RHStackNavigationItem : NSObject
{
    _Bool _subordinate;
    UIView *_headerView;
    RHStackNavigationController *_stackNavigationController;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak RHStackNavigationController *stackNavigationController; // @synthesize stackNavigationController=_stackNavigationController;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic, getter=isSubordinate) _Bool subordinate; // @synthesize subordinate=_subordinate;
- (void).cxx_destruct;

@end

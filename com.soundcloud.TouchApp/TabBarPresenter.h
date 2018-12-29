//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NotificationBarController, NotificationBarView, TabBarWaveformView, TitlelessTabBar, UITabBarController, UIView, UIViewController;

@interface TabBarPresenter : NSObject
{
    UITabBarController *_tabController;
    TitlelessTabBar *_tabBar;
    TabBarWaveformView *_tabBarWaveformView;
    UIViewController *_placeholderController;
    NotificationBarController *_notificationBarController;
}

@property(retain, nonatomic) NotificationBarController *notificationBarController; // @synthesize notificationBarController=_notificationBarController;
@property(retain, nonatomic) UIViewController *placeholderController; // @synthesize placeholderController=_placeholderController;
@property(retain, nonatomic) TabBarWaveformView *tabBarWaveformView; // @synthesize tabBarWaveformView=_tabBarWaveformView;
@property(nonatomic) __weak TitlelessTabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(nonatomic) __weak UITabBarController *tabController; // @synthesize tabController=_tabController;
- (void).cxx_destruct;
- (void)removeWaveformView;
- (void)showWaveformView;
- (void)displayVisiblePlayerState;
- (void)displayHiddenPlayerState;
- (void)displayNoPlayerState;
- (void)displayPausedState;
- (void)displayPlayingState;
- (void)enteredForeground;
- (_Bool)tabBarHasPlayerPlaceholder;
- (void)removeNotificationBar;
- (void)addNotificationBar;
@property(readonly, nonatomic) NotificationBarView *notificationBar;
@property(readonly, nonatomic) UIView *miniWaveformView;
- (void)awakeFromNib;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTInitialViewController-Protocol.h"
#import "SPTTabBarControllerProtocol-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class NSArray, NSString, SPTTabBarLogger, UIView, UIViewController;
@protocol SPTNavigationConfiguration, SPTTabBar;

@interface SPTTabBarController : UITabBarController <UITabBarControllerDelegate, SPContentInsetViewController, SPTTabBarControllerProtocol, SPTInitialViewController>
{
    _Bool _didUpdateTabBarItemsAppearance;
    CDUnknownBlockType _visibleStateCallback;
    SPTTabBarLogger *_logger;
    NSString *_friendlyName;
    id <SPTNavigationConfiguration> _navigationConfiguration;
}

@property(retain, nonatomic) id <SPTNavigationConfiguration> navigationConfiguration; // @synthesize navigationConfiguration=_navigationConfiguration;
@property(nonatomic) _Bool didUpdateTabBarItemsAppearance; // @synthesize didUpdateTabBarItemsAppearance=_didUpdateTabBarItemsAppearance;
@property(copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
@property(retain, nonatomic) SPTTabBarLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) CDUnknownBlockType visibleStateCallback; // @synthesize visibleStateCallback=_visibleStateCallback;
- (void).cxx_destruct;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)scrollToTopViewController:(id)arg1;
- (void)sp_updateContentInsets;
- (id)objectRepresentation;
- (void)updateTabBarItemsAppearance;
@property(nonatomic) __weak UIViewController *selectedViewController;
- (id)mainTabViewControllers:(id)arg1;
- (void)configureTabBarStyle;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)updateCurrentTabBarItems;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)setSelectedViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIView<SPTTabBar> *spt_tabBar;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithFriendlyName:(id)arg1 logCenter:(id)arg2 navigationConfiguration:(id)arg3;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) UIView *contentHeaderView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long selectedIndex;
@property(readonly) Class superclass;

@end


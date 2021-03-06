//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UITabBarDelegate-Protocol.h"

@class ANGTabBar, NSString, UITabBarItem;

@interface ANGTabBarManager : NSObject <UITabBarDelegate>
{
    ANGTabBar *_tabBar;
    UITabBarItem *_selectedItem;
}

+ (_Bool)showPlusFeatureTab;
@property(retain, nonatomic) UITabBarItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) ANGTabBar *tabBar; // @synthesize tabBar=_tabBar;
- (void).cxx_destruct;
- (unsigned long long)currentTab;
- (void)selectItem:(id)arg1;
- (void)setSelectedItem:(id)arg1 tabBar:(id)arg2 animated:(_Bool)arg3;
- (id)tabBarItemForTag:(long long)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)showMainViewOfType:(unsigned long long)arg1;
- (id)viewControllerForType:(unsigned long long)arg1;
- (void)reload;
- (void)reloadIfNeeded;
- (id)initWithTabBar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBar.h>

@interface ANGTabBar : UITabBar
{
}

+ (double)tabBarHeight;
- (void)removeDotBadgeWithTag:(long long)arg1;
- (void)addDotBadge:(id)arg1 toTab:(unsigned long long)arg2 dotTag:(unsigned long long)arg3;
- (long long)indexForTabBarItem:(unsigned long long)arg1;
- (void)removeAllTabBarRedDots;
- (void)refreshMixtapeBadge;
- (void)refreshMyMusicBadge;
- (void)_menuCountUpdated;
- (_Bool)shouldShowMyMusicBadge;
- (id)getLastZendekDate;
- (void)menuCountUpdated:(id)arg1;
- (id)titleForType:(unsigned long long)arg1;
- (id)selectedIconForType:(unsigned long long)arg1;
- (id)iconForType:(unsigned long long)arg1;
- (id)getTabBarItemForTabMenu:(unsigned long long)arg1;
- (id)tabBarItems;
- (void)dealloc;
- (_Bool)containsMixtapeTab;
- (_Bool)containsPlusFeaturesTab;
- (void)reload;
- (void)followRequestsSeenChanged;
- (id)init;

@end


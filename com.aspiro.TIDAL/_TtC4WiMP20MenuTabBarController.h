//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "UITabBarControllerDelegate-Protocol.h"

@interface _TtC4WiMP20MenuTabBarController : UITabBarController <UITabBarControllerDelegate>
{
    // Error parsing type: , name: newTabTapped
    // Error parsing type: , name: sameTabTapped
    // Error parsing type: , name: tabHome
    // Error parsing type: , name: tabExplore
    // Error parsing type: , name: tabSearch
    // Error parsing type: , name: tabCollection
    // Error parsing type: , name: offlineModeTapGesture
}

+ (id)getInstance;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)getTabViewByTag:(long long)arg1;
- (void)offlineModeDidTapOnTabController:(id)arg1;
- (void)handleOfflineMode;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)setupTabBarController;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic, copy) CDUnknownBlockType sameTabTapped; // @synthesize sameTabTapped;
@property(nonatomic, copy) CDUnknownBlockType newTabTapped; // @synthesize newTabTapped;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOOPanelViewController, UIViewController;

@protocol GOOPanelViewControllerChild <NSObject>

@optional
- (void)panelViewController:(GOOPanelViewController *)arg1 didHidePanelViewController:(UIViewController *)arg2;
- (void)panelViewController:(GOOPanelViewController *)arg1 willShowPanelViewController:(UIViewController *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UISearchController;

@protocol UISearchControllerDelegate <NSObject>

@optional
- (void)presentSearchController:(UISearchController *)arg1;
- (void)didDismissSearchController:(UISearchController *)arg1;
- (void)willDismissSearchController:(UISearchController *)arg1;
- (void)didPresentSearchController:(UISearchController *)arg1;
- (void)willPresentSearchController:(UISearchController *)arg1;
@end


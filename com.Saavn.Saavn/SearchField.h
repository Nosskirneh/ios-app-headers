//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@class SaavnVC_n, UIView;

@interface SearchField : UISearchBar
{
    _Bool isInNavBar;
    _Bool isInMainView;
    SaavnVC_n *parent;
    UIView *searchWrap;
    UIView *bevel;
}

- (void).cxx_destruct;
- (double)getWrapperHeight;
- (void)bringToFront;
- (void)updateStyles;
- (void)updateUIMode;
- (void)initUI;
- (id)initInVC:(id)arg1 inMainTable:(_Bool)arg2;
- (id)initInVC:(id)arg1;
- (id)initInMainTable:(id)arg1;
- (id)initInNavBar:(id)arg1;

@end


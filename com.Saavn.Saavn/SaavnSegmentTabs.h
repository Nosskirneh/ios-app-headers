//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SaavnVC_n, UIColor, UITableView;

@interface SaavnSegmentTabs : UIView
{
    NSMutableArray *tabs;
    NSMutableArray *tabLabels;
    SaavnVC_n *parentVC;
    unsigned long long selectedTab;
    unsigned long long previousTab;
    UIColor *tintColor;
    _Bool isSticky;
    float stickyPos;
    UIView *marker;
    UIView *buttons;
    UIView *shadow;
    UIView *bevel;
    int tabbedSection;
    UITableView *parentTable;
}

@property(nonatomic) int tabbedSection; // @synthesize tabbedSection;
@property(retain, nonatomic) UITableView *parentTable; // @synthesize parentTable;
- (void).cxx_destruct;
- (void)updateBackgroundColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (_Bool)isSticky;
- (void)setTab:(unsigned long long)arg1;
- (long long)getNumberOfTabs;
- (long long)getPreviousTab;
- (long long)getSelectedTab;
- (void)scrollToSticky;
- (void)scrollTo:(float)arg1;
- (void)tabTapped:(id)arg1;
- (void)hideShadow;
- (void)showShadow;
- (void)moveMarker;
- (void)destroyTab:(unsigned long long)arg1;
- (void)buildTabs;
- (void)layoutSubviews;
- (void)removeTabNamed:(id)arg1;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)refreshTabs;
- (id)initWithTabs:(id)arg1 inFrame:(struct CGRect)arg2 forParent:(id)arg3 tintColor:(id)arg4;
- (id)initWithTabs:(id)arg1 inFrame:(struct CGRect)arg2 forParent:(id)arg3;

@end


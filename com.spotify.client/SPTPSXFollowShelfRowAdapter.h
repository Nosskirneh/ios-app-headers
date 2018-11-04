//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTTableRowAdapter.h"

@class UIViewController;

@interface SPTPSXFollowShelfRowAdapter : SPTTableRowAdapter
{
    id <SPTPSXViewModel> _viewModel;
    id <SPTFollowShelfFactory> _followShelfFactory;
    id <GLUETheme> _theme;
    UIViewController *_followShelfViewController;
}

@property(retain, nonatomic) UIViewController *followShelfViewController; // @synthesize followShelfViewController=_followShelfViewController;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTFollowShelfFactory> followShelfFactory; // @synthesize followShelfFactory=_followShelfFactory;
@property(retain, nonatomic) id <SPTPSXViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)configureCell:(id)arg1;
- (id)tableCell;
- (double)tableCellHeight;
- (id)initWithViewModel:(id)arg1 followShelfFactory:(id)arg2;

@end


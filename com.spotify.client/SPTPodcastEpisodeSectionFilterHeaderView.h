//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SPTTheme, UIButton, UILabel;
@protocol SPTPodcastEpisodeSectionFilterHeaderViewDelegate;

@interface SPTPodcastEpisodeSectionFilterHeaderView : UIView
{
    id <SPTPodcastEpisodeSectionFilterHeaderViewDelegate> _delegate;
    SPTTheme *_theme;
    UILabel *_filterName;
    UIButton *_filterButton;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) UILabel *filterName; // @synthesize filterName=_filterName;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTPodcastEpisodeSectionFilterHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSortOptionButton;
- (void)updateWithFilter:(id)arg1;
- (void)setupConstraints;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end


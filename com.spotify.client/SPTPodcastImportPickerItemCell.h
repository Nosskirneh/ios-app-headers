//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTTableViewCell.h"

@class UIButton;

@interface SPTPodcastImportPickerItemCell : SPTTableViewCell
{
    _Bool _podcastSelected;
    _Bool _isSelectionEnabled;
    UIButton *_selector;
}

@property(retain, nonatomic) UIButton *selector; // @synthesize selector=_selector;
@property(nonatomic) _Bool isSelectionEnabled; // @synthesize isSelectionEnabled=_isSelectionEnabled;
@property(nonatomic) _Bool podcastSelected; // @synthesize podcastSelected=_podcastSelected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


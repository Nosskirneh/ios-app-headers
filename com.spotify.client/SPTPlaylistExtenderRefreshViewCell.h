//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, SPTPlaylistExtenderRefreshButton;

@interface SPTPlaylistExtenderRefreshViewCell : UITableViewCell
{
    _Bool _animate;
    NSString *_buttonTitle;
    NSString *_animateButtonTitle;
    CDUnknownBlockType _actionBlock;
    SPTPlaylistExtenderRefreshButton *_refreshButton;
}

@property(retain, nonatomic) SPTPlaylistExtenderRefreshButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) NSString *animateButtonTitle; // @synthesize animateButtonTitle=_animateButtonTitle;
@property(retain, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (void).cxx_destruct;
- (void)refreshAction:(id)arg1;
@property(nonatomic, getter=isAnimating) _Bool animate; // @synthesize animate=_animate;
- (id)actualAnimateTitle;
- (_Bool)isDisabled;
- (void)setDisabled:(_Bool)arg1;
- (void)applyStyleAndConfigure;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"

@class UITableViewCell;
@protocol EXP_HUBComponentEventHandler;

@interface EXP_HUGSTextRowComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    UITableViewCell *_cell;
}

+ (id)cellStyleWithTheme:(id)arg1;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)onTap;
- (void)applyThemeLayout;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end


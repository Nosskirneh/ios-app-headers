//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewContentOffsetObserver-Protocol.h"
#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"

@class SPTFreeTierFullBleedHeaderView;
@protocol EXP_HUBComponentEventHandler, GLUETheme;

@interface SPTFreeTierFullBleedHeaderComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents, EXP_HUBComponentViewContentOffsetObserver>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTFreeTierFullBleedHeaderView *_headerView;
    id <GLUETheme> _theme;
    double _actionButtonHeight;
}

@property(readonly, nonatomic) double actionButtonHeight; // @synthesize actionButtonHeight=_actionButtonHeight;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTFreeTierFullBleedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (id)buttonModelFromModel:(id)arg1;
- (void)headerPrimaryButtonTapped:(id)arg1;
- (void)setupActionButtonWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 actionButtonHeight:(double)arg2 theme:(id)arg3;

@end


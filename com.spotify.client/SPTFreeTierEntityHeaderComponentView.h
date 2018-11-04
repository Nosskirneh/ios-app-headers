//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewContentOffsetObserver.h"
#import "EXP_HUBComponentViewWithEvents.h"
#import "EXP_HUBComponentViewWithImageHandling.h"

@class SPTFreeTierEntityHeaderView;

@interface SPTFreeTierEntityHeaderComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewContentOffsetObserver, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTFreeTierEntityHeaderView *_headerView;
}

+ (unsigned long long)headerViewStyleFromComponentModel:(id)arg1;
+ (double)preferredViewHeightForDisplayingModel:(id)arg1 theme:(id)arg2;
@property(readonly, nonatomic) SPTFreeTierEntityHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)secondaryButtonTapped:(id)arg1;
- (void)mainButtonTapped:(id)arg1;
- (id)secondaryButtonModelFromModel:(id)arg1;
- (id)mainButtonModelFromModel:(id)arg1;
- (void)configureSecondaryButtonWithModel:(id)arg1;
- (void)configureMainButtonWithModel:(id)arg1;
- (void)configurePlaceholderImageWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end


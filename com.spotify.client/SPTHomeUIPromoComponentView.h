//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents.h"
#import "EXP_HUBComponentViewWithImageHandling.h"
#import "EXP_HUGSSelectableComponentView.h"

@class NSString, SPTHomeUIPromoView, UIGestureRecognizer, UIView;

@interface SPTHomeUIPromoComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents, EXP_HUGSSelectableComponentView>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    UIGestureRecognizer *_selectionGestureRecognizer;
    SPTHomeUIPromoView *_promoView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) SPTHomeUIPromoView *promoView; // @synthesize promoView=_promoView;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
@property(readonly, nonatomic) UIView *selectionView;
- (struct CGSize)preferredSizeForMainImageWithModel:(id)arg1 theme:(id)arg2;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


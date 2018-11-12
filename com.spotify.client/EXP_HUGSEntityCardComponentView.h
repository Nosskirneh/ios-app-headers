//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"
#import "EXP_HUGSSelectableComponentView-Protocol.h"

@class GLUEEntityCardView, NSString, UIGestureRecognizer, UIView;
@protocol EXP_HUBComponentEventHandler, EXP_HUGSStyleOverrider;

@interface EXP_HUGSEntityCardComponentView : EXP_HUGSThemableComponentView <EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents, EXP_HUGSSelectableComponentView>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    UIGestureRecognizer *_selectionGestureRecognizer;
    id <EXP_HUGSStyleOverrider> _styleOverrider;
    GLUEEntityCardView *_cardView;
}

+ (double)widthForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2;
+ (id)styleForComponentModel:(id)arg1 styleOverrider:(id)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUEEntityCardView *cardView; // @synthesize cardView=_cardView;
@property(readonly, nonatomic) id <EXP_HUGSStyleOverrider> styleOverrider; // @synthesize styleOverrider=_styleOverrider;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)metadataCardSubtitleLabelStyle;
- (struct CGSize)mainImageSizeForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2;
- (void)configurePlaceholderWithIcon:(id)arg1;
- (void)sendSelectionEvent;
- (void)selectionGestureRecognizerChangedState:(id)arg1;
@property(readonly, nonatomic) UIView *selectionView;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)applyThemeLayout;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 styleOverrider:(id)arg2 frame:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


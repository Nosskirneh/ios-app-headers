//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUGSThemableComponentView.h"

#import "EXP_HUBComponentViewWithEvents.h"
#import "EXP_HUBComponentViewWithImageHandling.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SPTHomeUIHeroCardStyle, SPTHomeUIHeroCardView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface SPTHomeUIHeroCardComponentView : EXP_HUGSThemableComponentView <UIGestureRecognizerDelegate, EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTHomeUIHeroCardView *_heroCard;
    SPTHomeUIHeroCardStyle *_style;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    UITapGestureRecognizer *_selectionGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property(retain, nonatomic) SPTHomeUIHeroCardStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) SPTHomeUIHeroCardView *heroCard; // @synthesize heroCard=_heroCard;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (id)imageFromCGImage:(struct CGImage *)arg1 rect:(struct CGRect)arg2;
- (void)updateColorsExtractingFromImage:(id)arg1;
- (void)applyColorOverridesFromModel:(id)arg1;
- (void)updateDetailsBackgroundColor:(id)arg1 textColor:(id)arg2;
- (_Bool)hasOverrideColorsFromModel:(id)arg1;
- (id)textColorStringFromModel:(id)arg1;
- (id)foregroundColorStringFromModel:(id)arg1;
- (id)backgroundColorStringFromModel:(id)arg1;
- (void)applyThemeLayout;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)sendSelectionEvent;
- (void)highlightGestureRecognizerChangedState:(id)arg1;
- (void)setupGestureRecognizers;
- (struct CGSize)preferredSizeForMainImageWithContainerViewSize:(struct CGSize)arg1 theme:(id)arg2;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 layout:(id)arg2 style:(id)arg3 frame:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


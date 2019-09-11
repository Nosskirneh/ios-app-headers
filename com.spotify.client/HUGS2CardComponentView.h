//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class GLUEEntityCardView;
@protocol HUBComponentEventHandler;

@interface HUGS2CardComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUEEntityCardView *_cardView;
}

+ (double)widthForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2 model:(id)arg3;
+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
@property(readonly, nonatomic) GLUEEntityCardView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (struct CGSize)mainImageSizeForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2;
- (void)configurePlaceholderWithIcon:(id)arg1;
- (void)sendSelectionEvent;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)applyThemeLayout;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end


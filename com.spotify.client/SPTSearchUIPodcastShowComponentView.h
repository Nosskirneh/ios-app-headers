//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class GLUEEntityRowStyle, GLUEEntityRowView, SPTSearchUIChipView;
@protocol HUBComponentEventHandler;

@interface SPTSearchUIPodcastShowComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUEEntityRowView *_entityRowView;
    SPTSearchUIChipView *_chipView;
    GLUEEntityRowStyle *_rowStyle;
}

+ (struct CGSize)preferredViewSizeForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2;
+ (id)styleForTheme:(id)arg1;
@property(copy, nonatomic) GLUEEntityRowStyle *rowStyle; // @synthesize rowStyle=_rowStyle;
@property(readonly, nonatomic) SPTSearchUIChipView *chipView; // @synthesize chipView=_chipView;
@property(readonly, nonatomic) GLUEEntityRowView *entityRowView; // @synthesize entityRowView=_entityRowView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (struct CGSize)preferredSizeForMainImage;
- (id)chipStyle;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)configureRow;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end


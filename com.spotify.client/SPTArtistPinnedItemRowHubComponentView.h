//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewObserver-Protocol.h"
#import "EXP_HUBComponentViewWithEvents-Protocol.h"
#import "EXP_HUBComponentViewWithImageHandling-Protocol.h"
#import "GLUEThemeObserver-Protocol.h"

@class SPTArtistGLUETheme, SPTArtistPinnedItemRowView;
@protocol EXP_HUBComponentEventHandler;

@interface SPTArtistPinnedItemRowHubComponentView : EXP_HUBComponentView <GLUEThemeObserver, EXP_HUBComponentViewWithImageHandling, EXP_HUBComponentViewWithEvents, EXP_HUBComponentViewObserver>
{
    id <EXP_HUBComponentEventHandler> _eventHandler;
    SPTArtistPinnedItemRowView *_pinnedItemView;
    SPTArtistGLUETheme *_theme;
}

@property(retain, nonatomic) SPTArtistGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTArtistPinnedItemRowView *pinnedItemView; // @synthesize pinnedItemView=_pinnedItemView;
@property(retain, nonatomic) id <EXP_HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)didTapView;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)themeUpdated:(id)arg1;
- (void)addLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end


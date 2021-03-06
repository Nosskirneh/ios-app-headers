//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "SPTHubSwipeableTableViewCellComponentView-Protocol.h"

@class GLUETrackRowTableViewCell, NSString, SPTSwipeableTableViewCell;
@protocol HUBComponentEventHandler;

@interface HUGS2TrackRowComponentView : HUGSThemableComponentView <SPTHubSwipeableTableViewCellComponentView, HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUETrackRowTableViewCell *_trackCell;
}

+ (long long)accessoryRightIconForComponentModel:(id)arg1;
+ (_Bool)trailingButtonForComponentModel:(id)arg1;
+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUETrackRowTableViewCell *trackCell; // @synthesize trackCell=_trackCell;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)configureSubtitleAccessoryViewWithModel:(id)arg1;
- (void)configureTrailingViewWithModel:(id)arg1;
- (void)configureLeadingViewWithModel:(id)arg1;
- (long long)accessoryLabelTypeForLabel:(id)arg1;
- (id)mainImageStyleForComponentModel:(id)arg1;
- (void)handleAccessoryButtonTap:(id)arg1;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;
@property(readonly, nonatomic) SPTSwipeableTableViewCell *tableViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


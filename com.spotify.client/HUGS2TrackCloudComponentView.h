//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"

@class GLUETrackCloudView;
@protocol HUBComponentEventHandler;

@interface HUGS2TrackCloudComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    GLUETrackCloudView *_trackCloudView;
}

+ (id)styleForComponentModel:(id)arg1 theme:(id)arg2;
+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) GLUETrackCloudView *trackCloudView; // @synthesize trackCloudView=_trackCloudView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)applyThemeLayout;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end


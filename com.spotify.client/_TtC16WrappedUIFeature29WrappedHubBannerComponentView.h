//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithImageHandling-Protocol.h"

@protocol HUBComponentEventHandler;

@interface _TtC16WrappedUIFeature29WrappedHubBannerComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling>
{
    // Error parsing type: , name: style
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: contentView
    // Error parsing type: , name: eventHandler
    // Error parsing type: , name: selectionGestureRecognizer
}

- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;
@property(nonatomic, retain) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler;

@end


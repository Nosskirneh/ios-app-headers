//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTQueueSelectableLeadingView-Protocol.h"

@class NSString, SPTQueueLeadingViewStyle, UIButton, UIImage;
@protocol SPTQueueSelectableLeadingViewDelegate, SPTQueueTrack;

@interface SPTQueueLeadingView : UIView <SPTQueueSelectableLeadingView, GLUEStyleable>
{
    _Bool _trackSelected;
    _Bool _dragging;
    id <SPTQueueTrack> _track;
    id <SPTQueueSelectableLeadingViewDelegate> _delegate;
    SPTQueueLeadingViewStyle *_style;
    UIButton *_selector;
    UIImage *_selectorImage;
    UIImage *_selectedImage;
}

@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *selectorImage; // @synthesize selectorImage=_selectorImage;
@property(retain, nonatomic) UIButton *selector; // @synthesize selector=_selector;
@property(copy, nonatomic) SPTQueueLeadingViewStyle *style; // @synthesize style=_style;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic, getter=isTrackSelected) _Bool trackSelected; // @synthesize trackSelected=_trackSelected;
@property(nonatomic) __weak id <SPTQueueSelectableLeadingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SPTQueueTrack> track; // @synthesize track=_track;
- (void).cxx_destruct;
- (void)setupSelectorButton;
- (void)touchUpInside:(id)arg1;
- (void)updateSelectorAccessibilityLabel:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


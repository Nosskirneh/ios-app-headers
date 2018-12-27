//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AnimatableTickView, UIActivityIndicatorView;

@interface PlaylistSnapshotView : UIView
{
    UIView *_cellSnapshotView;
    UIActivityIndicatorView *_activityIndicator;
    AnimatableTickView *_tickView;
    UIView *_overlayView;
}

@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) AnimatableTickView *tickView; // @synthesize tickView=_tickView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UIView *cellSnapshotView; // @synthesize cellSnapshotView=_cellSnapshotView;
- (void).cxx_destruct;
- (void)initSnapshotViewWithCell:(id)arg1;
- (void)animateTick;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
- (id)initWithAddToPlaylistCell:(id)arg1;

@end


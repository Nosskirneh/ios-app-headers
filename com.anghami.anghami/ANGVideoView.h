//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ANGSong;
@protocol ANGVideoViewDelegate;

@interface ANGVideoView : UIView
{
    UIView *_videoView;
    _Bool _isReady;
    _Bool _shouldAcquireVideo;
    id <ANGVideoViewDelegate> _delegate;
    unsigned long long _priority;
    ANGSong *_video;
}

+ (void)unregisterView:(id)arg1;
+ (void)registerView:(id)arg1;
+ (void)refreshVideoViews;
+ (void)removeCurrentVideo;
+ (void)setupManager;
@property(retain, nonatomic) ANGSong *video; // @synthesize video=_video;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool shouldAcquireVideo; // @synthesize shouldAcquireVideo=_shouldAcquireVideo;
@property(nonatomic) __weak id <ANGVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didLoseVideo;
- (_Bool)acquireView;
@property(readonly, nonatomic) _Bool isAcquired;
- (id)initWithPriority:(unsigned long long)arg1 video:(id)arg2 delegate:(id)arg3;

@end


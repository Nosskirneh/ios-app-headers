//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView, _TtC3VOX24MiniPlayerViewController;
@protocol VOXMiniPlayerFacadeDelegate;

@interface VOXMiniPlayerFacade : NSObject
{
    _Bool _playerVisible;
    _Bool _isWaitingForDoubleTapFail;
    UIView *_miniPlayerContainerView;
    id <VOXMiniPlayerFacadeDelegate> _delegate;
    _TtC3VOX24MiniPlayerViewController *_vc;
}

@property(retain, nonatomic) _TtC3VOX24MiniPlayerViewController *vc; // @synthesize vc=_vc;
@property(nonatomic) _Bool isWaitingForDoubleTapFail; // @synthesize isWaitingForDoubleTapFail=_isWaitingForDoubleTapFail;
@property(nonatomic) __weak id <VOXMiniPlayerFacadeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isPlayerVisible) _Bool playerVisible; // @synthesize playerVisible=_playerVisible;
@property(nonatomic) __weak UIView *miniPlayerContainerView; // @synthesize miniPlayerContainerView=_miniPlayerContainerView;
- (void).cxx_destruct;
- (void)updateMiniPlayerContainerWithTransform:(struct CGAffineTransform)arg1 animated:(_Bool)arg2;
- (void)hideMiniPlayerAnimated:(_Bool)arg1;
- (void)showMiniPlayerAnimated:(_Bool)arg1;
- (void)doubleTapOccured:(id)arg1;
- (void)singleTap;
- (void)backgroundTapOccured:(id)arg1;
- (void)playerPlaybakStateChanged:(id)arg1;
- (void)playerPlaybackEnded:(id)arg1;
- (void)playerCurrentTrackChanged:(id)arg1;
- (void)dealloc;
- (id)init;

@end

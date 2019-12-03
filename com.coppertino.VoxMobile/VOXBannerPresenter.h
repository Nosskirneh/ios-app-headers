//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIView;
@protocol VOXBannerPresenterDelegate;

@interface VOXBannerPresenter : NSObject
{
    _Bool _presented;
    _Bool _animating;
    _Bool _isPresentedWithAnimation;
    id <VOXBannerPresenterDelegate> _delegate;
    UIView *_contentContainerView;
}

+ (id)presenter;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) _Bool isPresentedWithAnimation; // @synthesize isPresentedWithAnimation=_isPresentedWithAnimation;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) __weak id <VOXBannerPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showBannerWithText:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 withYOffset:(double)arg4 animated:(_Bool)arg5;
- (void)updateBannerText:(id)arg1;
- (void)dismissBannerAnimated:(_Bool)arg1;
- (void)showBannerWithText:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 animated:(_Bool)arg4;
- (void)showBannerWithText:(id)arg1 fromView:(id)arg2 inView:(id)arg3 animated:(_Bool)arg4;

@end

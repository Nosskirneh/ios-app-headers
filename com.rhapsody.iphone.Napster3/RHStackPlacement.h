//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RHStackNavigationController, RHStackNavigationView, UIViewController;

@interface RHStackPlacement : NSObject
{
    _Bool _shouldDisplayOverlay;
    _Bool _superOrdinate;
    int _overlayPolicy;
    RHStackNavigationController *_owner;
    RHStackNavigationView *_stackView;
    UIViewController *_viewController;
    struct CGRect _placementFrame;
}

@property(nonatomic) _Bool superOrdinate; // @synthesize superOrdinate=_superOrdinate;
@property(nonatomic) _Bool shouldDisplayOverlay; // @synthesize shouldDisplayOverlay=_shouldDisplayOverlay;
@property(nonatomic) int overlayPolicy; // @synthesize overlayPolicy=_overlayPolicy;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) RHStackNavigationView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) struct CGRect placementFrame; // @synthesize placementFrame=_placementFrame;
@property(nonatomic) __weak RHStackNavigationController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)updateVisibilityWithScrollOffset:(struct CGPoint)arg1 frame:(struct CGRect)arg2;
- (void)layoutStackViewWithFrame:(struct CGRect)arg1;
- (void)layoutStackView;
- (void)updateShouldDisplayOverlayWithOrientation:(long long)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;

@end

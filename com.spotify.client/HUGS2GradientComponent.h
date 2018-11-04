//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponentViewObserver.h"
#import "HUBComponentWithChildren.h"

@class GLUEGradientView, NSArray, NSSet, UIView;

@interface HUGS2GradientComponent : HUGSThemableComponent <HUBComponentWithChildren, HUBComponentViewObserver>
{
    UIView *_view;
    id <HUBComponentChildDelegate> _childDelegate;
    id <HUBComponentModel> _model;
    NSArray *_childViews;
    GLUEGradientView *_gradientView;
}

@property(retain, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(copy, nonatomic) NSArray *childViews; // @synthesize childViews=_childViews;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <HUBComponentChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)updateGradientLayerWithFrame:(struct CGRect)arg1;
- (void)viewDidResize;
- (void)viewWillAppear;
- (id)gradientStyle;
- (void)configureViewWithModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@property(readonly, nonatomic) NSSet *layoutTraits;

@end

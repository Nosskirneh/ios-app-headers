//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBComponentView.h"

#import "EXP_HUBComponentViewWithChildren.h"

@class NSArray, SPTPremiumDestinationGLUETheme, UIView;

@interface SPTPremiumDestinationValueComparisonCardComponentView : EXP_HUBComponentView <EXP_HUBComponentViewWithChildren>
{
    id <EXP_HUBComponentViewChildDelegate> _childDelegate;
    SPTPremiumDestinationGLUETheme *_theme;
    NSArray *_childComponentViews;
    UIView *_contentView;
}

+ (struct CGRect)layoutRectForComponentView:(id)arg1 fromPreviousComponentView:(id)arg2;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *childComponentViews; // @synthesize childComponentViews=_childComponentViews;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <EXP_HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (void).cxx_destruct;
- (void)removeChildComponentViews:(id)arg1;
- (void)setupChildComponentsForModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

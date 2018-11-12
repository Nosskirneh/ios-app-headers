//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, UIView;
@protocol HUBComponentModel;

@protocol HUBComponent
@property(retain, nonatomic) UIView *view;
@property(readonly, nonatomic) NSSet *layoutTraits;
- (void)configureViewWithModel:(id <HUBComponentModel>)arg1 containerViewSize:(struct CGSize)arg2;
- (void)prepareViewForReuse;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id <HUBComponentModel>)arg1 containerViewSize:(struct CGSize)arg2;
- (void)loadView;
@end


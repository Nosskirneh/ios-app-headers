//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class EXP_HUBComponentView, NSSet;
@protocol EXP_HUBComponentModel;

@protocol EXP_HUBComponent
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id <EXP_HUBComponentModel>)arg1 containerViewSize:(struct CGSize)arg2;
- (EXP_HUBComponentView *)createViewWithFrame:(struct CGRect)arg1;
@end


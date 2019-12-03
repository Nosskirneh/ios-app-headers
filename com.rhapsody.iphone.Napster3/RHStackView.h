//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface RHStackView : UIView
{
    _Bool _verticalLayout;
    double _padding;
}

@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool verticalLayout; // @synthesize verticalLayout=_verticalLayout;
- (void)horizontallyLayoutHiddenViews:(id)arg1;
- (void)verticallyLayoutHiddenViews:(id)arg1;
- (void)layoutHiddenViews:(id)arg1;
- (void)horizontallyLayoutVisibleViews:(id)arg1;
- (void)verticallyLayoutVisibleViews:(id)arg1;
- (void)layoutVisibleViews:(id)arg1;
- (_Bool)isHorizontalAttribute:(long long)arg1;
- (_Bool)isHorizontalConstraint:(id)arg1;
- (_Bool)isVerticalAttribute:(long long)arg1;
- (_Bool)isVerticalConstraint:(id)arg1;
- (void)removeConstraintsForView:(id)arg1;
- (void)removeCurrentConstraints;
- (void)updateLayout;
- (void)invalidateLayout;
- (void)awakeFromNib;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface RHControlAreaExtender : UIView
{
}

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInsideExtendedView:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) UIView *extendedView;
- (id)initWithExtendedView:(id)arg1 andFrame:(struct CGRect)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface ShrinkView : UIView
{
}

- (void)setFrame:(struct CGRect)arg1;
- (struct CGPoint)shrinkAnchorForBounds:(struct CGRect)arg1;
- (void)expandWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (void)shrinkWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double shrinkCenter;
- (void)setupShrinkView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GOODraggableView;

@protocol GOODraggableViewDelegate
- (void)draggableView:(GOODraggableView *)arg1 draggingEndedWithVelocity:(struct CGPoint)arg2;
- (void)draggableViewBeganDragging:(GOODraggableView *)arg1;
- (_Bool)draggableView:(GOODraggableView *)arg1 shouldBeginDraggingWithVelocity:(struct CGPoint)arg2;
- (double)maximumHeightForDraggableView:(GOODraggableView *)arg1;
@end

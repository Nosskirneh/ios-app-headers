//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDCDraggableView;

@protocol MDCDraggableViewDelegate <NSObject>
- (void)draggableView:(MDCDraggableView *)arg1 draggingEndedWithVelocity:(struct CGPoint)arg2;
- (void)draggableViewBeganDragging:(MDCDraggableView *)arg1;
- (_Bool)draggableView:(MDCDraggableView *)arg1 shouldBeginDraggingWithVelocity:(struct CGPoint)arg2;
- (double)maximumHeightForDraggableView:(MDCDraggableView *)arg1;
@end

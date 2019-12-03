//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIView;

@interface HUGSCustomViewControl : UIControl
{
    UIView *_contentView;
    CDUnknownBlockType _onHighlightChange;
    CDUnknownBlockType _onSelectionChange;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType onSelectionChange; // @synthesize onSelectionChange=_onSelectionChange;
@property(readonly, copy, nonatomic) CDUnknownBlockType onHighlightChange; // @synthesize onHighlightChange=_onHighlightChange;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithView:(id)arg1 onHighlightChange:(CDUnknownBlockType)arg2 onSelectionChange:(CDUnknownBlockType)arg3;
- (id)initWithStatefulView:(id)arg1;

@end

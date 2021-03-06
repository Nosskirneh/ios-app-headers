//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary;
@protocol GPMDetailHeaderPanelDelegate;

@interface GPMDetailHeaderPanel : UIView
{
    NSMutableArray *_buttons;
    NSMutableDictionary *_buttonsMap;
    id <GPMDetailHeaderPanelDelegate> _delegate;
}

@property(nonatomic) __weak id <GPMDetailHeaderPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createButtonWithTitleKey:(id)arg1 imageName:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)createButtonForType:(unsigned long long)arg1;
- (id)buttonForType:(unsigned long long)arg1;
- (void)buttonClicked:(id)arg1;
- (id)visibleButtons;
- (id)accessibilityElements;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setButtonWithType:(unsigned long long)arg1 enabled:(_Bool)arg2;
- (void)setButtonWithType:(unsigned long long)arg1 hidden:(_Bool)arg2;
- (void)addButtonWithType:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


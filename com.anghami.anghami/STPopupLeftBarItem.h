//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

@class UIControl, UIView;

@interface STPopupLeftBarItem : UIBarButtonItem
{
    UIControl *_customView;
    UIView *_bar1;
    UIView *_bar2;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setTintColor:(id)arg1;
- (void)updateLayout;
- (void)setType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
